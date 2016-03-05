#include<stdio.h>
#define MaxLen 50
typedef int elemtype;
typedef elemtype sqlist[MaxLen];
 

  int creat(sqlist A)
{
 int i,n;
 printf("创建一个顺序表");
 printf("输入元素个数");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {printf("输入第%d个元素:",i+1);
   scanf("%d",&A[i]);
   }
   return n;
};
   

   void disp(sqlist A,int n)
  {
   int i;
   printf("输出一个顺序表 ");
   if (n==0) printf("空表");
   for(i=0;i<n;i++)
     printf("%d ",A[i]);
  };
     
   
   int ins(sqlist A,int n,int i,elemtype x)
{
  int j;
  if(i<0||i>n) printf("i值上溢或下溢");
  else
   {
     for(j=n-1;j>=i;j--) A[i+1]=A[i];
     A[i]=x;n++;
   }
 return 0;
};


     int del(sqlist A,int n,int i)
{ 
 int j;
 if(i<0||i>n) printf("i值上溢或下溢");   
 else
 { for(j=i-1;j<n;j++)
   A[j]=A[j+1];
n--;
}
return n;
};


   int find(sqlist A,int n,elemtype x)
  {
    int i=0;
    while (i<n&&A[i]!=x) i++;
  if(i<n) return 1;
   else return 0;
 }; 
