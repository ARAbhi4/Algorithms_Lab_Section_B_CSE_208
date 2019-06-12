#include <stdio.h>
int main()
{
    int arrmain[8]={5,9,2,4,6,1,8,3};
    int arrsub[8]={800,100,600,300,200,900,700,400};
    int k,f,c,g,n, s,x,z,t,sum=0,sum1=0;

    for(int i = 0; i <= 7-1; i++)
    {
        for(int j=0; j <= 7-1; j++)
        {
            if(arrsub[j] < arrsub[i+1])
            {
                x = arrsub[j];
                arrsub[j] = arrsub[i+1];
                arrsub[i+1] = x;
                z = arrmain[j];
                arrmain[j] = arrmain[i+1];
                arrmain[i+1] = z;

            }
        }
    }

    for( k = 0;sum <= 15 ;k++)
    {
                sum1 = sum1+ arrsub[k];

                sum = sum + arrmain[k];


            if(sum <= 15)
            {
                t = sum;

                s = sum1;
            }
            printf("Product no. %d\n",arrmain[k]);

        }
        f = 15 - t;
        c = arrmain[k-1] - f;
        g = arrsub[k-1] / arrmain[k-1];
        n = c*g;

        s = s+n;
        t = t+c;

    printf("Total product no. are %d\n",t);
    printf("Total product value are %d\n",s);


    return 0;
}



