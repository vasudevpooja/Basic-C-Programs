#include<stdio.h>
#define MAX 100
int getMaxElement(int []);
int size;
int main()
{
    int arr[MAX], max, i;
    printf("\n\nEnter the size of the array: ");
    scanf("%d", &size);
    printf("\n\nEnter %d elements\n\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = getMaxElement(arr);
    printf("\n\nLargest element of the array is %d\n\n", max);
    return 0;
}
int getMaxElement(int a[])
{
    static int i = 0, max =- 9999;
    if(i < size)
    {
        if(max < a[i])
        max = a[i];
        i++;
        getMaxElement(a);
    }
    return max;
}
