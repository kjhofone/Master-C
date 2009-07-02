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
			
	printf("당신의 주소를 입력하세요!\n");
	scanf("%s",mine.member.address);
	printf("당신의 거주 도시를 입력하세요!\n");
	scanf("%s",mine.member.city);
	printf("당신의 우편번호를 입력하세요!\n");
	scanf("%d",&mine.member.zip);

	printf("당신의 정보\n");
	printf("주소	: %s \n",mine.member.address);
	printf("도시	: %s \n",mine.member.city);
	printf("우편번호: %d \n\n",mine.member.zip);
		
	return 0;
}