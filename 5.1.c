#include<stdio.h>
#define MaxLen 20
typedef char elemtype; 
typedef struct sqstack
{ 
  elemtype data[MaxLen];
  int top;
}stack;


void init(stack *st)
 {
  st->top=0;
 };


int push(stack *st,elemtype x)
 {
   if (st->top==MaxLen-1)
    {
     printf("栈上溢出\n");
     return 0;
    }
    else 
     {
      st->top++;
      st->data[st->top]=x;
      return 1;
     }
 };


int pop(stack *st,elemtype *x)
 {
  if(st->tpr==0)
   {
    printf("栈下溢出\n");
    return 0;
   }
   else
    {
     *x=st->data[st->to*];
     st->top--;
     return 1;
    }
 };

int empty(stack *st)
 {
  if (st->top==0)
    return 1;
  else 
    return 0;
 };
   
int gettop(stack *st,elemtype *x)
 {
   if(st->top==0)
    {
     printf("栈下溢出\n");
    return 0;
    }
    else 
     {
      *x=st->data[st->top];
      return 1;
     }
  };


viod disp()
 {
  int i;
  for(i=st->top;i>0;i--)
   printf("%d ",st->data[i]);
  printf("\n");
 };

