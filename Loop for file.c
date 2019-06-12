#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    FILE *fp;
    fp = fopen("array.txt", "a");
    if(fp==NULL)
        exit(1);

    srand(time(0));

    fprintf(fp,"\n5000000\n");

    for( i = 0; i < 5000000; i++)
    {
        fprintf(fp,"%d ", rand());
    }

}

