#include<stdio.h>
unsigned long int refact(int);
main()
{
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 printf("\nFactorial of %d is %d\n",n,refact(n));
}
unsigned long int refact(int n)
{
 if(n==0)
  return 1;
 else
  return n*refact(n-1);
}
