#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int GCD(int,int);
int main()
{
	int m,n;
	printf("Enter two numbers to find their GCD:");
	scanf("%d%d",&m,&n);
	int x = GCD(m,n);
	printf("%d",x);
}
int GCD(int a,int b)
{
	int r1=a,r2=b,q,r;
	while(r2>0)
	{
		q=r1/r2;
		r=r1-(q*r2);
		r1=r2;
		r2=r;
	}
	return r1;
}
