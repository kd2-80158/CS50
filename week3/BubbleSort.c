#include<stdio.h>

void bubblesort(int *arr,int n);
int main(void)
{
    int n=6;
    int arr[] = {10,5,12,15,11,9};

    printf("After Sort:");

    bubblesort(arr,n);

    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    //bubblesort
    //steps:
    //1. Check from 0 to n-1
    //2. if arr[i] > arr[i+1] then swap
    //else move i=i+1

}
void bubblesort(int *arr,int n)
    {
        for(int i=0;i<n-1;i++)
        {
        for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1])
           {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            printf("temp=%d arr[j]=%d arr[j+1]=%d\n",temp,arr[j],arr[j+1]);
           }
        }
        printf("\n");
        }
      
    }