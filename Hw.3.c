#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,wrong=0,password;
	char option,accepted;
	
	printf("**********************************************\n");			//Print a personalized screen display
    for (i=0;i<20;i++) {
        for (j=0;j<20-i; j++)
		{
			printf(" ");
		}
        for (j=0;j<=i;j++)
        {
			printf("/\\");
		} 
        printf("\n");
        } 
	printf("**********************************************\n");
	
	printf("�w��~\n");
	
	do			//�K�X�P�_ 
	{
		if(wrong==3)			//��wrong=3�ɪ�ܱK�X���~�T���N�������{��
		{
			printf("��p�K�X�w�g���~�T���A�N�������{��"); 
			return 0;
		}
		
		printf("�п�J�|�ӼƦr���K�X:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("�K�X���~�Э��s��J\n");
		wrong++;			//�K�X���~�ɦ�wrong�ܼ�+1 
	
	}while(1);
	
	while(1)
	{
		system("pause");
		system("CLS");
		
		printf("----------[Booking System]----------\n");			//Display the main menu
		printf("| a. Available seats               |\n");
		printf("| b. Arrange for you               |\n");
		printf("| c. Choose by yourself            |\n");
		printf("| d. Exit                          |\n");
		printf("------------------------------------\n");
		
		printf("�п�J�A�n��ܪ��ﶵ:");
		fflush(stdin);
		scanf("%c",&option);
		//Option d
		if(option=='d')
		{
		do
			{ 
				printf("Continue?(y/n):");
				fflush(stdin);
				scanf("%c",&accepted);
				if(accepted=='y'||accepted=='n')			//�P�_��J���r���O�_�b�d�� 
				{
					break;
				}
				printf("��J���~�A�п�Jy��n\n"); 
				
			}while(1);
			
			if(accepted=='y')			//�^��D��� 
			{
				continue;
			}
			
			if(accepted=='n')			//�����j�� 
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}
