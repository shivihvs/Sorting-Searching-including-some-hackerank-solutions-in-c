#include<stdio.h>
#include<stdlib.h>
int main() {
    int arr_count,brr_count,arr[1000],brr[100],i;
    printf("enter the size of first array");
    scanf("%d",&arr_count);
    printf("enter the first array element");
    for(i=0;i<arr_count;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("enter the size of second array");
	scanf("%d",&brr_count);
	printf("enter the number of elemnet in the second array");
	for(i=0;i<brr_count;i++)
    {
    	scanf("%d",&brr[i]);
	}
   int frequency[100000]={0},index=0;
    int *ans=(int*)malloc(brr_count*sizeof(int));
    for(i=0;i<brr_count;i++)
    {
        frequency[brr[i]]++;
    }
    for(i=0;i<arr_count;i++)
    {
        frequency[arr[i]]--;
}
    for(i=0;i<100000;i++)
    {
        if(frequency[i])
        {
            ans[index++]=i;
        }
    }
    
    printf("the missing numbers are");
    for(i=0;i<index;i++)
    {
    	printf("%d  ",ans[i]);
	}
    
    
}

