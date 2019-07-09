#include <stdio.h>
#include <math.h>
int prev[100];

double d[100];

int r =1;
int q[100];
int arr[100][100];
int visited[100];
int dequeue()
{
    int temp,i;

    if(r==1)
    {
        return;
    }

    temp = q[1];

    for(i=1; i<r; i++)
    {
        q[i] = q[i+1];
    }

    r--;

    return temp;
}
void enqueue(int n)
{
    q[r] = n;
    r++;
}

void BFS(int n, int s)
{
    int v,u,i;

    for(i=1; i<=n; i++)
    {
        visited[i] = 0;
        prev[i] = NULL;
        d[i] = +INFINITY;
    }
    visited[s] = 1;

    d[s] = 0;

    prev[s] = NULL;

    enqueue(s);
    while(r!= 1)
    {
        u = dequeue();
        //printf("%d ",u );


        for(v =1; v <= n; v++)
        {

            if(arr[u][v] == 1 && visited[v] == 0)
            {
                visited[v] = 1;
                d[v] = d[u] + 1;
                prev[v] = u;
                enqueue(v);
            }
        }

    }

    Print_Path(visited[v],prev[v],d[v]);

}

int Print_Path(int G,int s,int v)

{

    if(v==s)
    {
        printf("%d ",s);
    }
    else if(prev[v]==NULL)
    {
        printf("No path");
    }
    else{

    Print_Path(G,s,prev[v]);

    printf("%d ",v);
    }

}


int main()
{
    printf("Enter your Vertex:");
    int n,s;
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter your source: ");
    scanf("%d", &s);
    BFS(n,s);



    return 0;
}
