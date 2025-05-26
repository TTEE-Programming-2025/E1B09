#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max 10			//最大學生數量為10
void optionA();			//宣告選項功能函式
void optionB();
void optionC();
void optionD();
int n;			//記錄實際輸入的學生數

struct a
	{
		char name[20];			//姓名
    	char studentID[7];		//學號 (6位字元 + '\0')
    	int math;				//數學成績
   		int physics;			//物理成績
   		int english;			//英文成績
    	float avg;				//平均成績
	} student[max];			
int main(void)
{
	int h=20,i,j,k,wrong=0,password;
	char option,ch1;
	
	printf("---------------------------------------------\n");			//個人風格畫面		
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
		
	do			//登入密碼驗證，最多輸入3次
	{
		if(wrong==3)			//當錯誤3次時結束程式 		
		{
			printf("抱歉密碼已經錯誤三次，將結束此程式."); 
			return 0;
		}
		
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)			
		{
			break;			//如果正確就跳出迴圈 
		}
		
		printf("密碼錯誤請重新輸入\n");
		wrong++;			//錯誤時wrong++ 
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
		scanf("%c",&option);			//讀入選項
		
		if(option=='a')
		{
			system("CLS");
			optionA();
		}
		
		if(option=='b')
		{
			system("CLS");
			optionB();
		}
		
		if(option=='c')
		{
			system("CLS");
			optionC();
		}
		
		if(option=='d')
		{
			system("CLS");
			optionD();
		} 
		
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
void optionA()			//選項A 輸入學生資料
{
	int a1,i,j;
	while(1)
	{
		printf("請輸入要輸入幾個學生(5-10):");			//輸入學生人數，限制為5~10名之間
		fflush(stdin);
		scanf("%d",&n);
		if(n>=5&&n<=10)
		{
			break;
		}
		printf("請輸入5-10個\n");
	}

	
	for(i=0;i<n;i++)			//輸入每位學生的資料
	{
	 	printf("第%d位學生資料\n",i+1);			
	 	printf("請輸入姓名:");
	 	fflush(stdin);
	 	scanf("%s",student[i].name);
	 	
	 	do
		{
			a1=0;
            printf("請輸入學號(6位整數):");
            fflush(stdin);
            scanf("%s",student[i].studentID);
            if (strlen(student[i].studentID)!=6) 
			{
				printf("學號錯誤，請重新輸入\n");
				a1=1;
				
			} 
            else
            {
            	for (j = 0; j < 6; j++) 
				{
                    if (student[i].studentID[j]<'0'||student[i].studentID[j]>'9') 
					{
                        printf("錯誤! 學號中不能包含英文字母。\n");
                        a1=1;
                        break;
					}
        		}
			}
		}while(a1==1);
		
		while(1)
		{
			printf("請輸入數學成績:");
			fflush(stdin);
            scanf("%d",&student[i].math);
            if(student[i].math>=0&&student[i].math<=100)
            {
            	break;
			}	
			printf("請輸入0到100的數字\n");
		}
		
		while(1)
		{
			printf("請輸入物理成績:");
			fflush(stdin);
            scanf("%d",&student[i].physics);
            if(student[i].physics>=0&&student[i].physics<=100)
            {
            	break;
			}	
			printf("請輸入0到100的數字\n");
		}
		while(1)
		{
			printf("請輸入英文成績:");
			fflush(stdin);
            scanf("%d",&student[i].english);
            if(student[i].english>=0&&student[i].english<=100)
            {
            	break;
			}	
			printf("請輸入0到100的數字\n");
		}
		student[i].avg=(student[i].math+student[i].physics+student[i].english)/3;			//計算平均成績
	}
	printf("輸入完畢");
	system("pause");
} 
void optionB()			//選項 B 顯示所有學生資料
{
	int i;
	printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "學生姓名", "學號", "數學", "物理", "英文", "平均");
	for(i=0;i<n;i++)
	{
   		printf("%-10s %-10s %-6d %-6d %-6d %-6.1f\n",student[i].name,student[i].studentID,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	system("pause");
}
void optionC()			//選項 C 搜尋指定學生
{
	int i,a=0;
	char name[20];
	printf("請輸入要搜尋的姓名:");
	scanf("%s",name);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,student[i].name)==0)
		{
			printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "學生姓名", "學號", "數學", "物理", "英文", "平均");
			printf("%-10s %-10s %-6d %-6d %-6d %-6.1f\n",student[i].name,student[i].studentID,student[i].math,student[i].physics,student[i].english,student[i].avg);
			a=1;
		}	
	}
	if(a==0)
	{
		printf("資料不存在");	
	}
	
	system("pause");
}

void optionD()			//選項 D 顯示平均分數排名
{
	int i,j,a;
	struct a temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(student[j].avg<student[j+1].avg)			//依平均成績排序，由高到低
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			} 
		}
	}
	printf("%-10s %-10s %-6s\n", "學生姓名", "學號", "平均");			//顯示排序結果
	for(i=0;i<n;i++)
	{
   		printf("%-10s %-10s %-6.1f\n",student[i].name,student[i].studentID,student[i].avg);
	}
	system("pause");
}
/*
心得：
透過這次簡易成績系統的作業，我更深入理解了 C 語言中結構struct的使用，
並學會如何利用結構陣列來儲存多筆資料，將功能拆分成多個函式，
在設計過程中，我也練習了輸入驗證與錯誤處理，
像是確認學號格式、成績範圍以及密碼輸入次數的限制，
這次作業不僅提升了我對 C 語言語法的熟練度，也加強了我解決問題的能力。
 */
