#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,a;
	char b;
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
		printf("�K�X���T\n�w��~~~~\n");
		system("pause"); 
		system("CLS");
		printf("wwwwwwwwwwwwwwwwwwwwwwwww\n");
		printf("w  'A'-'Z':  Uppercase  w\n");
		printf("w  'a'-'z':  Lowercase  w\n");
		printf("w  '0'-'9':    Digit    w\n");
		printf("w Otherwise:E1B09 �L�[��w\n");
		printf("wwwwwwwwwwwwwwwwwwwwwwwww\n\n");
		printf("�п�J�@�r��:");
		fflush(stdin);/*�� input buffer �b��*/ 
		scanf("%c",&b);
		if((b>='A')&&(b<='Z'))
		printf("Uppercase\n");
		else if((b>='a')&&(b<='z'))
		printf("Lowercase\n");
		else if((b>='0')&&(b<='9'))
		printf("Digit\n");
		else
		printf("E1B09 �L�[��\n");
		system("pause"); 
		return 0;
	}
	else
	printf("�K�X���~\n");
	return 0;
	/*�߱o:�o���@�~�Ψ�F�ܦh�W�ұоɪ����ѡA 
		   ���Ofor�j��Bif-else����P�_�����A
		   �o�]�O�ڲĤ@����Ĳgit�Mgithub�A
		   �Ǩ�ܦh���������ѡA 
		   �۫H�b����|��ڦ����U�C*/ 
} 
