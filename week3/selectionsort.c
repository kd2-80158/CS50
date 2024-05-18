#include<stdio.h>

void selectionSort(int *arr,int n);
int main(void)
{
    int n = 6; //size of an array
    int arr[] = {33,11,5,21,44,6};

    //method invokation
    selectionSort(arr,n);

    //printing the sorted array
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr,int n)
{

    //pseudocode
    /*
    1. CHeck from 0 to n-1
    2. If arr[i] > arr[j]
    then swap arr[i] and arr[j]
    otherwise increment i and j
    */
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            //swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp; 
            printf("temp=%d arr[i]=%d arr[j]=%d",temp,arr[i],arr[j]);
        }
    }
    printf("/n");
   }
}