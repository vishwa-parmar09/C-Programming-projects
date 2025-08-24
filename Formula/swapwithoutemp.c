#include <stdio.h>

int main(){

    int x , y;

    printf("Enter the x : ");
    scanf("%d",&x);

    printf("Enter the y : ");
    scanf("%d",&y);
    

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}