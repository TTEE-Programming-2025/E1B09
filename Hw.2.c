#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,wrong=0,password;
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
	system("pause");
	return 0;
}
