#include<stdio.h>
#include<stdlib.h>
int optionE();
int main(void)
{
	int h=20,i,j,k,wrong=0,password;
	char option,ch1;

	printf("---------------------------------------------\n");
    for (i=1;i<=h;i++) {
    	
        for (j=1;j<=h-i;j++) {
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++) {
            printf("@");
        }
        printf("\n");
    }
    
    for (i=1;i<= h/3;i++) {
        for (j=1;j<h;j++) {
            printf(" ");
        }
        printf("|\n");
    }
	printf("---------------------------------------------\n");
	
	printf("Welcome~\n");
		
	do			
	{
		if(wrong==3)			
		{
			printf("��p�K�X�w�g���~�T���A�N�������{��."); 
			return 0;
		}
		
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)			
		{
			break;
		}
		
		printf("�K�X���~�Э��s��J\n");
		wrong++;
	}while(1);
	
	while(1)
	{
		system("CLS");
		printf("------------[Grade System]----------\n");
		printf("|                                  |\n");
		printf("| a. Enter student grades          |\n");
		printf("| b. Display student grades 	   |\n");
		printf("| c. Search for student grades     |\n");
		printf("| d. Grade ranking                 |\n");
		printf("| e. Exit system                   |\n");
		printf("|                                  |\n");
		printf("------------------------------------\n");
		
		printf("�п�J�A�n��ܪ��ﶵ:");
		fflush(stdin);
		scanf("%c",&option);
		
		if(option=='e')
		{
			do
			{ 
				printf("�T�w���}?(y/n):");
				fflush(stdin);
				scanf("%c",&ch1);
				if(ch1=='y'||ch1=='n')
				{
					break;
				}
				printf("��J���~�A�п�Jy��n\n"); 
				
			}while(1);
			
			if(ch1=='y')						
			{
				return 0;
			}
			
			if(ch1=='n')						
			{
				continue;
			}
		}
	}
	system("pause");
	return 0;
}
int optionE()
{

}
