#include<stdio.h>
int partition(int*a,int start,int end)
{
	int r,i;
	int pIndex,temp;
	r=a[end];
	pIndex=start;
	for(i=start;i<end;i++)
	{
		if(a[i]<=r)
		{
			temp=a[i];
			a[i]=a[pIndex];
			a[pIndex]=temp;
			pIndex=pIndex+1;
		}
		
	}
	temp=a[end];
	a[end]=a[pIndex];
	a[pIndex]=temp;
	return pIndex;
}
quick_sort(int*a,int start,int end)
{
	int q,i;
	if(start<end)
	{
		
	
	q=partition(a,start,end);
    quick_sort(a,start,q-1);
    quick_sort(a,q+1,end);
}

	
}

int main()
{
	int i,n,a[100];
	printf("enter the number of element");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int start=a[0];
	int end=a[n-1];
	quick_sort(a,0,n-1);
	printf("the sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
