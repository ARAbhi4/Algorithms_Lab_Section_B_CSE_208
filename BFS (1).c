#include<stdio.h>
int r =1;
int q[100];
int arr[100][100];
int visited[100];
int dequeue()
{
    int temp,i;

    if(r==1) return;

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
    }
    visited[s] = 1;
    enqueue(s);
    while(r!= 1)
    {
        u = dequeue();
        printf("%d ",u );

        for(v =1; v <= n; v++)
        {

            if(arr[u][v] == 1 && visited[v] == 0)
            {
                visited[v] = 1;
                enqueue(v);
            }
        }
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
