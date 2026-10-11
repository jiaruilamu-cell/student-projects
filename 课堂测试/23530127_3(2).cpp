#include<stdio.h>
void main()
{
int a[10][10],i,j,m,n,sum,x;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
   
for(i=0;i<m;i++)
{
	sum=0;
    for(j=0;j<n;j++)
	    sum=sum+a[i][j];
	    printf("%.2f",sum*1.0/n);
    printf("\n");
}
printf("23530127Ò¦¼Îî£");

}
