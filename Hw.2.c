#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int i,j,k,l,m,n,wrong=0,password,num;
	char option,ch1,ch2,test;
	
	printf("*********************************\n");			//�L�X�ӤH���檺�e��
	for(i=1;i<=6;i++)
	{	
		printf("| \\(> _ <)\\ \\(> _ <)\\ \\(> _ <)\\ |\n");
		printf("| \\(�Dw�D)/ \\(�Dw�D)/ \\(�Dw�D)/ |\n");
		printf("| /(Q m Q)/ /(Q m Q)/ /(Q m Q)/ |\n");
	}
	printf("***********************************\n");
	
	printf("�K�X�O2025\n");
	
	do												    	//�K�X�P�_ 
	{
		if(wrong==3)										//��wrong=3�ɥN��K�X���~�T���N�������{��
		{
			printf("��p�K�X�w�g���~�T���A�N�������{��"); 
			return 0;
		}
		
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("�K�X���~�Э��s��J\n");
		wrong++;									    	//�K�X���~�ɦ�wrong�ܼ�+1 
	
	}while(1);
	
	while(1)
	{
		system("CLS");										//�M���ù�
		printf("@@@@@@@@@@@@@@@@@@@@@@\n");					//�ӤH������
		printf("@                    @\n");
		printf("@  a. �e�X�����T���� @\n");
		printf("@                    @\n");
		printf("@  b. ��ܭ��k��     @\n");
		printf("@                    @\n");
		printf("@  c. ����           @\n");
		printf("@                    @\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@\n");
		
		printf("�п�J�A�n��ܪ��ﶵ(a,b,c):"); 			//��J���
		fflush(stdin);										//�M���w�İ� 
		scanf("%c",&option);
			
		if(option=='a'||option=='A')						// a �ﶵ 
		{
			system("CLS");
		
			do{
				printf("�п�Ja-n���r��:");
				fflush(stdin);								//�M���w�İ�
				scanf("%c",&ch1);
				if(ch1>='a'&&ch1<='n')						//�P�_��J�r���O�_�ba-n���� 
				{
					break;
				}
				printf("��J���~�Э��s��J\n");
			}while(1);
		
			for(j=ch1;j>='a';j--)							//�L�X�T���� 
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
		
		if(option=='b'||option=='B')						//b�ﶵ 
		{
			do
			{
				printf("�п�1-9�����:");
				fflush(stdin);								//�M���w�İ� 
				scanf("%d",&num);
				if(num>=1&&num<=9)							//�P�_��J���ƬO�_�b1-9���� 
				{
					break;
				}
				printf("��J���~�Э��s��J\n");
			}while(1);
		
			for(m=1;m<=num;m++)								//�L�X1*1��n*n�����k�� 
			{
				for(n=1;n<=num;n++)
				{
					printf("%d * %d =%d\n",m,n,m*n);
				}
			}
			test=getch();
		}
		
		if(option=='c'||option=='C')						//c�ﶵ 
		{
			do
			{ 
				printf("Continue?(y/n):");
				fflush(stdin);
				scanf("%c",&ch2);
				if(ch2=='y'||ch2=='Y'||ch2=='n'||ch2=='N')	//�P�_��J���r���O�_�b�d�� 
				{
					break;
				}
				printf("��J���~�A�п�JY/y��N/n\n"); 
				
			}while(1);
			
			if(ch2=='Y'||ch2=='y')							//�^��D��� 
			{
				continue;
			}
			
			if(ch2=='N'||ch2=='n')							//�����j�� 
			{
				return 0;
			}
			test=getch();
		}
	}
	
	system("pause");
	return 0;
}
