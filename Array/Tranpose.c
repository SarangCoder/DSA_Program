#include<stdio.h>

void display (int arr[10][10],int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[10][10],t[10][10],r,c,i,j;
    printf("Enter the row of matrix: ");
    scanf("%d",&r);
    printf("Enter the column: ");
    scanf("%d",&c);
    printf("Enter the elements of matrix: \n\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is: \n\n");
    display(a,r,c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            t[i][j] = a[j][i];
        }
    }

    printf("Transpose is : \n\n");
    display(t,r,c);

    return 0;
}