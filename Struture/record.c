#include<stdio.h>
#include<string.h>
struct record
{
    char name[20];
    char sec;
    int rollNO;
    int class;
};


int main(){
    struct record r;
    printf("\nEnter the name: ");
    gets(r.name);
    printf("Enter the rollNO: ");
    scanf("%d",&r.rollNO);
    printf("Enter section: ");
    scanf("%c",&r.sec);
    printf("Enter the Class: ");
    scanf("%d",&r.class);
    puts(r.name);
    printf("\n RollNO: %d\n Class: %d\n Section: %c \n",r.rollNO,r.class,r.sec);
    

    return 0;

}
