#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL,*temp;
void push(int);
void pop();
void peek();
void display();
void main()
{
    int choice, value;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter a value:\n");
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
void push(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL)
    {
        newnode->next=NULL;
    }
    else{
        newnode->next=top;
    }
    top=newnode;
}
void pop()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else{
        temp=top;
        top=temp->next;
        printf("Deleted!\n");
        free(temp);
    }
}
void peek()
{
    if(top == NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("The top element is %d",top->data);
    }
}

void display()
{
    if(top==NULL)
    {
        printf("Empty stack!\n");
    }
    else{
        temp = top;
        while(temp->next!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}
