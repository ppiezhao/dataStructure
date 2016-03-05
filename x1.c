#include<stdio.h>
#include<malloc.h>
#define LIST_INIT_SIZE  100
#define LISTINCREMENT  10
typedef struct 
{  ElemType  *elem;
   int   length;
   int   listsize;
}sqlist;
 struct sqlist creat()
 {
 int n,i; 
  sqlist L;
  printf("请输入线性表的元素的个数\n");
  scanf("%d",&n);
  L.elem=(ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType)0；
  L.length=n;
  L.listsize=LIST_INIT_SIZE;
  for(i=0;i<n-1;i++)
  scanf("%d ",L.elem[i]); 
 return L;
  }
 void print(struct sqlist head)
{int i,n;
  printf("请输入线性表的元素的个数\n");
  scanf("%d",&n);
  for(i=0;i<n-1;i++)
 printf("%d ",L.elem[i]); 
}

 void main()
{struct sqlist head;
 head=creat();
 print(head);
}
