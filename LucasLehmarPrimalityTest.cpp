#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int Lucas_Lehmar(int p);
int main()
{
	int n,x;
	printf("Enter a number to test:");
	scanf("%d",&n);
	x=Lucas_Lehmar(n);
	if(x==1)
	{
		printf("\n\n%d is a prime number",n);
	}
	else
	{
		printf("\n\n%d is a composite number",n);
	}
}
int Lucas_Lehmar(int p)
{
	int s=4,m;
	m=pow(2,p)-1;
	for(int i=1;i<=(p-2);i++)
	{
		s=((s*s)-2)%m;
		printf("%d\n",s);
		if(s==0)
		{
			return 1;
			exit(0);
		}
	}
	return 2;
}
