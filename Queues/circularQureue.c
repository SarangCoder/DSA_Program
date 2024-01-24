
// Circular Queue implementation

#include<stdio.h>
#define N 5

int Cqueue[N];
int rear = N-1;
int front = N -1;

int isEmpty(){
    if(rear == front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(front == (rear+1)%N){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int element){
    if(isFull()==1){
        printf("\n\n Queue is OverFlow or Full\n\n");
    }
    else{
        printf("\nEnter the Insert elemet: ");
        scanf("%d",&element);
        rear = (rear+1)%N;
        Cqueue[rear] = element;

    }
}

void deQueue(){
    if(isEmpty()==1){
        printf("\n\n Queue is Empty:\n\n");
    }
    else{
        int remove;
        front = (front+1)%N;
        remove = Cqueue[front];
        printf("\n\nDequeue Element is %d\n\n",remove);
    }
}

void display(){
    printf("\n\n");
    for(int i=(front+1)%N; i != rear+1; i++ ){
        printf("\t%d\t",Cqueue[i]);
    }
    printf("\n\n");

}

int main(){
    int option,ele,stop=1;
    do{
        printf("\n\nChoose the Option: \n");
        printf("1: To Enqueue the element on queue: \n");
        printf("2: To Dequeue the element on queue: \n");
        printf("3: To display th Queue: \n");
        printf("4: Exist\n\n");
        printf("Enter your Choose: ");
        scanf("%d",&option);
        switch(option){
            case 1: {
                if(isFull()==1){
                    printf("\nQueue is Full\n\n");
                }
                else{
                    Enqueue(ele);
                }
                break;
            }
            case 2: {
                if(isEmpty()==1){
                    printf("\nQueue is Empty\n\n");
                }
                else{
                    deQueue();
                }
                break;
            }
            case 3: {
                if(isEmpty()==1){
                    printf("\n\nQueue is Empty\n\n");
                }
                else{
                    display();
                }
                break;
            }
            case 4: {
                stop =0;
                break;
            }
            default: {
                printf("\nInvalid Option \n\n");
            }
        }
    }while(stop);
    
    return 0;
}