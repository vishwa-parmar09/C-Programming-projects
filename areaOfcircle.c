#include <stdio.h>

#define PI 3.14

int main() {
    float radius,area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI*radius*radius;

    printf("The area of circle is %f",area);
    return 0;
}