#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* get_tuple_by_index(int setarr[][256], int index, int setarrlen, int setlen)
{
    int i, element;
    int* tuple = malloc(setarrlen * sizeof(int));
    for (i = setarrlen - 1; i >= 0; i--)
    {
        element = setarr[i][index % setlen];
        tuple[i] = element;
        index /= setlen;
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
    int firstset[256], secondset[256], thirdset[256], setarr[3][256], i;
    static int *result;
    for (i = 0; i < 256; i++)
    {
        firstset[i] = i + 1;
        secondset[i] = i + 1;
        thirdset[i] = i + 1;
    }
    memcpy(setarr[0], firstset, sizeof(firstset));
    memcpy(setarr[1], secondset, sizeof(secondset));
    memcpy(setarr[2], thirdset, sizeof(thirdset));
    result = get_tuple_by_index(setarr, 11564203, 3, 256);
    printl(result);
}