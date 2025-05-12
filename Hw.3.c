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
	
	printf("Welcome~\n");
	
	do			//Password verification loop
	{
		if(wrong==3)			//If wrong = 3, indicating 3 incorrect password attempts, the program will end
		{
			printf("Sorry, the password was entered incorrectly three times. The program will exit."); 
			return 0;
		}
		
		printf("Please enter a 4-digit password:");
		scanf("%d",&password);
		if(password==2025)			//If password is correct, break the loop
		{
			break;
		}
		
		printf("Incorrect password, please try again\n");
		wrong++;			//±KIncrease wrong variable by 1 on incorrect password 
	
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
		
		printf("Please enter your option:");
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
			printf("How many seats do you need?(1-4):");
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
			printf("Do you want to reserve the seats? (y/n):");			//Ask if they want to keep the seats
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
			printf("How many people? (1-71):");
			fflush(stdin);
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				while(1)
				{
					printf("Please enter seat %d in the format Example (e.g., 1 - 1 for row 1, column 1):",i);
					fflush(stdin);
					scanf("%d %c %d",&c1,&c2,&c3);
					if(c2!='-')
					{
						printf("Invalid format. Please use the correct format.\n");
						continue;
					}
					if(seats[c1-1][c3-1]=='*')
					{
						printf("Error, seat already taken. Please choose another.\n");
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
					printf("If everything is correct, press any key to continue.\n");
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
				printf("Invalid input. Please enter y or n.\n"); 
				
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
