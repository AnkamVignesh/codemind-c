#include <stdio.h>

int findHCF(int a, int b) {
    if (b == 0)
        return a;
    else
        return findHCF(b, a % b);
}

int findArrayHCF(int arr[], int n) {
    int hcf = arr[0];
    for (int i = 1; i < n; i++) {
        hcf = findHCF(hcf, arr[i]);
    }
    return hcf;
}

int main() {
    int n;

    printf("");
    scanf("%d", &n);

    int arr[n];
    printf("");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int hcf = findArrayHCF(arr, n);

    printf("%d
", hcf);

    return 0;
}
