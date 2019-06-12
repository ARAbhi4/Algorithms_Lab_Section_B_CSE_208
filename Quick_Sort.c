#include <stdio.h>
void Swap(int *x, int *y) {
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void quickSort(int array[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(array[i] <= array[pivot] && i < last)
                i++;
            while(array[j] > array[pivot])
                j--;
            if(i < j) {
                Swap(&array[i], &array[j]);
            }
        }
        Swap(&array[pivot], &array[j]);
        quickSort(array, first, j - 1);
        quickSort(array, j + 1, last);
    }
}
int main() {
    FILE *fp;
    fp = fopen("array.txt", "r");
    if(fp==NULL)
        exit(1);


    int number, i,n;


    fscanf(fp,"%d",&n);
    long long int array[n];


    for( i = 0; i < n; i++)
    {
        fscanf(fp,"%d", &array[i]);
    }


    quickSort(array, 0, number - 1);

    return 0;
}
