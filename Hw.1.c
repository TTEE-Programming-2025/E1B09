#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,a;
	for(i=1;i<=5;i++)/*���椭���U���|�檺�{��*/ 
	{
		printf("o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O o.O\n");
		printf("O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o O.o\n");
		printf("O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O O.O\n");
		printf("o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o o.o\n");
	}
	system("pause");/*���ݨϥΪ̿�J����*/ 
	system("CLS");/*�M���ù�*/ 
	
	printf("�п�J�K�X:");
	scanf("%d",&a);/* ��J�K�X*/ 
	if(a==2025)/*�P�_�K�X�O�_���T*/ 
	{
		system("pause");/*���ݨϥΪ̿�J����*/ 
		system("CLS");/*�M���ù�*/
	}
	else
	printf("�K�X���~\n");
	return 0; 
} 
