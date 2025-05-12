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
	
	printf("歡迎~\n");
	
	do			//密碼判斷 
	{
		if(wrong==3)			//當wrong=3時表示密碼錯誤三次將結束此程式
		{
			printf("抱歉密碼已經錯誤三次，將結束此程式"); 
			return 0;
		}
		
		printf("請輸入四個數字的密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			break;
		}
		
		printf("密碼錯誤請重新輸入\n");
		wrong++;			//密碼錯誤時此wrong變數+1 
	
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
		
		printf("請輸入你要選擇的選項:");
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
			printf("請問您需要幾個座位？(1-4):");
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
			printf("是否要保留(y/n):");
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
			printf("請輸入有幾位(1-71):");
			fflush(stdin);
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				while(1)
				{
					printf("請依照範例依序輸入第%d個座位(1-1為第一列的第一行):",i);
					fflush(stdin);
					scanf("%d %c %d",&c1,&c2,&c3);
					fflush(stdin);
					if(c2!='-')
					{
						printf("格式錯誤，請輸入正確格式\n");
						continue;
					}
					if(seats[9-c1][c3-1]=='*')
					{
						printf("錯誤，這位子已有人，麻煩重新選擇\n");
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
					printf("沒有問題的話按下任意按鍵繼續\n");
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
				if(accepted=='y'||accepted=='n')			//判斷輸入的字元是否在範圍內 
				{
					break;
				}
				printf("輸入錯誤，請輸入y或n\n"); 
				
			}while(1);
			
			if(accepted=='y')			//回到主選單 
			{
				continue;
			}
			
			if(accepted=='n')			//結束迴圈 
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}
