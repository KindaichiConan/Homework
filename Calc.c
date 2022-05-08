#include <stdio.h>
#include "..\Headers\Calc.h"

int tong_mang(int a[], int size)
{
    int sum = 0, i;
    for(i=0;i<size;i++)
    {
        sum += a[i];
    }
    return sum;
}

int phan_tu_max(int a[], int size)
{
    int max = a[0], i;
    for(i=1;i<size;i++)
    {
        if(a[i] > max) max = a[i];
    }
    return max;
}

int phan_tu_min(int a[], int size)
{
    int min = a[0], i;
    for(i=0; i<size; i++)
    {
        if(a[i]<min) min = a[i];
    }
    return min;
}

void vi_tri(int a[], int size, int value)
{
    int vi_tri[size], i, n=0;
    for(i=0;i<size;i++)
    {
        if(a[i] == value) vi_tri[n++] = i;
    }
    if(n)
	{
		printf("\nPhan tu co gia tri %d o cac vi tri sau: ", value);
        for(i=0;i<n;i++) printf("%d ", vi_tri[i]);
	} 
    else printf("\nMang khong co phan tu co gia tri %d", value);
}