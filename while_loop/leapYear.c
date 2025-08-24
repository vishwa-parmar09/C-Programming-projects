#include <stdio.h>

int main(){
    
    int n1,n2;
    printf("enter 1st number : ");
    scanf("%d",&n1);

    printf("enter 2nd number : ");
    scanf("%d",&n2);

    int year = n1;
    printf("Leap years between %d and %d are:\n", n1, n2);
    while (year <= n2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
        year++;
    }
    return 0;
}