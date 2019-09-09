#include<stdio.h>
#include<stdlib.h>
count_sort(int*a,int n)
{
	int *c,i,b[100],max,j;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	c=(int*)malloc(max*sizeof(int));
	for(i=0;i<=max;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[a[i]]=c[a[i]]+1;
	}
	for(i=1;i<=max;i++)
	{
		c[i]=c[i]+c[i-1];
	}
    for(j=n-1;j>=0;j--)
	{
		c[a[j]] = c[a[j]] - 1;
		 b[c[a[j]]] = a[j];
        
		}	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
}
int main()
{
	int n,*a,i;
	printf("enter the size of array");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	count_sort(a,n);
}
