#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
FILE *fp;
struct person
{                   /*����ṹ*/
	char num[50];
	char name[50];
	float wage_gwgz;
	float wage_zwjt;
	float wage_jtgz;
	float wage_jxgz;
	float wage_yfgz;
	float wage_grsds;
	float wage_sfgz;
}*pp;
void mian()
{      
struct person per[50]; /*���ְ������*/
struct person *p;      /*����һ���ṹָ��*/
p=per; 
int i,in;
char ch;
do
{
	printf("\t\t 1.��ѯְ���������� \n");
	printf("\t\t 2.���ְ���������� \n");
	printf("\t\t 3.�޸�ְ���������� \n");
	printf("\t\t 4.ɾ��ְ���������� \n");
	printf("\t\t 5.���ְ���������� \n");
    printf("\t\t 6.�����������˰ \n");
	if(!scanf("%d,&in)==1))
	{
		while((ch=getchar())!='\n')
			putchar(ch);
		printf("û�д�ѡ�����ȷѡ��")��
			getch();
		continue;
	}
	switch(in)
	{
	case 1:
		find(per);
		break;
	case 2:
		list(per);
		break;
	case 3:
		modify(per);
		break;
	case 4:
		del(per);
		break;
	case 5:
		add(per);
		break;
    case 6:
		grsds(per);
		break;
	default:
		printf("û�д�ѡ�����ȷѡ��");
		getch();
		break;
}
}while(in!=9);
}