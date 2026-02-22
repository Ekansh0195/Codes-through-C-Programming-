#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("snow.txt","r");
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	printf("%d%d",a,b);
	fclose(fp);
}
