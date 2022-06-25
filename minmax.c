#include <stdio.h>
int max, min, a[100];
int maxmin(int i, int j)
{
    int max1, min1, mid;
    if (i == j)
    {
        max = min = a[i];
    }
    else
    {
        if (i == j - 1)
        {
            if (a[i] > a[j])
            {
                max = a[i];
                min = a[j];
            }
            else
            {
                max = a[j];
                min = a[i];
            }
        }
        else
        {
            int mid = (i + j) / 2;
            maxmin(i, mid);
            max = max1;
            min = min1;
            maxmin(mid + 1, j);
            if (max <= max1)
                max = max1;
            if (min >= min1)
                min = min1;
        }
    }
}
int main()
{
    int n, a[n];
    printf("enter the number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter numbers");
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    maxmin(0, n - 1);
    printf("maximum number is %d\n", max);
    printf("minimum number is %d\n", min);
}