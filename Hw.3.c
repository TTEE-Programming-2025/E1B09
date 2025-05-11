#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,wrong=0,password;
	
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
		system("pause");
		system("CLS");
		
		printf("----------[Booking System]----------\n");			//Display the main menu
		printf("| a. Available seats               |\n");
		printf("| b. Arrange for you               |\n");
		printf("| c. Choose by yourself            |\n");
		printf("| d. Exit                          |\n");
		printf("------------------------------------\n");
	}

	system("pause");
	return 0;
}
