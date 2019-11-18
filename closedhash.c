#include<stdio.h>
#include<stdlib.h>
int a[50];
int hf(int val,int n)
{
	int g=val%n;
	return g;	
}
int clhash(int key,int n)
{
	int i=hf(key,n);
	int placed=0,k,flag=0;
	if(a[i]==-1)
	{
		a[i]=key;
		placed=1;
	}
	else
	{
		for(k=i;k<n;k++)
		{
			if(a[k]==key)
			{
				printf("Value already exits\n");
				flag=1;
				break;
			}
			else if(a[k]==-1)
			{
				a[k]=key;
				placed=1;
				break;
			}
		}
		if(placed!=1 )
		{
			for(k=0;k<i;k++)
			{
				if(a[k]==key)
				{
					printf("Value already exists");
					break;
				}
				else if(a[k]==-1)
				{
					a[k]=key;
					break;
					placed=1;
				}
			}
		}
	}
	return placed;
}
int search(int val,int n)
{
	int i=hf(val,n);
	int k,found=0;
	for(k=i;k<n;k++)
		if(a[k]==val)
		{
			printf("The value is found at index %d\n",k);
			found=1;
			break;
		}
	if(found==0)
	{
		for(k=0;k<i;k++)
			if(a[k]==val)
			{
				printf("Value found at index %d",k);
				found=1;
				break;
				
			}
	}

	return found;
}
int main()
{
	int i,ch,n,result,val,skey;
	printf("Enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=-1;
	while(1)
	{
		printf("\n1.Enter the value\n2.Search\n3.Display\n4.Exit\n ");
		scanf("%d",&ch);
		if(ch==0)	exit(0);
		else if(ch==1)
		{
			printf("Enter the value: ");
			scanf("%d",&val);
			if(search(val,n)==1)
				printf("value already there");
			else
			{
				result=clhash(val,n);
				if(result==1)	printf("Value plced\n");
				else printf("Hashtable is already filled");
			}
		}
		else if(ch==2)
		{
			printf("Enter key to search");
			scanf("%d",&skey);
			if(search(skey,n)==0)
				printf("NOT FOUND\n");
			
		}
		else if(ch==3)
		{
			for(i=0;i<n;i++)
				if(a[i]!=-1)
					printf(" %d-%d\t\t",i,a[i]);
		}
	}
	return 0;
	
}
