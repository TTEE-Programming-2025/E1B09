#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,k,l,wrong=0,password;
	char option,ch1,test;
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
	
	while(1)
	{
		system("CLS");										//清除螢幕
		printf("@@@@@@@@@@@@@@@@@@@@@@\n");					//個人風格選單
		printf("@                    @\n");
		printf("@  a. 畫出直角三角形 @\n");
		printf("@                    @\n");
		printf("@  b. 顯示乘法表     @\n");
		printf("@                    @\n");
		printf("@  c. 結束           @\n");
		printf("@                    @\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@\n");
		
		printf("請輸入你要選擇的選項(a,b,c):"); 			//輸入選擇
		fflush(stdin);									//清除緩衝區 
		scanf("%c",&option);
			
		if(option=='a'||option=='A')						// a 選項 
		{
			system("CLS");
		
			do{
				printf("請輸入a-n的字元:");
				fflush(stdin);
				scanf("%c",&ch1);
				if(ch1>='a'&&ch1<='n')
				{
					break;
				}
				printf("輸入錯誤請重新輸入\n");
			}while(1);
		
			for(j=ch1;j>='a';j--)
			{
				for(k='a';k<=j;k++)
				{
					printf(" "); 
				}
			
				for(l=j;l<=ch1;l++)
				{
					printf("%c",l);
				}
				printf("\n");
			}
			test=getch();
		}
	} 
	system("pause");
	return 0;
}
