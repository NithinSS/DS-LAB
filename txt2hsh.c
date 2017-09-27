#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "hash.h"
#define SIZE 26
char* itr_sent(char*);
int main()
{
 int a[SIZE],inf=0;
 char b[50]="Masters of the universe",token[10];
 //const char d[]=" ";
 //init(a,SIZE);
 //display(a,SIZE);
 //strcpy(itr_sent(b),token);
 printf("%s",itr_sent(b));
 printf("%s",itr_sent(b));
 //insert(inf,a,SIZE);
  //hash((int)token,)
 
  
 return 0;
}

char* itr_sent(char* a)
{
  static char b[10];
  static int i;
  printf("\n%d\n",i);
  for(b;a[i]!='\0';i++)
     {
       b[i]=a[i];
       if(a[i]==' ')
        return b;
 }
  return b;
}
