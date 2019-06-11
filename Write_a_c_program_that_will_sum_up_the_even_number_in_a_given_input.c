#include <stdio.h>
int main()
{
    int arr[1000];
    int n,i, x = 0;

    printf("Enter your number: ");
    scanf("%d", &n);


    for (i=0; n >0; i++)
    {
        arr[i] = n%10;
        n = n/10;
    }
    for (int j=0; j <=i-1; j++)
    {
        if (arr[j]%2==0)
        {
           x = x+ arr[j];
        }
    }

    printf("Sum of even number is %d.\n", x);
    return 0;
}
