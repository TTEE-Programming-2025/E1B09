#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	
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
	

	system("pause");
	return 0;
}
