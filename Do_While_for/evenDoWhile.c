#include <stdio.h>

int main(){

    int i = 2;
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    do {
        if(i % 2 == 0)
            printf("%d\n", i);
        i++;
    } while(i <= n);

    return 0;
}