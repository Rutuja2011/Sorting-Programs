// accept n number in an array and sort them in alphabetical order using bubble sort

#include<stdio.h>
#include<string.h>
int main()
{
	int a[100],i,n,pass,t;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}

		}
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
