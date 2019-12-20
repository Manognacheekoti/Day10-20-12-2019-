#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
 goto even;
else	
	goto odd;
even:printf("\n even no");
		exit(0);
odd:printf("\n odd no");
}
