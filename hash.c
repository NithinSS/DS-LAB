// Author   NITHIN S SABU
//			CS3B
//			2017
// Bug : -1 cannot be entered
// Possible solution use a list for empty check

#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
int is_empty(int);
int SIZE,*EMPTY;

// To initialise elements of empty[] to 1
void init(int *p,int size)
{
 int j;
 SIZE=size;
 EMPTY = malloc(sizeof(int)*SIZE);
 for(j=0;j<SIZE;j++)
  EMPTY[j]=1;
}
// Return the hash
int hash(int a)
{
 return a%SIZE;// The hash function
}
// Check whether empty
int is_empty(int a)
{
 return EMPTY[a];
}

//Probe
int probe(char op,int ele,int a,int p[],char prob)
{
 int b=a;                                                 
 while(1)
 {
  if(prob=='l')
  a+=1; // Probing control
  else if (prob=='q')
  a+=1;
  if(op=='i'&&a==b || op=='s' && (EMPTY[a] || a==b))
   return -1;
  if(a>=SIZE)
   a=0;
  if(op=='i'&& EMPTY[a] || op=='s' && p[a]==ele)
   return a;
  }
}


// Insert a value
void insert(int inf,int p[],char prob)
{
 int q=hash(inf);
 if(!(search(inf,p,prob)==-1))
  {
   printf("Already exist");
   return;
  }
 if(EMPTY[q])
  p[q]=inf;
 else
   q=probe('i',0,q,p,prob);
   //printf("%d",q);
   if(q==-1)
   {
    printf("No more space");
    return;
   }
   p[q]=inf;
   EMPTY[q]=0;
 }
 
// Display the hash table
void display(int p[])
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

// Search the hash table
int search(int i,int p[],char prob)
{
 int q=hash(i);
 if(p[q]==i)
 {
  printf("Found at %d",q);
  return q;
 }
 q=probe('s',i,q,p,prob);
 if(q==-1)
  {
   printf("\nNot found!\n");
   return -1;
   }
 else
  { 
   printf("\nFound at %d ",q);
   return q;
   }
}

