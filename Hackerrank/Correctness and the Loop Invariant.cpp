#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int N, int arr[]) 
{
    int temp;
    for(int k=0;k<N;k++)
    {
    for(int j=k+1;j<N;j++)
        {
        if(arr[k]>arr[j])
            {
            temp=arr[k];
            arr[k]=arr[j];
            arr[j]=temp;
        }
    }
}
    for(int j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[10001], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
