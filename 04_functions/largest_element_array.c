#include <stdio.h>

int findLargest(int arr[], int size)
{
    int i, max;

    max = arr[0]; // assume first element is largest

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[100], n, i, largest;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = findLargest(arr, n);

    printf("Largest element in the array is %d\n", largest);

    return 0;
}
