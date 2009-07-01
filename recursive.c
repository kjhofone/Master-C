#include <stdio.h>

int recursive(int n)
{
	int data=3;
	if(n==1)
		return data*n;
	else
		return data*recursive(n-1);
}

int main(void)
{
	int input;
	printf("이 프로그램은 3의 n 제곱을 출력해주는 프로그램입니다.\n");
	printf("제곱할 숫자를 입력해주세요.\n");
	scanf("%d",&input);
	printf("3의 %d 제곱한 결과는 %d 입니다.\n",input,recursive(input));
	return 0;
}