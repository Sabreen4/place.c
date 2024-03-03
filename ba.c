#include <stdio.h>

int main(void)
{
    int arr[] = {5, 6, 1, 2, 8, 4, 3, 0};
    int index[] = {0, 1, 2, 3, 4, 5, 6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max,k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
                temp = index[j];
                index[j] = index[i];
                index[i] = temp;
            }
        }
    }
    printf("The values after sort :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The Indexes after sort : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", index[i]);
    }
    
    
    return 0;
}