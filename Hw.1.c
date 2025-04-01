#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,a;
	char b;
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
		printf("密碼正確\n歡迎~~~~\n");
		system("pause"); 
		system("CLS");
		printf("wwwwwwwwwwwwwwwwwwwwwwwww\n");
		printf("w  'A'-'Z':  Uppercase  w\n");
		printf("w  'a'-'z':  Lowercase  w\n");
		printf("w  '0'-'9':    Digit    w\n");
		printf("w Otherwise:E1B09 林坤宏w\n");
		printf("wwwwwwwwwwwwwwwwwwwwwwwww\n\n");
		printf("請輸入一字元:");
		fflush(stdin);/*使 input buffer 淨空*/ 
		scanf("%c",&b);
		if((b>='A')&&(b<='Z'))
		printf("Uppercase\n");
		else if((b>='a')&&(b<='z'))
		printf("Lowercase\n");
		else if((b>='0')&&(b<='9'))
		printf("Digit\n");
		else
		printf("E1B09 林坤宏\n");
		system("pause"); 
		return 0;
	}
	else
	printf("密碼錯誤\n");
	return 0;
	/*心得:這次作業用到了很多上課教導的知識， 
		   像是for迴圈、if-else條件判斷等等，
		   這也是我第一次接觸git和github，
		   學到很多相關的知識， 
		   相信在之後會對我有幫助。*/ 
} 
