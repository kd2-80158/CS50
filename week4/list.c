#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //int arr[3]; //stack
    int *arr = malloc(3*sizeof(int));
    if(arr==NULL)
    {
        return 1;
    }
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;

    int *tmp = malloc(4*sizeof(int));
    if(tmp==NULL)
    {
        free(arr);
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        tmp[i]=arr[i];
    }
    tmp[3]=4;

    free(arr);
    arr=tmp;
    for(int i=0;i<4;i++)
    {
        printf("%i\n",arr[i]);
    }
    free(arr);
    return 0;
}