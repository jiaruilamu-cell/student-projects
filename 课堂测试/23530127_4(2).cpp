#include<stdio.h>
void main()
{
	char a;
	int n1,n2,n3,n4,n5;
	n1=n2=n3=n4=n5=0;
	printf("ÇëÊäÈëÒ»´®×Ö·û£¬ÒÔ#½áÊø:\n");
	while((a=getchar())!='#')
	{
		if(a>='A'&&a<='Z')
			a+=32,n1++;
		else if(a>='a'&&a<='z')
			a-=32,n2++;
		putchar(a);
	}
		printf("%d\n",a);
       printf("23530127Ò¦¼Îî£");
}

