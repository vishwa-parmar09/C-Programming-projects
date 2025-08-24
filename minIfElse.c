#include <stdio.h>

int main(){
    int n1,n2;

    printf("Enter 1st number : ");
    scanf("%d",&n1);

    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    int min;
    if(n1<n2){
        printf("the min value is %d",n1);
    }else{
        printf("the min value is %d",n2);
    }
    return 0;
}