#include<stdio.h>
#define max 5
int partition(int[],int,int);
void quicksort(int[],int,int);
void main()
{
int n,left,right;
int a[max];
printf("Enter the limit=");
scanf("%d",&n);
printf("Enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
left=0;
right=n-1;
quicksort(a,left,right);
printf("The sorted array is\n");
for(int i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
int partition(int a[],int left,int right)
{
int pivot,lb,ub,t;

lb=left;
pivot=a[lb];
ub=right;
while(left<right)
{
while((a[left]<=pivot) &&( left<=right))
{
left++;
}
while((a[right]>pivot) && (left<=right))
{
right--;
}
if(left<right)
{
t=a[left];
a[left]=a[right];
a[right]=t;
}
}
t=a[lb];
a[lb]=a[right];
a[right]=t;
return right;
}
void quicksort(int a[],int left,int right)
{
int lb,ub,p,q,r;
lb=left;
ub=right;
if(lb<ub)
{
p=partition(a,lb,ub);
quicksort(a,lb,p-1);
quicksort(a,p+1,ub);
}

}

