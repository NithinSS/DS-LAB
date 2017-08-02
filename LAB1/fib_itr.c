#include<stdio.h>
#define next(a,b) a+b
int iter_fib(int);
main()
{
 int i,n;
 printf("No of terms : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  printf("%d ",iter_fib(1));
}
int iter_fib(int n)
{
 static int prv=0,cur=0;
 int tmp;
 tmp=prv;
 prv=cur;
 cur=next(tmp,cur);
 if((prv+cur)==0)
  {
   cur+=1;
   return 0;
  }
 if(n=0)
  {
   prv=0;
   cur=0;
   }
 return prv;
}
