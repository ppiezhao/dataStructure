#include "3.1.c"
nodetype *invert(nodetype *h)
  {
   nodetype *p,*q,*r;
   if(len(h)<=1)
     {
        printf("逆置的单链表至少有2个节点\n");
        return NULL;
     }
      else 
        {
         p=h;q=p->next;
         while(q!=NULL)
           { r=q->next;
             q->next=p;  //第二个指向头，第三个指向第二个//
             p=q;q=r;
            }
          h->next=NULL;
          h=p;
           return h;
         }
    };
  
  
   void main()
    {
      nodetype *head;
      head=create();
      disp(head);
      head=invert(head);
      disp(head);
    }
  
