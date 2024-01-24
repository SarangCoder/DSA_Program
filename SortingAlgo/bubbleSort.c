/*
Bubble sort Algorithm
    bubbleSort(arry, n) {
        for(i=0; i<n-1; i++ ){
            for(int j=0; j<n-i-1; j++){
                temp = array[j];
                if(array[j]>array[j+1]){
                    array[j] = a[j+1]
                    array[j+1] = temp;
                }
            }
        }
    }
*/

#include<stdio.h>
#define n 20
void bubbleSort(int array[n],int N){
    int i,j,temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            temp = array[j];
            if(array[j]> array[j+1]){
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void Display(int array[n],int N){
      for(int i=0; i<N; i++){
        printf("%d\t",array[i]);
    }
}

int main(){
    int a[n];
    int N;
    printf("Enter no of data iteams: ");
    scanf("%d",&N);
    printf("Enter %d data items: ",N);
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    // printf("Before Sort: ");
    // Display(a,N);
    bubbleSort(a,N);
    printf("\nArray after sort: ");
    for(int i=0; i<N; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
