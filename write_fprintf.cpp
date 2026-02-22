#include<stdio.h>
main()
{
	FILE *fp; 
	fp=fopen("snow.txt","w");
	int a,b;
	printf("Enter two no: ");
	scanf("%d%d",&a,&b);
	fprintf(fp,"%d%d",a,b);
	fprintf(fp,"\nHello  Show");
	fclose(fp);
}
