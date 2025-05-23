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
			printf("抱歉密碼已經錯誤三次，將結束此程式."); 
			return 0;
		}
		
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)			
		{
			break;
		}
		
		printf("密碼錯誤請重新輸入\n");
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
		
		printf("請輸入你要選擇的選項:");
		fflush(stdin);
		scanf("%c",&option);
		
		if(option=='e')
		{
			do
			{ 
				printf("確定離開?(y/n):");
				fflush(stdin);
				scanf("%c",&ch1);
				if(ch1=='y'||ch1=='n')
				{
					break;
				}
				printf("輸入錯誤，請輸入y或n\n"); 
				
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
