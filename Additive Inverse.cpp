#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i+j)%n==0)
			{
				printf("(%d,%d),",i,j);
			}
		}
	}
	printf("\n\n These are the additive inverse of %d.",n);
}
