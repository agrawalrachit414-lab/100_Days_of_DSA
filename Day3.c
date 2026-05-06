#include <stdio.h>
int main()
{
    int n, k, count = 0;
    int arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int found = -1;
    for(int i = 0; i < n; i++)
    {
        count++;
        if(arr[i] == k)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", count);
    return 0;
}
