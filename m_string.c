#include <stdio.h>
#include "..\Headers\m_string.h"
int so_sanh_2_mang(int a[], int size_a, int b[], int size_b)
{
    int i, count = 0;
    if(size_a != size_b) return 0;
    else
    {
        for(i=0; i<size_a;i++)
        {
            if(a[i] == b[i]) count++;
        }
        if(count==size_a) return 1;
        else return 0;
    }
}

int *chen_vi_tri(int mang1[], int size_1, int mang2[], int size_2, int vi_tri, int *new_array_size)
{
    int static new_array[20];
	int new_size, i;
	new_size = size_1 + size_2;	
	*new_array_size = new_size;
	for(i=0;i<new_size;i++)
	{
		if(i<=vi_tri) new_array[i] = mang1[i];
		else
		{
			if(i<=vi_tri+size_2) new_array[i] = mang2[i-vi_tri-1];
			else new_array[i] = mang1[i-size_2];
		}	
	}
	return new_array;
}