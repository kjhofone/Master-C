#include <stdio.h>
#include <stdlib.h> //malloc�� ���� ���� �ʿ��� ���

int main(void)
{
	char *input1,*input2;
	puts("10�� ������ �� �ܾ �Է��ϼ���.");
	input1=(char*)malloc(10);
	input2=(char*)malloc(10);
	gets(input1);
	scanf("%s",input2);
	
	int *index;
	index=(int*)malloc(10*sizeof(int));
	scanf("%d",index);
	printf("�Է��� �ܾ�� %s �Դϴ�.\n", input1);
	printf("�Է��� �ܾ�� %s �Դϴ�.\n", input2);
	printf("�Է��� ���� %d �Դϴ�.\n ", *index);
	
	return 0;
	
}