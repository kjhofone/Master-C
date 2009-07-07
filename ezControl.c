#include <stdio.h>

void menu();

int main(void)
{
	
	int select;
	while(1)
	{
		menu();
		int choice;
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				system("ipconfig");
				break;
			case 2:
				system("ipconfig /all");
				break;
			case 3:
				system("ipconfig /renew" );
				break;
			case 4:
				system("ipconfig /release" );
				break;
			case 5:
				system("dfrg.msc" );
				break;
			case 6:
				system("appwiz.cpl " );
				break;
			case 7:
				system("devmgmt.msc" );
				break;
			case 8:
				system("ntbackup" );
				break;
			case 9:
				system("Sysdm.cpl" );
				break;
			case 0:
				exit(1);
			default: 
				break;
		}
		printf("\n\n\n\n");
	}	
	return 0;
}

void menu()
{
	printf("\t\t┏━━━━━━    KT IT  서포터즈   ━━━━━━┓\n");
	printf("\t\t┃                                              ┃\n");
	printf("\t\t┃\t  1. 내 PC의 IP 확인   \t\t\t┃\n");
	printf("\t\t┃\t  2. IP 자세히 보기   \t\t\t┃\n");
	printf("\t\t┃\t  3. IP 갱신하기   \t\t\t┃\n");
	printf("\t\t┃\t  4. IP 해제하기/네트워크 연결 끊기   \t┃\n");
	printf("\t\t┃\t  5. 디스크 조각모음   \t\t\t┃\n");
	printf("\t\t┃\t  6. 프로그램 추가/삭제   \t\t┃\n");
	printf("\t\t┃\t  7. 장치관리자   \t\t\t┃\n");
	printf("\t\t┃\t  8. 시스템 복원   \t\t\t┃\n");
	printf("\t\t┃\t  9  시스템 등록 정보   \t\t┃\n");
	printf("\t\t┃\t  0. 종료하기   \t\t\t┃\n");
	printf("\t\t┃                                              ┃\n");
	printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\n\t 원하는 메뉴를 선택해주세요 : ");
}