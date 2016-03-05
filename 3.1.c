#include<stdio.h>
#include<malloc.h>
typedef int elemtype;
typedef struct linknode 
 {
   elemtype data;
   struct linknode *next;
  }nodetype;

 nodetype *create()
   { elemtype d;
     nodetype *h=NULL,*s,*t;
     int i=1;
     printf("建立一个单链表\n");
     while(1)
       {
         printf("输入第%d个节点data域值:",i);
         scanf("%d",&d);
         if (d==0) break;
       
       if (i==1)
         {
         h=(nodetype *)malloc(sizeof(nodetype));
         h->data=d;h->next=NULL;t=h;
         }
         else
           {s=(nodetype *)malloc(sizeof(nodetype));
            s->data=d;s->next=NULL;t->next=s;
            t=s;
            }
        i++;
        }
       return h;
    };
   

     void disp(nodetype *h)
 {
   nodetype *p=h;
   printf("输出一个单链表:\n");
   if (p==NULL) printf("空表");
   while (p!=NULL)
   {
    printf("%d ",p->data);
    p=p->next;
   }
   printf("\n");
 };

  int len(nodetype *h)
  {
    int i=0;
    nodetype *p=h;
    while (p!=NULL)
     {
       p=p->next;
       i++;
     }
    return i;
  };
  
  nodetype *find(nodetype *h,int i)
   {
    nodetype *p=h;
    int j=1;
    if (i>len(h) || i<=0) return NULL;
    else 
       {
         while (p!=NULL &&j<i)
          {
           j++;
           p=p->next;
          }
          return p;
       }
    };
   
   nodetype *ins(nodetype *h,int i, elemtype x)
    {
      nodetype *p,*s;
      s=(nodetype *)malloc(sizeof(nodetype));
      s->data=x;s->next=NULL;
      if(i==0)
       {
         s->next=h;h=s;
       }
         else
          {
            p=find(h,i);
            if (p!=NULL)
             {
               s->next=p->next;
               p->next=s;
             }
              else printf("输入的i值不正确");
          }
       return h;
     };
   
    nodetype *del(nodetype *h,int i)
     {
       nodetype *p=h,*s;
       int j=1;
       if (i==1) {h=h->next;free(p);}
        else 
          { p=find(h,i-1);
            if (p!=NULL && p->next!=NULL)
             { s=p->next;
               p->next=s->next;
               free(s);
             }
             else printf("输入的i值不正确");
           }
         return h;
      };
    
    void dispose(nodetype *h)
      {
        nodetype *pa=h,*pb;
        if (pa!=NULL)
          {  pb=pa->next;
             if (pb!=NULL)
             free(pa);
             else
              { while (pb!=NULL)
                 {free(pa);
                  pa=pb;
                  pb=pb->next;
                 }
              free(pa);
              }
           } 
       };
 

