#include <stdio.h>

int findSingleNumber(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        // XOR operation cancels out the duplicate occurrences
        result ^= arr[i];
    }
    return result;
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);

    int arr[N];
    printf("");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int singleNumber = findSingleNumber(arr, N);
    printf("%d
", singleNumber);

    return 0;
}
