#include <stdio.h>
#include <stdlib.h> //malloc을 쓰기 위해 필요한 헤더

int main(void)
{
	char *input1,*input2;
	puts("10자 이하의 두 단어를 입력하세요.");
	input1=(char*)malloc(10);
	input2=(char*)malloc(10);
	gets(input1);
	scanf("%s",input2);
	
	int *index;
	index=(int*)malloc(10*sizeof(int));
	scanf("%d",index);
	printf("입력한 단어는 %s 입니다.\n", input1);
	printf("입력한 단어는 %s 입니다.\n", input2);
	printf("입력한 수는 %d 입니다.\n ", *index);
	
	return 0;
	
}