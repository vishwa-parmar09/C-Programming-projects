#include <stdio.h>

int main(){

    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n>0){
        printf("The number is positive.");
    }
    else if(n<0){
        printf("The number is nagative.");
    }
    else if (n==0){
        printf("The number is natural.");
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}