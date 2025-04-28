#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int i,j,k,l,m,n,wrong=0,password,num;
	char option,ch1,ch2,test;
	
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
		fflush(stdin);										//清除緩衝區 
		scanf("%c",&option);
			
		if(option=='a'||option=='A')						// a 選項 
		{
			system("CLS");
		
			do{
				printf("請輸入a-n的字元:");
				fflush(stdin);								//清除緩衝區
				scanf("%c",&ch1);
				if(ch1>='a'&&ch1<='n')						//判斷輸入字元是否在a-n之間 
				{
					break;
				}
				printf("輸入錯誤請重新輸入\n");
			}while(1);
		
			for(j=ch1;j>='a';j--)							//印出三角形 
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
		
		if(option=='b'||option=='B')						//b選項 
		{
			do
			{
				printf("請輸1-9的整數:");
				fflush(stdin);								//清除緩衝區 
				scanf("%d",&num);
				if(num>=1&&num<=9)							//判斷輸入的數是否在1-9之間 
				{
					break;
				}
				printf("輸入錯誤請重新輸入\n");
			}while(1);
		
			for(m=1;m<=num;m++)								//印出1*1至n*n的乘法表 
			{
				for(n=1;n<=num;n++)
				{
					printf("%d * %d =%d\n",m,n,m*n);
				}
			}
			test=getch();
		}
		
		if(option=='c'||option=='C')						//c選項 
		{
			do
			{ 
				printf("Continue?(y/n):");
				fflush(stdin);
				scanf("%c",&ch2);
				if(ch2=='y'||ch2=='Y'||ch2=='n'||ch2=='N')	//判斷輸入的字元是否在範圍內 
				{
					break;
				}
				printf("輸入錯誤，請輸入Y/y或N/n\n"); 
				
			}while(1);
			
			if(ch2=='Y'||ch2=='y')							//回到主選單 
			{
				continue;
			}
			
			if(ch2=='N'||ch2=='n')							//結束迴圈 
			{
				return 0;
			}
			test=getch();
		}
	}
	
	system("pause");
	return 0;
}
