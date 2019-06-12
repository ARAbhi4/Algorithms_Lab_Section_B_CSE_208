#include<stdio.h>


int main()
{
  int n,i;

 FILE *fp;
    fp = fopen("array.txt", "r");
    if(fp==NULL)
        exit(1);
    fscanf(fp,"%d",&n);
    long long int array[n];


    for( i = 0; i < n; i++)
    {
        fscanf(fp,"%d", &array[i]);
    }


  merge_sort(array,0,n-1);

  return 0;
}

int merge_sort(int array[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;

    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);

    merge(array,low,mid,high);
  }

  return 0;
}

int merge(int array[],int l,int m,int h,int n)
{
  long long int arr1[n/2],arr2[n/2];

  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0;i<n1;i++)
    arr1[i]=array[l+i];
  for(j=0;j<n2;j++)
    arr2[j]=array[m+j+1];



  i=0;j=0;
  for(k=l;k<=h;k++)
  {
    if(arr1[i]<=arr2[j])
      array[k]=arr1[i++];
    else
      array[k]=arr2[j++];
  }

  return 0;
}
