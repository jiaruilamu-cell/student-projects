#include<stdio.h>
#define N 100
struct student{
	long int number;
	char name[10];
	int score[1];
};
void main()
{
    struct student stu[N];
    int i,num;
    printf("请输入学生人数<%d:",N);
    scanf("%d",&num);
    printf("请输入学生信息:\n");
    for(i=0;i<num;i++)
    {
	   printf("第%d位学生的学号:",i+1);
       scanf("%ld",&stu[i].number);
       printf("第%d位学生的姓名:",i+1);
       scanf("%s",stu[i].name);
	   printf("第%d位学生的成绩:",i+1);
	   scanf("%d",&stu[i].score[1]);
     }
for(i=0;i<num;i++)
{
	printf("%1d",stu[i].number);
    printf("   %-10s",stu[i].name);
    printf("%-8d",stu[i].score[1]);
    printf("\n");
}
printf("23530127姚嘉睿");
}