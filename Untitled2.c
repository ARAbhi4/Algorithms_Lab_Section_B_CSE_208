#include <stdio.h>

int main()
{
    int n,x,y=0,i;
    int arr[] = {1,2,5,10,20,50,100,500,1000};
    scanf("%d", &n);

    for(i = 8 ; i >=0; i--)
    {
        x = n/arr[i];
        n = n%arr[i];

        printf("%d for %d Note \n", x, arr[i]);


        y += x;
    }
    printf("Total Note %d", y);

    return 0;
}
