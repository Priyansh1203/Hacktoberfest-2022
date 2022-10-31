// Kadane's Algorithm
#include <stdio.h>

int main()
{
    int a[] = {3, 16, -9, -20, 8, -1, 23};
    int maxsum = 0;
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += a[i];

        if (sum > maxsum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    printf("Maximum continuous subarray sum is : %d", maxsum);
    return 0;
}
