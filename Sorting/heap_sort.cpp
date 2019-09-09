#include<stdio.h>
#include<stdlib.h>

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  int temp;
    
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
     
    if (largest != i) 
    { 
    temp=arr[i];
       arr[i]=arr[largest];
       arr[largest]=temp;
        heapify(arr, n, largest); 
    } 
} 
   
void heapSort(int arr[], int n) 
{ 
     int temp;
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
   
    for (int i=n-1; i>=0; i--) 
    { 
       temp=arr[0];
       arr[0]=arr[i];
       arr[i]=temp;
       
        heapify(arr, i, 0); 
    } 
}  

int main() 
{ 
    int *arr,i;
	int n;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	 } 
  
    heapSort(arr, n); 
  
   printf("Sorted array is \n"); 
    for (int i=0; i<n; ++i) 
    {
	
        printf("%d",arr[i]);
    printf("\n");
} 
}

