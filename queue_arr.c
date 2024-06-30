#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
int queue[maxsize],n,choice,value,f=-1,r=-1;
void enqueue();
void dequeue();
void peek();
void display();
int main(){
while(1){ 
printf("*****QUEUE MENU*****\n");
printf("1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);

switch(choice){
case 1: printf("Enter a value to enter:");
scanf("%d",&value);
enqueue(value);
break;
case 2: dequeue();
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
void enqueue(){
if(r==maxsize-1){
printf("Queue overflow\n");
}
else{
if(f==-1&&r==-1){
f=0;
r=0;
}
else{
r++;
    }
}
queue[r]=value;
printf("%d inserted successfully!\n",queue[r]);
}
void dequeue(){
if(f==-1||f>r){
printf("Queue underflow\n");
}
else{
value=queue[f];
printf("%d is deleted successfully!",value);
f++;
}
}
void peek(){
if(f==-1||f>r){
printf("Queue underflow\n");
}
else{
printf("The front element is:%d",queue[f]);
}
}
void display(){
int i;
if(f==-1||f>r){
printf("Queue is empty!");
}
else{
printf("The queue elements are:\n");
for(i=f;i<=r;i++){
printf("%d\t",queue[i]); 
}
}

}
