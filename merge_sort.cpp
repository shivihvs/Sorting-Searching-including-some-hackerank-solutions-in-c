#include<stdio.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int start,int mid,int mid2,int end);
 
int main()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
 
void mergesort(int a[],int start,int end)
{
	int mid;
		
	if(start<end)
	{
		mid=(start+end)/2;
		mergesort(a,start,mid);	
		mergesort(a,mid+1,end);	
		merge(a,start,mid,mid+1,end);	
	}
}
 
void merge(int a[],int start,int mid,int mid2,int end)
{
	int temp[50];	
	int i,j,k;
	i=start;	
	j=mid2;	
	k=0;
	
	while(i<=mid && j<=end)	
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=mid)	
		temp[k++]=a[i++];
		
	while(j<=end)	
		temp[k++]=a[j++];
		
	
	for(i=start,j=0;i<=end;i++,j++)
		a[i]=temp[j];
}

