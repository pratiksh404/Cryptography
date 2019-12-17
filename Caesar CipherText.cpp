#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
char alpha[50]="abcdefghijklmnopqrstuvwxyz";
char ch;
int k;

void encryption(char ch);
void decryption(char ch);
int getPos(char ch);

int main()
{
	printf("Type 1 to Encrypt your text or Type 2 to Decrpyt your text.");
	printf("\nType any number to exit.");
	while(1)
	{
		int choice;
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==1)
			{
				fflush(stdin);
				char pt[100];
				int i;
				printf("\n\tEnter a Plain text: ");
				gets(pt);
				printf("\tEnter the value of key:");
				scanf("%d",&k);
				printf("\n\tThe Encrypted Text is: ");
				for(i=0;i<strlen(pt);i++)
				{
					ch=pt[i];
					encryption(ch);
				}
			}
		else if(choice==2)
			{
				fflush(stdin);
				char pt[100];
				int i;
				printf("\n\tEnter a Cipher text: ");
				gets(pt);
				printf("\tEnter the value of key:");
				scanf("%d",&k);
				printf("\n\tThe Decrypted Text is: ");
				for(i=0;i<strlen(pt);i++)
					{
					ch=pt[i];
					decryption(ch);
					}
			}
		else
		{
				printf("\n\nExiting...................................");
				exit(0);
		}
	}
}
void encryption(char ch)
{
		if(ch==' ')
			printf(" ");
		else
		{
			int pos=getPos(ch);
			printf("%c",alpha[(pos+k)%26]);
		}
}
void decryption(char ch)
{
	if(ch==' ')
		printf(" ");
	else
	{
		int pos=getPos(ch);
		printf("%c",alpha[(pos-k+26)%26]);
	}
}
int getPos(char ch)
{
	int i;
	for(i=0;i<strlen(alpha);i++)
	{
		if(ch==alpha[i])
			return i;
	}
}

