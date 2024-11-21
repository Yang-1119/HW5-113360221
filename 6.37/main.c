#include <stdio.h>

int recursiveMaximum(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int max = recursiveMaximum(arr, n - 1);

    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Please enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = recursiveMaximum(arr, n);
    printf("The maximum in the array is: %d\n", max);

    return 0;
}
