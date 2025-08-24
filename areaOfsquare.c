#include <stdio.h>

int main(){

    float length,area;
    printf("Enter the length : ");
    scanf("%f",&length);

    area = length*length;
    printf("\nThe formula of square is l*l\nThe area of square is %f",area);

    return 0;
}