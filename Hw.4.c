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
			printf("��p�K�X�w�g���~�T���A�N�������{��."); 
			return 0;
		}
		
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)			
		{
			break;
		}
		
		printf("�K�X���~�Э��s��J\n");
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
		
		printf("�п�J�A�n��ܪ��ﶵ:");
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
				printf("�T�w���}?(y/n):");
				fflush(stdin);
				scanf("%c",&ch1);
				if(ch1=='y'||ch1=='n')
				{
					break;
				}
				printf("��J���~�A�п�Jy��n\n"); 
				
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
		printf("�п�J�n��J�X�Ӿǥ�(5-10):");
		fflush(stdin);
		scanf("%d",&n);
		if(n>=5&&n<=10)
		{
			break;
		}
		printf("�п�J5-10��\n");
	}

	
	for(i=0;i<n;i++)
	{
	 	printf("��%d��ǥ͸��\n",i+1);
	 	printf("�п�J�m�W:");
	 	fflush(stdin);
	 	scanf("%s",student[i].name);
	 	
	 	do
		{
			a1=0;
            printf("�п�J�Ǹ�(6����):");
            fflush(stdin);
            scanf("%s",student[i].studentID);
            if (strlen(student[i].studentID)!=6) 
			{
				printf("�Ǹ����~�A�Э��s��J\n");
				a1=1;
				
			} 
            else
            {
            	for (j = 0; j < 6; j++) 
				{
                    if (student[i].studentID[j]<'0'||student[i].studentID[j]>'9') 
					{
                        printf("���~! �Ǹ�������]�t�^��r���C\n");
                        a1=1;
                        break;
					}
        		}
			}
		}while(a1==1);
		
		while(1)
		{
			printf("�п�J�ƾǦ��Z:");
			fflush(stdin);
            scanf("%d",&student[i].math);
            if(student[i].math>=0&&student[i].math<=100)
            {
            	break;
			}	
			printf("�п�J0��100���Ʀr\n");
		}
		
		while(1)
		{
			printf("�п�J���z���Z:");
			fflush(stdin);
            scanf("%d",&student[i].physics);
            if(student[i].physics>=0&&student[i].physics<=100)
            {
            	break;
			}	
			printf("�п�J0��100���Ʀr\n");
		}
		while(1)
		{
			printf("�п�J�^�妨�Z:");
			fflush(stdin);
            scanf("%d",&student[i].english);
            if(student[i].english>=0&&student[i].english<=100)
            {
            	break;
			}	
			printf("�п�J0��100���Ʀr\n");
		}
		student[i].avg=(student[i].math+student[i].physics+student[i].english)/3;
	}
	printf("��J����");
	system("pause");
} 
void optionB()
{
	int i;
	printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "�ǥͩm�W", "�Ǹ�", "�ƾ�", "���z", "�^��", "����");
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
	printf("�п�J�n���M���m�W:");
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
		printf("��Ƥ��s�b");	
	}
	
	system("pause");
} 
