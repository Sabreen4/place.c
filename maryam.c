#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd[n], even[n];
    int odd_index = 0, even_index = 0;

    for (int i = 0; i < n; i++)
    {
        (arr[i] % 2 != 0) ? (odd[odd_index++] = arr[i]) : (even[even_index++] = arr[i]);
    }
    printf("The ODD array Values :\n");
    for (int i = 0; i < odd_index; i++)
    {
        printf("%d ", odd[i]);
    }
    
    printf("\nThe EVEN array Values :\n");
    for (int i = 0; i < even_index; i++)
    {
        printf("%d ",even[i]);
    }

    return 0;
}