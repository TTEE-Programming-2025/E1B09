#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,wrong=0,password;
	printf("*********************************\n");			//印出個人風格的畫面
	for(i=1;i<=6;i++)
	{	
		printf("| \\(> _ <)\\ \\(> _ <)\\ \\(> _ <)\\ |\n");
		printf("| \\(．w．)/ \\(．w．)/ \\(．w．)/ |\n");
		printf("| /(Q m Q)/ /(Q m Q)/ /(Q m Q)/ |\n");
	}
	printf("***********************************\n");
	
		printf("密碼是2025\n");
	
	do												    	//密碼判斷 
	{
		if(wrong==3)										//當wrong=3時代表密碼錯誤三次將結束此程式
		{
			printf("抱歉密碼已經錯誤三次，將結束此程式"); 
			return 0;
		}
		
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("密碼錯誤請重新輸入\n");
		wrong++;									    	//密碼錯誤時此wrong變數+1 
	
	}while(1);
	system("pause");
	return 0;
}
