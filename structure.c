#include<stdio.h>

struct person
{
	char address[10];
	char city[10];
	int zip;
};

typedef struct 
{
	struct person member;
}family;

int main(void)
{
	family mine;
			
	printf("����� �ּҸ� �Է��ϼ���!\n");
	scanf("%s",mine.member.address);
	printf("����� ���� ���ø� �Է��ϼ���!\n");
	scanf("%s",mine.member.city);
	printf("����� �����ȣ�� �Է��ϼ���!\n");
	scanf("%d",&mine.member.zip);

	printf("����� ����\n");
	printf("�ּ�	: %s \n",mine.member.address);
	printf("����	: %s \n",mine.member.city);
	printf("�����ȣ: %d \n\n",mine.member.zip);
		
	return 0;
}