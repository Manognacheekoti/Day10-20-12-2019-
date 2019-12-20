#include<stdio.h>
int main()
{
	int n,m,a,b;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of m");
	scanf("%d",&m);
	
	
	for(a=1;a<=n;a++)
		{
			for(b=1;b<=m;b++)
			{
				printf("\n %dX%d=%d",a,b,a*b);
				
			}
			printf("\n \n");
		}
}
