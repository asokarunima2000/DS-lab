                        

#include<stdio.h>
#define size 10
void enqueue(int[]);
void dequeue(int[]);
void display(int[],int);
int main();
{
static int a[size],front=-1,rear=-1;
int i,n,x;
do
 {
  printf("Enter 1 for enque \n2 for deque\n3 for displaying the queue ");
  scanf("%d",&n);
  switch(n)
  { 
   case 1:printf("Enter the data to be pushed");
          scanf("%d",&x);
          push(x); 
          break;
   case 2 :printf("the value dequed is %d",pop());
           break;
   case 3 :display();
           break;
   default :printf("\ninvalid entry");
 }
 printf("\nenter 1 to continue");
 scanf("%d",&i);
}while(i==1);

}


void enqueue(int x)
{
if(rear>=size)
{
printf("Queue is full");
return;
}
if(front=-1)
{
front++;
a[front]=x;
}





