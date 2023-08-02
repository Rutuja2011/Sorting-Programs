#include<stdio.h>
#include<string.h>
int main()
{
	char a[100][100],min[100],t[100];
	int i,n,j,index;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n city name:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		strcpy (min,a[i]);
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[j],min)<0)
			{
				strcpy(min,a[j]);
				index=j;
			}
		}
		strcpy(t,a[i]);
		strcpy(a[i],a[index]);
		strcpy(a[index],t);
		
	}
	
	printf("\nsort names:");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}
	
}
	
	

