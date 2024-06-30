#include<stdio.h>
#include<stdlib.h>
#define size 100
int stack[size],n,i,top=-1,choice,value;
void push();
void pop();
void peek();
void display();
void main()
{
    while(1)
    {
        printf("***STACK MENU***\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter a value to push:");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
                    break;
            default: printf("Enter a valid choice!\n");
                     break;
        }
    }
}
void push()
{
    if(top == size-1)
    {
        printf("Overflow\n");
    }
    else{
        top+=1;
        stack[top]= value;
        printf("Inserted element is %d",value);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        value = stack[top];
        top-=1;
        printf("Deleted element is %d",value);
    }
}
void peek()
{
    if(top==-1){
        printf("Stack is empty!\n");
    }
    else{
        printf("The top element is %d",stack[top]);
    }
}
void display()
{
    int i;
    if(top!=-1)
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else{
        printf("Stack is empty!");
    }
}
