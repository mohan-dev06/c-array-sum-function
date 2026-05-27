#include<stdio.h>
int sumArray(int a[], int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}   
void main()
{
    int a[5]={8,22,27,32,42};
    printf("%d", sumArray(a, 5)); 
}           