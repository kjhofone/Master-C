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
	printf("\t\t��������������    KT IT  ��������   ��������������\n");
	printf("\t\t��                                              ��\n");
	printf("\t\t��\t  1. �� PC�� IP Ȯ��   \t\t\t��\n");
	printf("\t\t��\t  2. IP �ڼ��� ����   \t\t\t��\n");
	printf("\t\t��\t  3. IP �����ϱ�   \t\t\t��\n");
	printf("\t\t��\t  4. IP �����ϱ�/��Ʈ��ũ ���� ����   \t��\n");
	printf("\t\t��\t  5. ��ũ ��������   \t\t\t��\n");
	printf("\t\t��\t  6. ���α׷� �߰�/����   \t\t��\n");
	printf("\t\t��\t  7. ��ġ������   \t\t\t��\n");
	printf("\t\t��\t  8. �ý��� ����   \t\t\t��\n");
	printf("\t\t��\t  9  �ý��� ��� ����   \t\t��\n");
	printf("\t\t��\t  0. �����ϱ�   \t\t\t��\n");
	printf("\t\t��                                              ��\n");
	printf("\t\t��������������������������������������������������\n");
	printf("\n\t ���ϴ� �޴��� �������ּ��� : ");
}