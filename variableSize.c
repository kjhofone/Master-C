#include<stdio.h>
int main(void)
{
	printf("char 의 크기는 %d 입니다.\n",sizeof(char));
	printf("int 의 크기는 %d 입니다.\n",sizeof(int));
	printf("short 의 크기는 %d 입니다.\n",sizeof(short));
	printf("long 의 크기는 %d 입니다.\n",sizeof(long));
	printf("float 의 크기는 %d 입니다.\n",sizeof(float));
	printf("double 의 크기는 %d 입니다.\n",sizeof(double));

	printf("unsigned char 의 크기는 %d 입니다.\n",sizeof(unsigned char));
	printf("unsigned int 의 크기는 %d 입니다.\n",sizeof(unsigned int));
	printf("unsigned short 의 크기는 %d 입니다.\n",sizeof(unsigned short));
	printf("unsigned long 의 크기는 %d 입니다.\n",sizeof(unsigned long));
	
	return 0;
}
