#include <stdio.h>

int main(void)
{
	FILE *fp;
	char filename[10];
	puts("파일 이름을 입력하세요");
	gets(filename);
	
	if( (fp=fopen(filename,"w") )==NULL)
	{
		fprintf(stderr,"file open error accured");
		exit(1);
	}
	fprintf(fp,"File accessing...");
	
	int array[5]={1,3,5,7,9};
	
	fclose(fp);
	
	if( (fp=fopen(filename,"r") )==NULL)
	{
		fprintf(stderr,"file open error accured");
		exit(1);
	}
	
	while(!feof(fp))
	{	
		char buffer[255];
		fgets(buffer,255,fp);
		printf(buffer);
	}
	fclose(fp);
	
	return 0;
}