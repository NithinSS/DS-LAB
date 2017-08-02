#include<stdio.h>
unsigned long int itrfact(int);
main()
{
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 printf("\nFactorial of %d is %d\n",n,itrfact(n));
}
unsigned long int itrfact(int n)
{
 unsigned long int fact=1,i;
 if(n==0)
  return 1;
 for(i=1;i<=n;i++)
  fact*=i;
 return fact;
}
