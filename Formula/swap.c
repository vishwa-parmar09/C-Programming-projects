#include <stdio.h>

int main(){

    int x , y , temp ;

    printf("Enter the x : ");
    scanf("%d",&x);

    printf("Enter the y : ");
    scanf("%d",&y);

    temp = x;
    x=y;
    y=temp;

    printf("x=%d",x);
    printf("y=%d",y);
}