#include<stdio.h>
#define MaxLen 100
int trans(char str[],char exp[])
{
 int st[MaxLen];
 char ch;
 int i=0,t=0,top=-1;
 while((ch=str[i++])!='\0')
  {
   if(ch>='0' && ch<='9')
    {
     exp[t]=ch;t++;
     while((ch=str[i++])!='\0' && ch>='0' && ch<='9')
      {
       exp[t]=ch;t++;
      }
     i--;
     exp[t]='#';t++;
    }
   else if(ch=='(')
    {
     top++;st[top]=ch;
    }
    else if(ch==')')
     {
      while(st[top]!='(')
       {
        exp[t]=st[top];top--;t++;
       }
      top--;
     }
      else if(ch=='+' || ch=='-')
       {
        while (top>=0 && st[top]!='(')
         {
          exp[t]=st[top];top--;t++;
         }
        top++;st[top]=ch;
       }
      else if(ch=='*' || ch=='/')
       {
        while(st[top]=='*' || st[top]=='/')
         {
          exp[t]=st[top];top--;t++;
         }
        top++;st[top]=ch;
       }
   }
   while (top>=0)
    {
     exp[t]=st[top];t++;top--;
    }
   exp[t]='\0';
   return 1;
 };
 
int compvalue(char exp[],int *n)
 {
  int st[MaxLen],d;
  char ch;
  int t=0,top=-1;
  while((ch=exp[t++])!='\0')
   {
    if (ch>='0' && ch<='9')
     {
      d=0;
      do
       {
        d=10*d+ch-'0';
       } while((ch=exp[t++])!='#');
       top++;st[top]=d;
     }
      else
       {
        switch(ch)
         {
          case '+':st[top-1]=st[top]+st[top-1]; break;
          case '-':st[top-1]=st[top]-st[top-1]; break;
          case '*':st[top-1]=st[top]*st[top-1]; break;
          case '/':st[top-1]=st[top]/st[top-1]; break;
          default: return 0;  
         }
       top--;
        }
     }
   (*n)=st[top];
   return 1;
  };
 
void main()
 {
  char str[MaxLen];
  char exp[MaxLen];
  int n;
  printf("算术表达式:");
  scanf("%s",str);
  if(trans(str,exp)==0)
   printf("原算术表达式不正确");
    else
     {
      printf("波兰表达式:%s\n",exp);
      if(compvalue(exp,&n)==1)
       printf("计算结果:%d\n",n);
       else
        printf("计算错误\n");
      }
 }
