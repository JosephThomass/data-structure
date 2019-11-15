#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int stack[100];
int top=-1;

void push(int n)
{
    if(top==100-1)
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        top=top+1;
        stack[top]=n;
       
    }
}

int pop()
{
    int n;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        n=stack[top];
        top=top-1;
  return n;      
    }

}

int evaluate(int op1,int op2,char ch)
{
    printf("op1=%d op2=%d ch=%c\n",op1,op2,ch);
    int n;
   
    if(ch=='+')
        n=op1+op2;
    else if(ch=='-')
        n=op1-op2;
    else if(ch=='*')
        n=op1*op2;
    else if(ch=='/')
        n=op1/op2;
    else if(ch=='%')
        n=op1%op2;
    else
    {
        printf("The operator is not identified\n");
        exit(0);
    }
    printf("n=%d\n",n);
    return(n);
}

void main()
{
      char str[50],ch,ch1;
      int i=0,n,op1,op2;

      printf("Enter the Postfix string:\n");
      scanf("%s",str);
      ch=str[i];
      while(ch!='\0')
      {
        printf("Char is=%c\n",ch);
       
           if(isdigit(ch))
           {
                printf(" the in is %d",ch-'0');
n=ch-'0';
printf("n=%d",n);
                push(n);
           }
           else
           {
                op2=pop();
                op1=pop();
printf("op %d op %d",op1,op2);
                n=evaluate(op1,op2,ch);
                push(n);
           }
           ch=str[++i];
      }
      printf("Expression=%d\n",pop());
      return;
}
