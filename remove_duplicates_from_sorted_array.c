#include<stdio.h>
int removeDuplicates(int arr[], int n)
{
    int i, j = 0;
    for(i = 0; i < n - 1; i++)
    {
    if(arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[n - 1];
    return j + 1;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 5, 6, 6, 7, 7, 7, 8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    n = removeDuplicates(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
