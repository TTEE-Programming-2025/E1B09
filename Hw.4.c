#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h=20,i,j,k,wrong=0,password;

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
		
	system("pause");
	return 0;
}
