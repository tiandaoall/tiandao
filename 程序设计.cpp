#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
FILE *fp;
struct person
{                   /*定义结构*/
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
struct person per[50]; /*最大职工人数*/
struct person *p;      /*声明一个结构指针*/
p=per; 
int i,in;
char ch;
do
{
	printf("\t\t 1.查询职工工资数据 \n");
	printf("\t\t 2.浏览职工工资数据 \n");
	printf("\t\t 3.修改职工工资数据 \n");
	printf("\t\t 4.删除职工工资数据 \n");
	printf("\t\t 5.添加职工工资数据 \n");
    printf("\t\t 6.计算个人所得税 \n");
	if(!scanf("%d,&in)==1))
	{
		while((ch=getchar())!='\n')
			putchar(ch);
		printf("没有此选项，请正确选择")；
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
		printf("没有此选项，请正确选择！");
		getch();
		break;
}
}while(in!=9);
}