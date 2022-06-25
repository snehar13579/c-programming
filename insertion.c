#include <stdio.h>
int main()
{
    int i,j, key, a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

printf("sorted array is");
for (int i = 0; i < 10; i++)
{
    printf("%d\n", a[i]);
}
}