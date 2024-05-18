#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *arr, int left, int right);
void merge(int *arr, int left, int mid, int right);

int main(void)
{
    int n = 7;
    int arr[] = {10, 8, 7, 12, 54, 27, 22};

    // Method invocation for sorting
    mergeSort(arr, 0, n - 1);

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void mergeSort(int *arr, int left, int right)
{
    if (left < right)
    {
        // Middle element
        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge them
        merge(arr, left, mid, right);
    }
}

void merge(int *arr, int left, int mid, int right)
{
    // m and n are new size of temporary arrays
    int m = mid - left + 1;
    int n = right - mid;  // Corrected calculation

    // Create temporary arrays
    int *Left = (int *)malloc(m * sizeof(int));
    int *Right = (int *)malloc(n * sizeof(int));

    // Copy data into temporary arrays
    for (int i = 0; i < m; i++)
    {
        Left[i] = arr[left + i];
    }
    for (int i = 0; i < n; i++)
    {
        Right[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < m && j < n)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements
    while (i < m)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while (j < n)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }

    // Free temporary memory
    free(Left);
    free(Right);
}
