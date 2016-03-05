#include "3.1.c"
nodetype *connect(nodetype *h1,nodetype *h2)
 {
   nodetype *pa=h1,*pb=h2,*h3,*pc; 
    h3=(nodetype *)malloc(sizeof(nodetype));
    pc=h3;
    while (pa!=NULL && pb!=NULL)
      if(pa->data<pb->data)
       { pc->next=pa;pc=pa;
         pa=pa->next;
       }
        else if(pa->data>pb->data)
         { pc->next=pb;pc=pb;
           pb=pb->next;
         }
         else
           {
             pc->next=pa;pc=pa;
             pa=pa->next;pb=pb->next;
           }
       if (pa!=NULL) pc->next=pa;
       if (pb!=NULL) pc->next=pb;
       pc=h3;
       h3=h3->next;
       free(pc);
       return h3;
 };
  
     void main()
   {
     nodetype *head1,*head2,*head3;
     head1=create();
     head2=create();
     disp(head1);
     disp(head2);
     head3=connect(head1,head2);
     disp(head3);
  } 
