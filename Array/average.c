#include<stdio.h>

int main(){
    int data[100],sum,n;
    float avg;

    printf("Enter the number of data: ");
    scanf("%d",&n);

    printf("Enter the data");
    for(int i=0; i<n; i++){
        scanf("%d",&data[i]);
        sum +=data[i];

    }

    avg = sum/n;
    printf("Sum is : %d",sum);
    printf("Average is: %f \n",avg);

    return 0;    
    
}