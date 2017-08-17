// Author   NITHIN S SABU
//			CS3B
//			2017
#include <stdio.h>
#define SIZE 13
void init(int *);
int hash(int);
int is_empty(int, int*);
void insert(int,int*);
int probe(char,int,int,int*);
void display(int*);
int search(int,int*);

int main()
{
 int p[SIZE],inf,ele,ch;
 init(p);
 while(1)
 {
  printf("\nMENU\n1. Insert and element\n2. Search for an element\n3. Display current hash table\n4. Exit\n> ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
    { 
     printf("\nEnter a number : ");
 	 scanf("%d",&inf);
  	 insert(inf,p);
  	 display(p);
  	 break;
  	 }
   case 2:
    {
      printf("\nEnter element to find : ");
      scanf("%d",&ele);
      search(ele,p);
      break;
    }
  	 
   case 3:
    {
     display(p);
     break;
    }
   default:
    {
     exit(0);
    }
 }
 }
return 0;
}
void init(int *p)
{
 int i=0;
 for(i=0;i<SIZE;i++)
  *p++=-1;
}
int hash(int a)
{
 return a%SIZE;
}
int is_empty(int a,int p[SIZE])
{
 if(p[a]==-1)
  return 1;
 else
  return 0;
}
int probe(char op,int ele,int a,int p[SIZE])
{
 int b=a;
 while(1)
 {
  a+=1;
  if(op=='i'&&a==b || op=='s' && (is_empty(a,p) || a==b))
   return -1;
  if(a>=SIZE)
   a=0;
  if(op=='i'&& is_empty(a,p) || op=='s' && p[a]==ele)
   return a;
  }
}
void insert(int inf,int p[SIZE])
{
 int q=hash(inf);
 if(inf==-1)
  inf=~1;
 if(is_empty(q,p))
  p[q]=inf;
 else
   q=probe('i',0,q,p);
   //printf("%d",q);
   if(q==-1)
   {
    printf("No more space");
    return;
   }
   p[q]=inf;
 }
void display(int p[SIZE])
{
 int i;
// printf("Entered display");
 printf("\n");
 for(i=0;i<SIZE;i++)
 {
  if(p[i]==-1)
   printf("~ ");
  else
   printf("%d ",p[i]);
  } 
}
int search(int i,int p[SIZE])
{
 int q=hash(i);
 if(p[q]==i)
 {
  printf("Found at %d",q);
  return q;
 }
 q=probe('s',i,q,p);
 if(q==-1)
  printf("\nNot found!\n");
 else
  printf("\nFound at %d ",q);
}

