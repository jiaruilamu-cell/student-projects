#include<stdio.h>
void main()
{

int a[62],i,n,max;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<=n;i++)
{if(max<a[i])
max=a[i];
}
printf("max=%d\n",max);
printf("23530127Ò¦¼Îî£");
}
