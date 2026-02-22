#include<stdio.h>
#include<string.h>
struct test 
{
	int r,m;
	char n[10],c[10],g[10];
	
};
main()
{
	FILE *fp;
	fp=fopen("snow.txt","w");
	struct test t1[90];
	int i,n1;
	printf("enter number of students:");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		
	    printf("enter the name:\n");
	    scanf("%s",&t1[i].n);
	    printf("enter the course:\n");
	    scanf("%s",&t1[i].c);
	    printf("enter the grade:\n");
	    scanf("%s",&t1[i].g);
	    printf("enter the roll no:\n");
	    scanf("%d",&t1[i].r);
	    printf("enter the marks:\n");
	    scanf("%d",&t1[i].m);
	}
	    fprintf(fp,"NAME\tCOURSE\tGRADE\tROLL\tMARKS\n");
	    
	for(i=1;i<=n1;i++)
	{
	    fprintf(fp,"%s\t%s\t%s\t%d\t%d\n",t1[i].n,t1[i].c,t1[i].g,t1[i].r,t1[i].m);

	}
	fclose(fp);


}
