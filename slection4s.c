#include<stdio.h>
#include<string.h>
int main()
{
	void selection (char a[100][100],int n);
	int i,n,j,index;
	char a[100][100],min[100],t[100];
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter nn city name :");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	selection(a,n);
}
void selection(char a[100][100],int n)
{
	int i,j,index;
	char min[100],t[100];
	for(i=0;i<n;i++)
	{
		strcpy(min,a[i]);
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[j],min)>0)
			{
				strcpy(min,a[j]);
				index=j;
			}
		}
		strcpy(t,a[i]);
		strcpy(a[i],a[index]);
		strcpy(a[index],t);
	}
	printf("\n sort name:");
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}
