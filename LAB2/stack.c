#include<stdio.h>
#define SIZE 20
int push(int[],int);
int pop(int[]);
void main()
{
 int inf,c,ARR[SIZE],val;
 while(True)
 {
  printf("Menu\n1.Push\n2.Pop\n> ");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
    {
     val=push(ARR,inf);
    }
   case 2:
    {
     val=pop(ARR);
     }
  }
}

