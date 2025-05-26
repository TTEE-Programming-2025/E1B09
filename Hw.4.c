#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max 10
void optionA();
void optionB();
void optionC();
int n;

struct a
	{
		char name[20];
		char studentID[7];
		int math;
		int physics;
		int english;
		float avg;
	}student[max];
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
void optionA()
{
	int a1,i,j;
	while(1)
	{
		printf("請輸入要輸入幾個學生(5-10):");
		fflush(stdin);
		scanf("%d",&n);
		if(n>=5&&n<=10)
		{
			break;
		}
		printf("請輸入5-10個\n");
	}

	
	for(i=0;i<n;i++)
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
		student[i].avg=(student[i].math+student[i].physics+student[i].english)/3;
	}
	printf("輸入完畢");
	system("pause");
} 
void optionB()
{
	int i;
	printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "學生姓名", "學號", "數學", "物理", "英文", "平均");
	for(i=0;i<n;i++)
	{
   		printf("%-10s %-10s %-6d %-6d %-6d %-6.1f\n",student[i].name,student[i].studentID,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	system("pause");
}
void optionC()
{
	int i,a=0;
	char name[20];
	printf("請輸入要收尋的姓名:");
	scanf("%s",name);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,student[i].name)==0)
		{
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
