#include <stdio.h>
#include <string.h>

#define MAXLINES 5000	//max line number

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

int main()
{
	int nlines;
	if((nlines=readlines(lineptr, MAXLINES))>=0){
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	}else{
		puts("error: input too big to sort\n");
		return 1;
	}
		
	return 0;
}

#define MAXLEN 1000	//max line lenght
int getline2(char *, int );
char *alloc(int);

// get input line
int readlines(char *lineptr[], int maxlines){
	int len,nlines=0;
	char *p, line[MAXLEN];
	while((len=getline2(line, MAXLEN))>0){
		if(nlines>=maxlines||(p=alloc(len))==NULL)return -1;
		else {
			line[len-1]='\0';//'\n'='\0'
			strcpy(p,line);
			lineptr[nlines++]=p;
		}
	}
	return nlines;
}
/*
void writelines(char *lineptr[], int nlines){
	for(int i=0; i<nlines; i++){
		puts(lineptr[i]);
	}
}*/

//write ouput line
void writelines(char *lineptr[], int nlines){
	while(nlines-->0){
		puts(*lineptr++);
	}
}

void qsort(char *v[], int left, int right){
	void swap(char *v[], int i, int j);//
	if(left>=right)return;
	swap(v, left, (left+right)/2);
	int last=left;
	for(int i=left+1;i<=right;i++)
		if(strcmp(v[i],v[left])<0)
			swap(v,++last,i);
	swap(v,left,last);
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}


//5.1
int getline2(char s[], int lim){
	int c, i=0;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')s[i++]=c;
	if(c=='\n')s[i++]=c;
	s[i]='\0';
	return i;
}



//5.4
#define ALLOCSIZE 1000000
static char allocbuf[ALLOCSIZE];
static char *allocp=allocbuf;

char *alloc(int n){
	if(allocbuf+ALLOCSIZE-allocp >= n){
		allocp+=n;
		return allocp-n;
	}else{
		return 0;
	}
}


//4.10
void swap(char *v[], int i, int j){
	char *temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}
//*/
