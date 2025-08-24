#include <stdio.h>

int main() {
    int m1, m2, m3;
    float avg;

    printf("Enter marks for three subjects (out of 100):\n");

    printf("Enter maths marks : ");
    scanf("%d", &m1);

    printf("Enter english marks : ");
    scanf("%d", &m2);

    printf("Enter science marks : ");
    scanf("%d", &m3);

    if ((m1 < 0 || m1 > 100) || (m2 < 0 || m2 > 100) || (m3 < 0 || m3 > 100)) {
        printf("Error: Marks should be between 0 and 100.\n");
        return 1;
    }

    avg = (m1 + m2 + m3) / 3.0;

    printf("Average mark: %.2f\n", avg);

    return 0;
}
