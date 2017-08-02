// Demo for binary search
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void input(int[],int);
int search(int,int[],int);
main()
{
 int ARR[SIZE],n,term,ind;
 printf("Enter the size of array :");
 scanf("%d",&n);
 input(ARR,n);
 printf("Enter the term to find : ");
 scanf("%d",&term);
 ind = search(term,ARR,n);
 if (ind == -1)
  {
   printf("\nNot found!\n");
   exit(0);
  }
 else
  {
   printf("\nFound %d at position %d\n",term,ind);
  }


}
void input(int ARR[],int n)
{
 int i;
 for(i=0;i<n;i++)
  scanf("%d",&ARR[i]);
}

int search(int term,int ARR[],int n)
{
 int bg,ls,mid;
 bg=0;
 ls=n;
 mid=(bg+ls)/2;
 if(term<ARR[mid])
  ls=mid;
 if(term>ARR[mid])
  bg=mid;
 if(term=ARR[mid])
  return mid; 
}

