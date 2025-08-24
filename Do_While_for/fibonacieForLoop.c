#include <stdio.h>

int main(){

    int n;
    printf("Enter any number : ");
    scanf("%d",&n);


    int t1=0;
    int t2=1;
    for(int i=1 ; i<=n ; i++){
        printf("%d ",t1);
        int t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return 0;
}