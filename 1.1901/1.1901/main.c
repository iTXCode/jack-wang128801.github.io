#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void ADD1()
{
	int i;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("1-100�ۼӺ�=%d\n",sum);
}
void ADD2()
{
	int sum=0;
	int n=100;
	sum=n*(n+1)/2;
	printf("1-100�ۼӺ�=%d\n",sum);
}

void menu()
{
	printf("******************************\n");
	printf("*****      1.����һ      *****\n");
	printf("*****      2.������      *****\n");
	printf("*****      0.�˳�����    *****\n");
	printf("******************************\n");
}
int main()
{
	int i=0;
	int sum=0;
	int input=0;
	do
	{
		menu();
		printf("���������ѡ��:");
		scanf("%d",&input);
	switch(input)
	{
	case 1:
		ADD1();
		break;
	case 2:
		ADD2();
		break;
	case 0:
		printf("�˳�����!\n");
		break;
	default:
		printf("�������,����������!\n");
		break;
	}
	}while(input);
	return 0;
}