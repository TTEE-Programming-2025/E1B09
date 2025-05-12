#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void showseats(char ch[9][9]);			//Function to display the seat arrangement
int main(void)
{
	int i,j,wrong=0,password,a1=0,a2,a3,b1,b2,b3,b4,b5,num,c1,c3,c4=1;
	char option,accepted,c2;
	char seats[9][9];
	srand(time(NULL));			//Used for generating random numbers
	
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
	
	do			//Password verification loop
	{
		if(wrong==3)			//If wrong = 3, indicating 3 incorrect password attempts, the program will end
		{
			printf("抱歉密碼已經錯誤三次，將結束此程式"); 
			return 0;
		}
		
		printf("請輸入四個數字的密碼:");
		scanf("%d",&password);
		if(password==2025)			//If password is correct, break the loop
		{
			break;
		}
		
		printf("密碼錯誤請重新輸入\n");
		wrong++;			//密Increase wrong variable by 1 on incorrect password 
	
	}while(1);
	
	for(i=0;i<9;i++)			//Initialize the seat array, all set to empty seats
			{
				for(j=0;j<9;j++)
				{
					seats[i][j]='-';			//Empty seat represented by '-'
				}
			}
			
			while(a1<=9)			//Randomly arrange initial booked seats
			{
				a2=rand()%9;
				a3=rand()%9;
				if(seats[a2][a3]=='-')			//If the position is empty, book it
				{
					seats[a2][a3]='*';			//Booked seat represented by '*'
					a1++;
				}
			}
	
	while(1)
	{
		system("CLS");			//Clear the screen
		
		printf("----------[Booking System]----------\n");			//Display the main menu
		printf("| a. Available seats               |\n");
		printf("| b. Arrange for you               |\n");
		printf("| c. Choose by yourself            |\n");
		printf("| d. Exit                          |\n");
		printf("------------------------------------\n");
		
		printf("請輸入你要選擇的選項:");
		fflush(stdin);
		scanf("%c",&option);			//Input option
		//Option a
		if(option=='a')			
		{	
			showseats(seats);
			system("pause");
		}
		//Option b
		if(option=='b')
		{
			printf("請問您需要幾個座位？(1-4):");
            fflush(stdin);
            scanf("%d",&b1);			//Input the number of seats needed
            
            if(b1==1)			//Need 1 seat
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
    			showseats(seats);
			}	
			
			if(b1==2)			//Need 2 seats
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
            		
                showseats(seats);
            }
            if(b1==3)			//Need 3 seats
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
                
                showseats(seats);	
            }
            if(b1==4)			//Need 4 seats
            {
            	b4=rand()%2;
				if(b4==0)			//Horizontal 4 seats
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
					showseats(seats);
				}
				if(b4==1)			//Vertical 2x2 seats
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
					showseats(seats);
				}
			}
			printf("是否要保留(y/n):");			//Ask if they want to keep the seats
			fflush(stdin);
			scanf("%c",&b5);
			if(b5=='y'||b5=='Y')			//Keep the reservation
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
			if(b5=='n'||b5=='N')			//Do not keep the reservation
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
					if(c2!='-')
					{
						printf("格式錯誤，請輸入正確格式\n");
						continue;
					}
					if(seats[c1-1][c3-1]=='*')
					{
						printf("錯誤，這位子已有人，麻煩重新選擇\n");
						continue;
					}
					if(c2=='-'&&seats[c1-1][c3-1]=='-')
					{
						break;
					}
				}
				seats[c1-1][c3-1]='@';
					
			}
			showseats(seats);
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
				if(accepted=='y'||accepted=='n')			//Check if the input is valid 
				{
					break;
				}
				printf("輸入錯誤，請輸入y或n\n"); 
				
			}while(1);
			
			if(accepted=='y')			//Go back to the main menu
			{
				continue;
			}
			
			if(accepted=='n')			//Exit the program
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}
void showseats(char ch[9][9])
{
	printf("\\123456789\n");
	int i,j;
    	for(i=8;i>=0;i--)
    	{
			printf("%d ",i+1);
        	for(j=0;j<=8;j++)
        	{
            	printf("%c",ch[i][j]);
        	}
        	printf("\n");
    	}
}
