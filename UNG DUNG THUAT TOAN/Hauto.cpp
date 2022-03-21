#include<stdio.h>
#include<string.h>
#include<math.h>
# define max 50
int stack[max] ;
int top=-1;
void push(int element)
{
    top=top+1;
    stack[top]=element;

}
int  pop()
{
    int element;
    if(top==-1)
     printf("Stack is underflow");
    else
    {
    element=stack[top];
    top-=1;
    return element;
    }
}
int main()
{
    char postfix[50];
    int length,a,b,c,i,num,ascii;
    printf("Enter postfix expression value seprated by comma");
    gets(postfix);
    length=strlen(postfix);
    postfix[length]=')';
    for(i=0;postfix[i]!=')';i++)
    {
    if(postfix[i]==' ')
      continue;
    if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='^')
    {
        a=pop();
        b=pop();
        if(postfix[i]=='+')
         c=b+a;
        if(postfix[i]=='-')
          c=b-a;
        if(postfix[i]=='*')
         c=b*a;
        if(postfix[i]=='/')
          c=b/a;
        if(postfix[i]=='^')
          c=pow(b,a);
        push(c);
    }
    else
    {
     num=0;
     ascii=postfix[i];
     while(ascii>=48&&ascii<=57)
     {
       num=num*10+(ascii-48);
       i+=1;
       ascii=postfix[i];
     }
     push(num);
    }
    }
    printf("result = %d ",stack[top]);
    return 0;
}

