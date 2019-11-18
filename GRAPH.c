#include<stdio.h>
#define MAX 10
int MAT[MAX][MAX],A[MAX],Q[MAX];
int n,r=-1,f=0; 
void DFS(int i,int vis[])
{
  if(i!=n)
    {
      printf("\t%d",A[i]);
      vis[i]=1;
      for(int j=0;j<n;++j)
	if(!vis[j]&&MA