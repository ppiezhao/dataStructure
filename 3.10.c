#include<stdio.h>
#include<malloc.h>
typedef char  elemtype;
typedef struct linknode
 {
  elemtype data;
  struct linknode *next;
 } nodetype;
  
  nodetype *cyccreate()
  {
   elemtype d;
   nodetype *h=NULL,*s,*t=NULL;
   int i=1;
   printf("建立一个循环链表\n");
    while(1)
     {
       printf("输入第%d节点data域值:",i);
       scanf(" %c" ,&d);
       if (d=='0') break;
       if(i==1) 
         {
          h=(nodetype *)malloc(sizeof(nodetype));
          h->data=d;h->next=NULL;t=h;
         }
         else
          {
            s=(nodetype *)malloc(sizeof(nodetype));
            s->data=d;s->next=NULL;t->next=s;
            t=s;
          }
           i++;
     }
     if (t!=NULL) t->next=h;
     return h;
  };

  void cycdisp(nodetype *h)
   {
    nodetype *p=h;
    printf("输出一个循环单链表:\n");
   if (p==NULL)
     {
       printf("空表\n");
       return ;
     }
   while (p->next!=h)
     {
      printf("%c ",p->data);
      p=p->next;
     }
   printf("%c ",p->data);
    printf("\n");
   };
  
  int cyclen(nodetype *h)
   {
     int i=1;
     nodetype *p=h;
     if (p==NULL) return 0;
     while(p->next!=h)
      {
        p=p->next; i++;
      }
     return i;
   };
   
  nodetype *cycfind(nodetype *h,int i)
  {
   nodetype *p=h;
   int j=1;
   if (i>cyclen(h) || i<=0) return NULL;
    else 
     {
       if (i==1) return p;
       while (p->next!=h && j<i)
        {
         j++;p->next;
        }
        return p;
     }
  };
 
   nodetype *cycins(nodetype *h,int i,elemtype x)
    {
      nodetype *p,*s,*r;
      s=(nodetype *)malloc(sizeof(nodetype));
      s->data=x;s->next=NULL;
      if (i==0)
      {
       r=h;
       while(r->next!=h) r=r->next;
       s->next=h;h=s;r->next=h;
      }
       else
        { 
         p=cycfind(h,i);
         if (p!=NULL)
          {
           s->next=p->next;p->next=s;
          }
           else printf("输入的i值不正确\n");
        }
      return h;
     };

   nodetype *cycdel(nodetype *h,int i)
    {
     nodetype *p=h,*s,*r;
     int j=1;
     if (i==1)
      {
       r=h;
        while (r->next!=h) r=r->next;
        h=h->next;r->next=h;
        free(p);
      }
       else
        {
         p=cycfind(h,i-1);
          if (p!=NULL && p->next!=h)
           {
            s=p->next; 
            p->next=s->next;
            free(s);
           }
            else printf("输入的i值不正确\n");
         }
       return h;
      };

    void cycdispose(nodetype *h)
     {
      nodetype *pa=h,*pb;
      if (pa!=NULL)
       { 
         pb=pa->next;
         if (pb==h)
          free(pa);
           else
            {
             while (pb->next!=h)
              {
               free(pa);pa=pb;pb=pb->next;
              }
              free(pa);
            }
        }
     };


