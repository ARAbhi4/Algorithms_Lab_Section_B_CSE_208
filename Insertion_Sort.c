#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("array.txt", "r");
    if(fp==NULL)
        exit(1);


    int n, i, j, temp;


    fscanf(fp,"%d",&n);
    long long int array[n];


    for( i = 0; i < n; i++)
    {
        fscanf(fp,"%d", &array[i]);
    }

    for(i = 1; i < n; i++)
    {
        j = i;

        while (j > 0 && array[j] < array[j-1])
        {
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;

            j--;
        }
    }

    return 0;
}
