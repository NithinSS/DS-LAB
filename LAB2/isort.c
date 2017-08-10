#include<stdio.h>
#define SIZE 20
void input(int[],int);
void printarray(int[].int);
void isort(int[],int,char);
int main()
{
 int ARR[SIZE],n,c,i;
 char ord;
 printf("How many elements do you want ? : ");
 scanf("%d",&n);
 printf("Input the array \n");
 input(ARR,n);
 printf("Sort in \n1.Ascending\n2.Descending\n > ");
 scanf("%d",&c);
 if(c==2)
  ord='D';
 else 
  ord='A';
 printf("Sorted array is  : ");
 isort(ARR,n,ord);
 for(i=0;i<n;i++)
  printf("%d ",ARR[i]);
 return 0;
}
void input(int ARR[],int n)
{
 int i;
 for(i=0;i<n;i++)
  scanf("%d",&ARR[i]);
}
void printarray(int ARR[], int n)
{
 int i;
  for(i=0;i<n;i++)
   printf("%d ",ARR[i]);
}
void isort(int ARR[],int n,char ord)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = ARR[i];
       j = i-1;
       while (j >= 0 && ((ord=='A'&&ARR[j] > key)||(ord=='D'&&ARR[j] < key)))
       {
           ARR[j+1] = ARR[j];
           j = j-1;
       }
       ARR[j+1] = key;
   }
}

