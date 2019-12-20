#include<stdio.h>
int main()
{
	int n,i,fact,sum=0,temp,r;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("strong number");
	else
	printf("not a strong number");

}
