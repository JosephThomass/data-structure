#include <stdio.h>
int size=100,queue[100];
int f[10],b[10],r[10];

void enqueue(int i,int data)
{
if(r[i]==b[i+1])
printf("Overflow");
else
{
if(r[i]==b[i])
f[i]++;
queue[++r[i]]=data;
}
}


int dequeue(int i)
{int d;
if(f[i]==b[i])
printf("Underflow");
else
{
d=queue[f[i]];
if(f[i]==r[i])
f[i]=b[i]=r[i];
else
f[i]++;
}
return d;
}


void main()
{
int n,i;
printf("Number of stack\n");
scanf("%d",&n);

b[0]=f[0]=r[0]=-1;
for(i=1;i<=n;i++)
{
f[i]= b[i]=r[i]=((size-1)/n)*i;
}


int choice,data;
while(1)
{
printf("\n1.ENQUEUE\n2.DEQUEUE\n");
scanf("%d",&choice);


switch(choice)
{
case 1:
{
printf("Enter The Data:");
scanf("%d",&data);
printf("To which queue:\n");
scanf("%d",&i);
enqueue(i,data);
break;
}
case 2:
{
printf("From which queue:\n");
scanf("%d",&i);
dequeue(i);
break;
}
default:
printf("No such option\n");
}
}
}
