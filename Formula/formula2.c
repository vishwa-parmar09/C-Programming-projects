/*the formula is a (x - y)*(x - y) = x*x -2xy +y*y */

#include <stdio.h>

int main(){

    int x , y , result ;

    printf("Enter the x : ");
    scanf("%d",&x);

    printf("Enter the y : ");
    scanf("%d",&y);

    result = (x*x) - (2*x*y) + (y*y);

    printf("The value is : %d.",result);
}