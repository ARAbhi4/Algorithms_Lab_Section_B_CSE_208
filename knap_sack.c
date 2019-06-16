#include <stdio.h>

int main()
{
    int i,j;
    int item[] = {2,5,8};
    int value[] = {1000,200,500};
    int x,y, max = 0,z;

    for(i=0;i <3 ;i++)
    {
        for(j= i+1; j < 3; j++ )
        {
            if(item[i] + item[j] <= 10)
            {
                x = item[i];
                y = item[j];

                z = value[i] + value[j];
                if(z>max)
                {
                    max=z;
                }


            }

        }
    }
    printf("%d is max value for %d and %d item", max, x, y);
    return 0;
}
