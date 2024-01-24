#include<stdio.h>

int main(){
    int array[100],n,poe,i;
    printf("Enter the how many element you want to enter:  ");
    scanf("%d",&n);
    printf("Enter the %d no of elements: \n ",n);
    for(i = 0; i<n; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter in which position you want to insert: ");
    scanf("%d",&poe);

  

    for(i=poe; i<n; i++){
        array[i] = array[i+1];
    }
    
  
    n--;

    for(i = 0; i<n; i++){
        printf("%d \t",array[i]);
    }

    return 0;
}