#include <stdio.h>
#include <string.h>

#define MAXLINES 5000	//max line number

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);

void qsort2(char *lineptr[], int left, int right,//void
		int (*comp)(void *, void *));///
int numcmp(char *, char *);///

int main(int argc, char *argv[])
{
	int nlines;
	int numeric=0;///
	if(argc>1&&strcmp(argv[1],"-n")==0)numeric=1;///
	if((nlines=readlines(lineptr, MAXLINES))>=0){
		qsort2(lineptr, 0, nlines-1,
		(int (*)(void *, void *))(numeric?numcmp:strcmp));///
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

void qsort2(char *v[], int left, int right,//void
	int (*comp)(void *, void *))///
{
	void swap2(char *v[], int i, int j);//void
	if(left>=right)return;
	swap2(v, left, (left+right)/2);
	int last=left;
	for(int i=left+1;i<=right;i++)
		//if(strcmp(v[i],v[left])<0)
		if((*comp)(v[i],v[left])<0)///
			swap2(v,++last,i);
	swap2(v,left,last);
	qsort2(v,left,last-1,comp);///
	qsort2(v,last+1,right,comp);///
}

#include <stdlib.h>	
int numcmp(char *s1, char *s2){

	double v1, v2;
	v1=atof(s1);
	v2=atof(s2);
	printf("%f %f \n", v1, v2);
	if(v1<v2)return -1;
	else if(v1>v2)return 1;
	else return 0;
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
void swap2(char *v[], int i, int j){
	char *temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}
//*/
