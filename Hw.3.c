#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(void)
{
	int i,j,wrong=0,password,a1=0,a2,a3,b1,b2,b3,b4,b5,num,c1,c3,c4=1;
	char option,accepted,c2;
	char seats[9][9];
	
	printf("**********************************************\n");			//Print a personalized screen display
    for (i=0;i<20;i++) {
        for (j=0;j<20-i; j++)
		{
			printf(" ");
		}
        for (j=0;j<=i;j++)
        {
			printf("/\\");
		} 
        printf("\n");
        } 
	printf("**********************************************\n");
	
	printf("�w��~\n");
	
	do			//�K�X�P�_ 
	{
		if(wrong==3)			//��wrong=3�ɪ�ܱK�X���~�T���N�������{��
		{
			printf("��p�K�X�w�g���~�T���A�N�������{��"); 
			return 0;
		}
		
		printf("�п�J�|�ӼƦr���K�X:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("�K�X���~�Э��s��J\n");
		wrong++;			//�K�X���~�ɦ�wrong�ܼ�+1 
	
	}while(1);
	
	for(i=0;i<9;i++)
			{
				for(j=0;j<9;j++)
				{
					seats[i][j]='-';
				}
			}
			
			while(a1<=9)
			{
				a2=rand()%9;
				a3=rand()%9;
				if(seats[a2][a3]=='-')
				{
					seats[a2][a3]='*';
					a1++;
				}
			}
	
	while(1)
	{
		system("CLS");
		
		printf("----------[Booking System]----------\n");			//Display the main menu
		printf("| a. Available seats               |\n");
		printf("| b. Arrange for you               |\n");
		printf("| c. Choose by yourself            |\n");
		printf("| d. Exit                          |\n");
		printf("------------------------------------\n");
		
		printf("�п�J�A�n��ܪ��ﶵ:");
		fflush(stdin);
		scanf("%c",&option);
		//Option a
		if(option=='a')
		{	
			printf("\\123456789\n");
			for(i=8;i>=0;i--)
			{
				printf("%d ",i+1);
				for(j=0;j<=8;j++)
				{
					printf("%c",seats[i][j]);
				}
				printf("\n");
			}
			system("pause");
		}
		//Option b
		if(option=='b')
		{
			printf("�аݱz�ݭn�X�Ӯy��H(1-4):");
            fflush(stdin);
            scanf("%d",&b1);
            
            if(b1==1)
            {
            	while(1)
            	{
            		b2=rand()%9;
					b3=rand()%9;
					if(seats[b2][b3]=='-')
					{
						seats[b2][b3]='@';
						break;
					}
				}
    			printf("\\123456789\n");
    			for(i=8;i>=0;i--)
    			{
        			printf("%d ",i+1);
        			for(j=0;j<=8;j++)
        			{
            			printf("%c",seats[i][j]);
        			}
        			printf("\n");
    			}
			}	
			
			if(b1==2)
            {
            	while(1)
				{
					b2=rand()%9;
            		b3=rand()%8;
            		if(seats[b2][b3]=='-'&&seats[b2][b3+1]=='-')
                	{
                   		seats[b2][b3]='@';
                    	seats[b2][b3+1]='@';
                    	break;
                	}
				}
            	
                	
                printf("\\123456789\n");
    			for(i=8;i>=0;i--)
    			{
        			printf("%d ",i+1);
        			for(j=0;j<=8;j++)
        			{
            			printf("%c",seats[i][j]);
        			}
        			printf("\n");
    			}
            }
            if(b1==3)
            {
            	while(1)
				{
					b2=rand()%9;
                	b3=rand()%7;
                	if(seats[b2][b3]=='-'&&seats[b2][b3+1]=='-'&&seats[b2][b3+2]=='-')
                	{
                    	seats[b2][b3]='@';
                    	seats[b2][b3+1]='@';
                    	seats[b2][b3+2]='@';
                    	break;
                	}
				}
                
                printf("\\123456789\n");
    			for(i=8;i>=0;i--)
    			{
        			printf("%d ",i+1);
        			for(j=0;j<=8;j++)
        			{
            			printf("%c",seats[i][j]);
        			}
        			printf("\n");
    			}	
            }
            if(b1==4)
            {
            	b4=rand()%2;
				if(b4==0)
				{ 
            		while(1)
					{
						b2=rand()%9;
                		b3=rand()%6;
                		if(seats[b2][b3]=='-'&&seats[b2][b3+1]=='-'&&seats[b2][b3+2]=='-'&&seats[b2][b3+3]=='-')
                		{
                    		seats[b2][b3]='@';
                    		seats[b2][b3+1]='@';
                    		seats[b2][b3+2]='@';
                    		seats[b2][b3+3]='@';
                    		break;
                		}
                		
					}
					printf("\\123456789\n");
    				for(i=8;i>=0;i--)
    				{
        				printf("%d ",i+1);
        				for(j=0;j<=8;j++)
        				{
            				printf("%c",seats[i][j]);
        				}
        			printf("\n");
    				}
				}
				if(b4==1)
				{ 
            		while(1)
					{
						b2=rand()%8;
                		b3=rand()%8;
                		if(seats[b2][b3]=='-'&&seats[b2][b3+1]=='-'&&seats[b2+1][b3]=='-'&&seats[b2+1][b3+1]=='-')
                		{
                    		seats[b2][b3]='@';
                    		seats[b2][b3+1]='@';
                    		seats[b2+1][b3]='@';
                    		seats[b2+1][b3+1]='@';
                    		break;
                		}
                		
					}
					printf("\\123456789\n");
    				for(i=8;i>=0;i--)
    				{
        				printf("%d ",i+1);
        				for(j=0;j<=8;j++)
        				{
            				printf("%c",seats[i][j]);
        				}
        			printf("\n");
    				}
				}
			}
			printf("�O�_�n�O�d(y/n):");
			fflush(stdin);
			scanf("%c",&b5);
			if(b5=='y'||b5=='Y')
			{
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						if(seats[i][j]=='@')
						{
							seats[i][j]='*';
						}
					}
				}
			}
			if(b5=='n'||b5=='N')
			{
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						if(seats[i][j]=='@')
						{
							seats[i][j]='-';
						}
					}
				}
			}
			system("pause");
			continue; 
		}
		//Option c
		if(option=='c')
		{
			printf("�п�J���X��(1-71):");
			fflush(stdin);
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				while(1)
				{
					printf("�Ш̷ӽd�Ҩ̧ǿ�J��%d�Ӯy��(1-1���Ĥ@�C���Ĥ@��):",i);
					fflush(stdin);
					scanf("%d %c %d",&c1,&c2,&c3);
					fflush(stdin);
					if(c2!='-')
					{
						printf("�榡���~�A�п�J���T�榡\n");
						continue;
					}
					if(seats[9-c1][c3-1]=='*')
					{
						printf("���~�A�o��l�w���H�A�·Э��s���\n");
						continue;
					}
					if(c2=='-'&&seats[9-c1][c3-1]=='-')
					{
						break;
					}
				}
				seats[c1-1][c3-1]='@';
					
			}
			printf("\\123456789\n");
    		for(i=8;i>=0;i--)
    		{
        		printf("%d ",i+1);
        		for(j=0;j<=8;j++)
        		{
            		printf("%c",seats[i][j]);
        		}
        			printf("\n");
    			}
					printf("�S�����D���ܫ��U���N�����~��\n");
					system("pause");
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							if(seats[i][j]=='@')
							{
								seats[i][j]='*';
							}
						}
					}
		}
		//Option d
		if(option=='d')
		{
		do
			{ 
				printf("Continue?(y/n):");
				fflush(stdin);
				scanf("%c",&accepted);
				if(accepted=='y'||accepted=='n')			//�P�_��J���r���O�_�b�d�� 
				{
					break;
				}
				printf("��J���~�A�п�Jy��n\n"); 
				
			}while(1);
			
			if(accepted=='y')			//�^��D��� 
			{
				continue;
			}
			
			if(accepted=='n')			//�����j�� 
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}
