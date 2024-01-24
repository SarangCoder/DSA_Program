// call by value:

#include<stdio.h>

void swap (int x, int y) {
    int t;
    t = x;
    x =y;
    y =x;
    printf("a = %d and b = %d\n",x,y);
    
}

int main() {

    int a,b;
    a =10;
    b =20;
    swap(a,b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}