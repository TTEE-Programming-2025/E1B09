#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max 10			//�̤j�ǥͼƶq��10
void optionA();			//�ŧi�ﶵ�\��禡
void optionB();
void optionC();
void optionD();
int n;			//�O����ڿ�J���ǥͼ�

struct a
	{
		char name[20];			//�m�W
    	char studentID[7];		//�Ǹ� (6��r�� + '\0')
    	int math;				//�ƾǦ��Z
   		int physics;			//���z���Z
   		int english;			//�^�妨�Z
    	float avg;				//�������Z
	} student[max];			
int main(void)
{
	int h=20,i,j,k,wrong=0,password;
	char option,ch1;
	
	printf("---------------------------------------------\n");			//�ӤH����e��		
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
		
	do			//�n�J�K�X���ҡA�̦h��J3��
	{
		if(wrong==3)			//����~3���ɵ����{�� 		
		{
			printf("��p�K�X�w�g���~�T���A�N�������{��."); 
			return 0;
		}
		
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)			
		{
			break;			//�p�G���T�N���X�j�� 
		}
		
		printf("�K�X���~�Э��s��J\n");
		wrong++;			//���~��wrong++ 
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
		scanf("%c",&option);			//Ū�J�ﶵ
		
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
void optionA()			//�ﶵA ��J�ǥ͸��
{
	int a1,i,j;
	while(1)
	{
		printf("�п�J�n��J�X�Ӿǥ�(5-10):");			//��J�ǥͤH�ơA���5~10�W����
		fflush(stdin);
		scanf("%d",&n);
		if(n>=5&&n<=10)
		{
			break;
		}
		printf("�п�J5-10��\n");
	}

	
	for(i=0;i<n;i++)			//��J�C��ǥͪ����
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
		student[i].avg=(student[i].math+student[i].physics+student[i].english)/3;			//�p�⥭�����Z
	}
	printf("��J����");
	system("pause");
} 
void optionB()			//�ﶵ B ��ܩҦ��ǥ͸��
{
	int i;
	printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "�ǥͩm�W", "�Ǹ�", "�ƾ�", "���z", "�^��", "����");
	for(i=0;i<n;i++)
	{
   		printf("%-10s %-10s %-6d %-6d %-6d %-6.1f\n",student[i].name,student[i].studentID,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	system("pause");
}
void optionC()			//�ﶵ C �j�M���w�ǥ�
{
	int i,a=0;
	char name[20];
	printf("�п�J�n�j�M���m�W:");
	scanf("%s",name);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,student[i].name)==0)
		{
			printf("%-10s %-10s %-6s %-6s %-6s %-6s\n", "�ǥͩm�W", "�Ǹ�", "�ƾ�", "���z", "�^��", "����");
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

void optionD()			//�ﶵ D ��ܥ������ƱƦW
{
	int i,j,a;
	struct a temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(student[j].avg<student[j+1].avg)			//�̥������Z�ƧǡA�Ѱ���C
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			} 
		}
	}
	printf("%-10s %-10s %-6s\n", "�ǥͩm�W", "�Ǹ�", "����");			//��ܱƧǵ��G
	for(i=0;i<n;i++)
	{
   		printf("%-10s %-10s %-6.1f\n",student[i].name,student[i].studentID,student[i].avg);
	}
	system("pause");
}
/*
�߱o�G
�z�L�o��²�����Z�t�Ϊ��@�~�A�ڧ�`�J�z�ѤF C �y�������cstruct���ϥΡA
�þǷ|�p��Q�ε��c�}�C���x�s�h����ơA�N�\�������h�Ө禡�A
�b�]�p�L�{���A�ڤ]�m�ߤF��J���һP���~�B�z�A
���O�T�{�Ǹ��榡�B���Z�d��H�αK�X��J���ƪ�����A
�o���@�~���ȴ��ɤF�ڹ� C �y���y�k�����m�סA�]�[�j�F�ڸѨM���D����O�C
 */
