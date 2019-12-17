#include<stdio.h>
#include<string.h>
char mat[10][100];
int key=3;
int main()
{
	char pt[100];
	gets(pt);
	int flag=0;
	int r=0;
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0; j<100;j++)
		{
			mat[i][j] = ' ';
		}
	}
	   //for(j=0;j<100;j++)
	   //mat[i][j]=' ';
	   
	   
	   for(int i=0;i<strlen(pt);i++)
	   {
	   	char ch=pt[i];
	   	//printf("\t%d,%d",r,i);
	   	if(flag==0)
	   	{
	   		mat[r][i]=ch;
	   		r++;
	   		if(r==key)
	   		{
	   			//printf("%d",r);
	   			r=r-2;
	   			//printf("%d",r);
	   			flag=1;
			   }
		   }
		   else//if (flag==1)
		   {
		   	mat[r][i]=ch;
		   	r--;
		   if(r==-1)
		   {
		   	r=r+2;
		   	flag=0;
		   }
		   }
		
		   	}
		   	
		   	
		for(i=0;i<key;i++)
		{
		for(j=0;j<strlen(pt);j++)
		{
		
		//if(mat[i][j]!=' ')
		printf("%c",mat[i][j]);
		}
		printf("\n");
		}
		
}
