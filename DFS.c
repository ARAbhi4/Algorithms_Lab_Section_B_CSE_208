#include <stdio.h>
#include <math.h>

int color[100];
int time =0;
int prev[100];
int d[100];
int f[100];
int n;
int white = 7;
int grey = 8;
int black = 9;
int arr[100][100];

void DFS()
{
    int u;
    for(u = 1; u<=n; u++)
    {
        color[u] = white;
        prev[u] = NULL;
        f[u] = +INFINITY;
        d[u] = +INFINITY;
    }

    for(u = 1; u<=n; u++)
    {
        if(color[u] == white)
        {
            DFS_Visit(u);
        }
    }
}

void DFS_Visit(int u)
{

    color[u] = grey;

    time = time+1;
    d[u] = time;

    int v;

    for(v =1; v<=n ; v++)
    {
        if(arr[u][v] == 1 && color[v] == white)
        {
            prev[v] = u;
            DFS_Visit(v);
        }
    }
        color[u] = black;
        time = time+1;
        f[u] = time;

}

int main()
{

    printf("Enter your Vertex:");
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            //printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    DFS();

    for(i = 1; i<=n; i++)
    {
        printf("Vertex %d\n\n",i);

        printf("Discovery Time %d\n",d[i]);
        printf("Finishing Time %d\n\n",f[i]);

    }

    return 0;
}




