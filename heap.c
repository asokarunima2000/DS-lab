#include<stdio.h>
void heapify(int[],int,int);
void heapsort(int[],int);
void main()
{
int a[10],n;
printf("Enter the limit =");
scanf("%d",&n);
printf("Enter the elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
printf("The sorted array \n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
void heapify(int a[],int n,int i)
{
	int largest,lc,rc,t;
	largest=i;
	lc=2*i+1;
	rc=2*i+2;
	if(a[lc]>a[largest]&&(lc<n))
    {
        largest=lc;
    }
    if(a[rc]>a[largest]&&(rc<n))
    {
        largest=rc;
    }
    if(i!=largest)
    {
     t=a[i];
     a[i]=a[largest];
     a[largest]=t;
     heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
   int t;
	for(int i=n/2-1;i>=0;i--)
	heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		t=a[0];
		a[0]=a[i];
		a[i]=t;
		heapify(a,i,0);

	}
}
