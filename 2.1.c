#include<stdio.h> 
#define MaxLen 50
typedef int elemtype;
typedef elemtype sqlist[MaxLen];
 
    int creat(sqlist A)
 { int i,n;
   printf("创建一个顺序表\n");
   printf("输入元素个数:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {printf("输入第%d个元素: ",i+1);
    scanf("%d",&A[i]);
   }
   return n;
 }; 

     void disp(sqlist A,int n)
    {
     int i;
     printf("输出一个顺序表\n ");
     if (n==0) printf("空表");
     for(i=0;i<n;i++)
     printf("%d ",A[i]);
    printf("\n");
     };


     void adjust(sqlist A,int n)
{
   sqlist B;
  int i,x=0,y=n-1;
  for (i=0;i<n;i++)
  {
      if(A[i]<0)
    { B[x]=A[i];x++;
    }
    else
   {  B[y]=A[i];y--;}
  }
   for (i=0;i<n;i++) A[i]=B[i];
};
     void main()
 {
    int creat(sqlist A);
     void disp(sqlist A,int n);
     void adjust(sqlist A,int n);
   sqlist A;
   int n;
   n=creat(A);
   disp(A,n);
   adjust(A,n);
   disp(A,n);
  }

