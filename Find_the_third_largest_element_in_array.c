#include <stdio.h>

int main()
{
    int arrr[1000];
    int n, z;
    printf("Input your size of array.\n");
    scanf("%d", &n);

    for (int i = 0;  i < n ; i++)
    {
        printf("Input your %d number : ", i);
        scanf("%d", &arrr[i]);
    }

    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0; j<n-1; j++)
        {
             if(arrr[j] < arrr[i+1])
        {
            z = arrr[j];
            arrr[j] = arrr[i+1];
            arrr[i+1] = z;
        }
        }
    }

    printf("The third largest element number %d \n", arrr[2]);
    return 0;
}
