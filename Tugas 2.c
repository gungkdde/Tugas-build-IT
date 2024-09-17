#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int x = 0; x < n - i - 1; x++)
        {

            if (arr[x] > arr[x + 1])
            {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
            }
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);

    int nilai[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nilai[i]);
    }

    bubbleSort(nilai, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", nilai[i]);
    }

    return 0;
}