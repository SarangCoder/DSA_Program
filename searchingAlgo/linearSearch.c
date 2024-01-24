#include<stdio.h>
#define n 10
//Function for linear Search;
void linearSearch(int Array[n],int data){
    int flag =0,i;
    for( i=0; i<n; i++){
        if(Array[i] == data){
            flag =1;
            break;
        }
    }
    if(flag==1){
    printf("%d is found in \nindex : %d\nposition: %d\n",data,i,i+1);
    }
    else{
        printf("%d is not found in given array\n",data);
    }
}

int main(){
    int array[n] = {12,3,45,65,6,77,4,6,7,1};
    linearSearch(array,1);
    linearSearch(array,77);
    linearSearch(array,5);

    return 0;
}

