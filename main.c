#include <stdio.h>

int main(void)
{
	printf("****** Master-C ******\n");
	int select;
	do
	{
		
		printf("1. ���α׷� �Ұ�\n");
		printf("2. ������ �׽�Ʈ ���α׷�\n");
		printf("3. ���� ������ ���� ũ�� ��\n");
		printf("4. 3�� n���� ����ϴ� ���α׷�\n");
		printf("5. ������\n");
		scanf("%d",&select);
	}while(select>5);
	return 0;
}