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
	printf("�� ���α׷��� 3�� n ������ ������ִ� ���α׷��Դϴ�.\n");
	printf("������ ���ڸ� �Է����ּ���.\n");
	scanf("%d",&input);
	printf("3�� %d ������ ����� %d �Դϴ�.\n",input,recursive(input));
	return 0;
}