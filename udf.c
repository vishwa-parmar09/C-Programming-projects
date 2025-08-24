#include <stdio.h>

int main(){

    int cubee(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        return n*n*n;
    }

    int c= cubee();
    printf("The cube is %d.",c);
}