#include <stdio.h>

int calculateSimpleInterest(int principal, int rate, int time) {
    int interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    int principal, rate, time;

    printf("");
    scanf("%d", &principal);

    printf("");
    scanf("%d", &rate);

    printf("");
    scanf("%d", &time);

    int simpleInterest = calculateSimpleInterest(principal, rate, time);

    printf("%d
", simpleInterest);

    return 0;
}
