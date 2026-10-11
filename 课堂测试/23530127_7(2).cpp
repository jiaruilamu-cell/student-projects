#include<stdio.h>
#define N 100
struct student{
	int number;
	char name[10];
	int score;
};
void main()
{
	struct student stu[N],s[N];
	int i ,j,num;
	FILE *fp;
	printf("请输入学生人数<%d:",N);
	scanf("%d",&num);
	printf("请输入学生学号 姓名 成绩:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d%s%d",&stu[i].number,stu[i].name,&stu[i].score);
	}
	printf("\n学号            姓名    成绩\n");
	for(i=0;i<num;i++)
	{
		printf("%-10d%-10s%-8d\n",stu[i].number,stu[i].name,stu[i].score);
	}
	fp=fopen("a.txt","w");
	fprintf(fp,"%d\n",num);
	for(i=0;i<num;i++)
	{
		fprintf(fp,"%-10d%-10s%-8d\n",stu[i].number,stu[i].name,stu[i].score);
    }
	fclose(fp);
	fp=fopen("a.txt","r");
	fscanf(fp,"%d",&num);
	for(i=0;i<num;i++)
	{
		fscanf(fp,"%-d%s%d\n",&stu[i].number,stu[i].name,&stu[i].score);
	}
	fclose(fp);
	printf("\n文件中内容: \n学号   姓名    成绩\n");
	for(i=0;i<num;i++)
	{
		printf("%-10d%-10s%-8d\n",stu[i].number,stu[i].name,stu[i].score);
	}
	printf("\n23530127姚嘉睿");


}

