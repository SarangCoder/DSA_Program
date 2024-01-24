#include<stdio.h>

void display(int d[10][10],int r,int c){
    int i,j;
    for ( i = 0; i <r ; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",d[i][j]);
        }

        printf("\n");
        
    }
    
}

int main(){
    int a[10][10],b[10][10],sum[10][10],i,j,c,r;

    printf("Enter the row and column of matrix: ");
    scanf("%d %d",&r,&c);

    printf("Enter the %d rows and %d column of element of matrix A : ",r,c);

    for(i=0;i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the %d rows and %d column of element of matrix B : ",r,c);

      for(i=0;i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nMatrix A: \n");
    display(a,r,c);
    printf("\nMatrix B: \n");

    display(b,r,c);
    printf(" \nSum of Matrix is: \n");
    
    display(sum,r,c);



    return 0;
}


