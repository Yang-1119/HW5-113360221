#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int target)
    {
        if (left > right)
        {
        return -1;
        }

        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
        return mid;
        }

        else if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target);
        }
        else
        {
        return binarySearch(arr, mid + 1, right, target);
        }
    }

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Please enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Please enter the number to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("The number %d is found at index %d.\n", target, result);
    }
    else
    {
        printf("The number %d is not found in the array.\n", target);
    }

    return 0;
}
