#include<stdio.h>
void push();
void pop();
void display();
int N = 5;
int stack[5];
int top= -1;
int main(){
    int choice;
    do
    {
        printf("enter your choice: 1-->Push ; 2-->Pop ; 3-->Display ; 4-->Exit");
        scanf("%d" , &choice);
        switch (choice)
        {
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            peek();
            break;

        default:
            printf("choice is out of range");
            break;
        }
    } while(choice!=4);
    return 0;
}
void push(){
    int x;
    printf("enter a data");
    scanf("%d",&x);
    if (top==N-1){
        printf("Overflow--- cannot enter a data");
    }else{
        top++;
        stack[top]=x;
        printf("%d push to stacked.\n",x);
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("Underflow---Stack is Empty");
    }
    else{
        int item=stack[top];
        top--;
        printf("Poped the item :%d \n",item);

    }
}
void peek(){
    if(top==-1){
        printf("Underflow--\n");
    }else{
        printf("%d|n",stack[top]);

    }
}
