#include<stdio.h>
#include<string.h>
void main()
{
	char a[10][20],b[20];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	strcpy(b,a[0]);
	for(i=1;i<n;i++)	
		if(strcmp(b,a[i])<0)
			strcpy(b,a[i]);
	puts(b);
	printf("23530127Ò¦¼Îî£");
}