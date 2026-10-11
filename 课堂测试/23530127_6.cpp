#include<stdio.h>
void main()
{
	FILE *fp,*u;
	char ch;
    fp=fopen("a.txt","r");
	u=fopen("b.txt","w");
	if(fp==NULL)
	{
	printf("error\n");
	return;
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
	fputc(ch,u);
	fprintf(u,"%d",ch);
	ch=fgetc(fp);
    }
	fclose(fp);
	fclose(u);
}