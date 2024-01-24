#include<stdio.h>
#define n 100

int binarySearch(int Array[n], int left, int right , int data){
    int middle;
    int flag =0; 
    if(left<=right){
        middle = (left + right)/2;
        if(data = Array[middle]){
            flag =middle;
        }

        else if (data>Array[middle])
        {
            return binarySearch(Array,left,middle-1, data);
        }
        else{
            return binarySearch(Array,left+1,right,data);
        }
    }

    else {
        return flag;
    }
}

int main(){
    int size, array[n], i , data,flag;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the %d element in sorted form: ",size);
    for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the search iteam: ");
    scanf("%d",&data);
    flag = binarySearch(array,0,size-1,data);
    if(flag==0){
        printf("Searching is Un-Sucessful");
    }
    else {
        printf("Search Successful and found at location %d \n", flag+1);
    }
    return 0;
}