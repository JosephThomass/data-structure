#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
int coef;
int exp;
struct node *address;
};
struct node *createnode(int coef,int exp)
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->coef=coef;
p->exp=exp;
p->address=NULL;
return p;
};
struct node *createpoly(int n)
{
int c,e,i;
struct node *head=NULL,*nt,*last;
for(i=0;i<n;i++)
{
printf("enter the coeff of %d th term",i+1);
scanf("%d",&c);
printf("enter the exp of %d th term",i+1);
scanf("%d",&e);
nt=createnode(c,e);
if(head==NULL)
{
head=last=nt;
}
else
{
last->address=nt;
last=nt;
}
}
return head;
};
void traversal (struct node *head)
{
struct node *p;
if(head==NULL)
{
printf("empty");
}
else
{
p=head;
while(p!=NULL)
{
printf("%dx%d+",p->coef,p->exp);
p=p->address;
}
}
}
struct node *addpoly(struct node *h1,struct node *h2)
{
struct node *rh=NULL,*p1,*p2,*n,*last;
p1=h1;
p2=h2;
while(p1!=NULL&&p2!=NULL)
{
if(p1->exp > p2->exp)
{
n=createnode(p1->coef,p1->exp);
p1=p1->address;
}
else if(p1->exp < p2->exp)
{
n=createnode(p2->coef,p2->exp);
p2=p2->address;
}
else
{
n=createnode((p1->coef+p2->coef),p1->exp);
p1=p1->address;
p2=p2->address;
}
if(rh==NULL)
{
rh=last=n;
}
else
{
last->address=n;
last=n;
}
}
while(p1!=NULL)
{
n=createnode(p1->coef,p1->exp);
p1=p1->address;
if(rh==NULL)
{
rh=last=n;
}
else
{
last->address=n;
last=n;
}
}
while(p2!=NULL)
{
n=createnode(p2->coef,p2->exp);
p2=p2->address;
if(rh==NULL)
{
rh=last=n;
}
else
{
last->address=n;
last=n;
}
}
return rh;
};

void main()
{
int a,b,ch;
struct node *p,*head1,*head2;
printf("enter the number of terms for the first polynomial");
scanf("%d",&a);
head1=createpoly(a);
printf("enter the number of terms for the second polynomial");
scanf("%d",&b);
head2=createpoly(b);
traversal(head1);
printf("\n");
traversal(head2);
printf("\n");
p=addpoly(head1,head2);
traversal(p);
printf("\n");
}

