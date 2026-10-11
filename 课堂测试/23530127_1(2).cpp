#include<stdio.h>
#include<math.h>
void main()
{
	double a, b,c,d,x,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
	x=-b/(2*a);
	printf("x=%f\n",x);
	printf("23530127Ò¦¼Îî£");
	}
	else if(d>0)
	{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("%f,%f\n",x1,x2);
	printf("23530127Ò¦¼Îî£");
	}
	else if(d<0)
	{
	printf("none");
	printf("23530127Ò¦¼Îî£");
	}


}