/* the formula of simple interest is p*r*n divided by 100 p is principle amout , 
r is the rate , and n is the time in a month.*/

#include <stdio.h>

int main(){

    float principle , rate , time, interest;

    printf("Enter the principle : ");
    scanf("%f",&principle);

    printf("Enter the rate : ");
    scanf("%f",&rate);

    printf("Ebter the time : ");
    scanf("%f",&time);

    interest = (principle*rate*time)/100;

    printf("The simple interest is : %f",interest);

    return 0;
}