//Implementation of Stack using Array

#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

int isEmpty(){
    if(top == -1){
        return 1;
    }

    else {
        return 0;
    }
}

int isFull(){
    if(top == N-1){
        return 1;
    }

    else {
        return 0;
    }
}

void push(int element){
    if(isFull()==1){
        printf("\n\nStack is Overflow\n\n");
    }
    else {
        top++;
        stack[top] = element;
    }
}

void pop(){
   
    if(isEmpty()==1){
        printf("\n\nStack is UnderFlow\n\n");
    }
    else{
        int remove;
        remove = stack[top];
        top--;
        printf("\n\nRemove element is %d\n\n",remove);
    }
}

void topElement(){
    if(isEmpty()==1){
        printf("\nThere is no element in top\n\n");
    }
    else{
        printf("\n\nTop of the Stack: %d\n\n",stack[top]);
    }
}


void display(){
    printf("\n\n\n");
    if(isEmpty()==1){
        printf("\n\nThere is no any Element\n\n");
    }
    
    else{
        for(int i=top; i>=0; i--){
            printf("\t%d\t",stack[i]);
        }
    }
    printf("\n\n\n");

}


int main(){

    int option,ele,stop=1;
    
    do{
        printf("Choose the Option : \n");
        printf("1: To add or push an element on stack:\n");
        printf("2: To remove or pop an element on stack: \n");
        printf("3: To display the stack: \n");
        printf("4: To display the top element on stack:\n");
        printf("5: Exist\n\n\n");
        printf("Enter your Choose: ");
        scanf("%d",&option);
        switch(option){
            case 1: {
                if(isFull()==1){
                    push(ele);
                }
                else{
                    printf("Enter the element to push: ");
                    scanf("%d",&ele);
                    push(ele);
                }
                break;
            }

            case 2: {
                if(isEmpty()==0){
                    pop();
                }
                else{
                pop();
                }
                break;
            }

            case 3: {
                display();
                break;
            }

            case 4: {
                topElement();
                break;
            }

            case 5: {
                stop =0;
                break;
            }
            default: {
                printf("\n\nInvalid Option\n\n");
            }
        }
    }while(stop);

    return 0;
}