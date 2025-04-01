#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,a;
	for(i=1;i<=5;i++)/*執行五次下面四行的程式*/ 
	{
		printf("o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O\n");
		printf("O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o\n");
		printf("O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O\n");
		printf("o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o\n");
	}
	system("pause");/*等待使用者輸入按鍵*/ 
	system("CLS");/*清除螢幕*/ 
	
	printf("請輸入密碼:");
	scanf("%d",&a);/* 輸入密碼*/ 
	if(a==2025)/*判斷密碼是否正確*/ 
	{
		system("pause");/*等待使用者輸入按鍵*/ 
		system("CLS");/*清除螢幕*/
	}
	else
	printf("密碼錯誤\n");
	return 0; 
} 
