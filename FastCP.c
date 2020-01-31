#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* get_tuple_by_index(int** setarr, int index, int numberofsets, int setlenarr[])
{
    int i, element;
    int* tuple = malloc(numberofsets * sizeof(int));
    for (i = numberofsets - 1; i >= 0; i--)
    {
        element = setarr[i][index % setlenarr[i]];
        tuple[i] = element;
        index /= setlenarr[i];
    }
    return tuple;
}

void printl(int *arr)
{
    printf("(");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b)\n");
}

void main()
{
    int firstset[256], secondset[256], thirdset[256], i;
    static int *result;
    for (i = 0; i < 256; i++)
    {
        firstset[i] = i + 1;
        secondset[i] = i + 1;
        thirdset[i] = i + 1;
    }
    int *setarr[] = {firstset, secondset, thirdset};
    result = get_tuple_by_index(setarr, 11564203, 3, (int[]) { 256, 256, 256 });
    printl(result);
}
