#include "3.1.c"
nodetype *order(nodetype *h)
  {nodetype *head,*p=h,*q,*r,*t;
   head=(nodetype *)malloc(sizeof(nodetype));
   head->data=0;
   head->next=NULL;
   while (p!=NULL)
     {
      if (head->data==0)
       {head->next=p;
        q=p->next;
        p->next=NULL;
        p=q;
       }
      else
       { q=head->next;r=head;
         while (q!=NULL && p->data>q->data)
          {
            r=q;q=q->next;
          }
          t=p->next;
           p->next=r->next;
          r->next=p;
          p=t;
        }
       head->data++;
     }
     t=head;head=head->next;free(t);
     return head ;
   };

  void main()
   {
     nodetype *head;
     head=create();
     disp(head);
     head=order(head);
     disp(head);
    }
 
