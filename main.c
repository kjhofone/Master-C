#include <stdio.h>

int main(void)
{
	printf("****** Master-C ******\n");
	int select;
	do
	{
		
		printf("1. 프로그램 소개\n");
		printf("2. 간단한 테스트 프로그램\n");
		printf("3. 변수 유형에 따른 크기 비교\n");
		printf("4. 3의 n제곱 출력하는 프로그램\n");
		printf("5. 나가기\n");
		scanf("%d",&select);
	}while(select>5);
	return 0;
}