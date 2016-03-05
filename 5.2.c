#include<stdio.h>
#include<malloc.h>
#define MaxLen 100
typedef struct node
{
  char data;
  struct node *next;
}cnode;

cnode *create(char s[])
{
  int i=0;
  cnode *h,*p,*r;
  while (s[i]!='\0')
   {
    p=(cnode *)malloc(sizeof(cnode));
    p->data=s[i];
    p->next=NULL;
    if (i==0)
     {
      h=p;r=h;
     }
     else 
      {
       r->next=p;r=p;
      }
    i++;
    }
   return h;
};

int judge(cnode *h)
 {
  char st[MaxLen];
  int top=0;
  cnode *p=h;
  while(p!=NULL)
   {
    st[top]=p->data;
    top++;
    p=p->next;
   }
  p=h;
  while (p!=NULL)
   {
    top--;
    if (p->data==st[top])
     p=p->next;
    else
     break;
    }
   if (p==NULL)
    return 1;
    else
     return 0;
 };

void main()
 {
  char str[MaxLen];
  cnode *h;
  printf("输入一个字符串: ");
  scanf("%s",str);
  h=create(str);
  if (judge(h)==1)
    printf("'%s'是中心对称字符串\n ",str);
   else 
    printf("'%s'不是中心对称字符串\n",str);
  } 
