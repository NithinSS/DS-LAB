#include<stdio.h>
#define SIZE 20
void input(int[],int);
void ssort(int[],int,char);
void swap(int*,int*);
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
 ssort(ARR,n,ord);
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
void swap(int* n,int* m)
{
 int tmp=*n;
 *n=*m;
 *m=tmp;
}
void ssort(int ARR[],int n,char ord)
{
    int i, j, key;
    for (i = 0; i < n-1; i++)
    {
        key = i;
        for (j = i+1; j < n; j++)
          if ((ord=='A'&&ARR[j] < ARR[key])||(ord=='D'&&ARR[j] > ARR[key]))
            key = j;
       swap(&ARR[key], &ARR[i]);
    }
 }
