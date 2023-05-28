#include <stdio.h>

int calculateDiagonals(int n) {
    int diagonals = (n * (n - 3)) / 2;
    return diagonals;
}

int main() {
    int n;

    printf("");
    scanf("%d", &n);

    int numDiagonals = calculateDiagonals(n);

    printf("%d
", numDiagonals);

    return 0;
}
