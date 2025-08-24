/*the formula is a (x + y)*(x + y)*(x + y) = x*x*x + y*y*y +3xy(x+y) */

#include <stdio.h>

int main(){

    int x , y , result ;

    printf("Enter the x : ");
    scanf("%d",&x);

    printf("Enter the y : ");
    scanf("%d",&y);

    result = (x*x*x) + (y*y*y) + (3*x*y*(x+y));

    printf("The value is : %d.",result);
}
