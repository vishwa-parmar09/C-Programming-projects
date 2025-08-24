#include <stdio.h>
#define PI 3.14

int main(){

    float perimeter , radius;

    printf("Enter the radius : ");
    scanf("%f",&radius);

    perimeter = 2*PI*radius;

    printf("The perimeter of circle is : %f",perimeter);

    return 0;
}