#include<stdio.h>
#define MaxLen 20
double f1(int n,double x)
{
  if (n==0)
    return 1;
   else if (n==1)
    return 2*x;
    else
     return 2*x*f1(n-1,x)-2*(n-1)*f1(n-2,x);
};
 
double f2(int n,double x)
{
  struct stack
   {
    int no;
    double val;
   }st[MaxLen];
   int top=0,i;
   double fv1=1;
   double fv2=2*x;
   for (i=n;i>=2;i--)
    {
     top++;
     st[top].no=i;
    }
   while (top>0)
    {
     st[top].val=2*x*fv2-2*(st[top].no-1)*fv1;
     fv1=fv2;fv2=st[top].val;
     top--;
    }
   return fv2;
}

void main()
{
 double x;
int n;
 printf("输入n x: ");
 scanf("%d %lf",&n,&x);
 printf("递归求解:F%d(%.1lf)=:%.1lf\n",n,x,f1(n,x));
 printf("非递归求解:F%d(%.1lf)=:%.1lf\n",n,x,f2(n,x));
} 
