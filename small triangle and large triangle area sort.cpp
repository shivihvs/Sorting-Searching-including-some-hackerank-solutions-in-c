#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
   int i,j;
    float v,p,temp;
    float a[n];
    triangle temp1;
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        v=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        a[i]=v;
    

    }

    for(i=0;i<n;i++)
    {
     for(j=0;j<n-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
          temp1=tr[j];
          tr[j]=tr[j+1];
          tr[j+1]=temp1;
         }
     }
     
    }
    
    
    

	/**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
