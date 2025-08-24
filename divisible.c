#include <stdio.h>

int main(){

    int div(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);

        if(n%3==0){
            if(n%5==0){
                printf("The given number is divisible by 3 & 5.");
                return 0;
            }
        }
        printf("The given number is not divisible by 3 & 5.");
        return 0;
    }
    int call = div();
    scanf("%s",&call);
}