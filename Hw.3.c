#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(void)
{
	int i,j,wrong=0,password,a1=0,a2,a3;
	char option,accepted;
	char seats[9][9];
	
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
	
	printf("歡迎~\n");
	
	do			//密碼判斷 
	{
		if(wrong==3)			//當wrong=3時表示密碼錯誤三次將結束此程式
		{
			printf("抱歉密碼已經錯誤三次，將結束此程式"); 
			return 0;
		}
		
		printf("請輸入四個數字的密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("密碼錯誤請重新輸入\n");
		wrong++;			//密碼錯誤時此wrong變數+1 
	
	}while(1);
	
	while(1)
	{
		system("CLS");
		
		printf("----------[Booking System]----------\n");			//Display the main menu
		printf("| a. Available seats               |\n");
		printf("| b. Arrange for you               |\n");
		printf("| c. Choose by yourself            |\n");
		printf("| d. Exit                          |\n");
		printf("------------------------------------\n");
		
		printf("請輸入你要選擇的選項:");
		fflush(stdin);
		scanf("%c",&option);
		//Option a
		if(option=='a')
		{
			for(i=0;i<9;i++)
			{
				for(j=0;j<9;j++)
				{
					seats[i][j]='-';
				}
			}
			
			while(a1<=9)
			{
				a2=rand()%9;
				a3=rand()%9;
				if(seats[a2][a3]!='*')
				{
					seats[a2][a3]='*';
					a1++;
				}
			}
			
			printf("\\123456789\n");
			for(i=8;i>=0;i--)
			{
				printf("%d ",i+1);
				for(j=0;j<=8;j++)
				{
					printf("%c",seats[i][j]);
				}
				printf("\n");
			}
			system("pause");
		}
		//Option d
		if(option=='d')
		{
		do
			{ 
				printf("Continue?(y/n):");
				fflush(stdin);
				scanf("%c",&accepted);
				if(accepted=='y'||accepted=='n')			//判斷輸入的字元是否在範圍內 
				{
					break;
				}
				printf("輸入錯誤，請輸入y或n\n"); 
				
			}while(1);
			
			if(accepted=='y')			//回到主選單 
			{
				continue;
			}
			
			if(accepted=='n')			//結束迴圈 
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}
