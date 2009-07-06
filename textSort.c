#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxLine 10

void sort(char *buffer[], int num);
void print(char *buffer[], int num);

int main(void)
{
	int numLine;
	puts("입력한 단어의 수를 입력하시오");
	scanf("%d",&numLine);
	if(numLine<=0 || numLine>MaxLine)
	{	
		fprintf(stderr,"error occur");
		exit(-1);
	}
	
	char *buffer[numLine+1];
	int count;
	for(count=0;count<numLine;count++)
	{
		buffer[count]=(char*)malloc(10);
		puts("단어를 입력하세요");
		scanf("%s",buffer[count]);
	}
	sort(buffer,numLine);
	print(buffer,numLine);
		
	return 0;
}

void sort(char *buffer[], int num)
{
	int count,count1;
	for(count=1;count<num;count++)
	{
		for(count1=0;count1<num-1;count1++)
		{
			if(strcmp(buffer[count1],buffer[count1+1])>0)
			{	
				char* temp=buffer[count1];
				buffer[count1]=buffer[count1+1];
				buffer[count1+1]=temp;
			}
		}
	}
}
void print(char *buffer[], int num)
{
	int count;
	for(count=0;count<num;count++)
	{
		printf(buffer[count]);
		printf("\n");
	}
}