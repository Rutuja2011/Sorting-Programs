// accept n student name and sort thhem using bubble sort

#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,pass;
	char s1[50][50],t[50];
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n student name:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	for(pass=1;pass<n-pass;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if( strcmp(s1[i],s1[i+1])>0)
			{
				strcpy(t,s1[i]);
				strcpy(s1[i],s1[i+1]);
				strcpy(s1[i+1],t);
			}
		}
	}
	printf("\n sorted student name:");
	for(i=0;i<n;i++)
	printf("%s\t",s1[i]);
}
