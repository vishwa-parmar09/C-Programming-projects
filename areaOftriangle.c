#include <stdio.h>
int main(){

    float area,breadth,height;
    printf("Enter the breath : ");
    scanf("%f",&breadth);

    printf("Enter the height : ");
    scanf("%f",&height);

    area = 0.5*breadth*height;

    printf("The formula of triangle is 1/2 * breadth * height.\n The area of triangle is : %f.",area);

    return 0;
}