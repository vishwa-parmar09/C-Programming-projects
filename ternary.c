#include <stdio.h>

int main(){

    int n1,n2,n3,min;

    printf("Enter 1st number : ");
    scanf("%d",&n1);

    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    printf("Enter 3rd number : ");
    scanf("%d",&n3);

    min = ((n1<n2 && n1<n3))?printf("The min number is %d.",n1):((n2<n1 && n2<n3) ? printf("The min number is %d.",n2): printf("The min number is %d.",n3));
    printf("%s",min);
    


}