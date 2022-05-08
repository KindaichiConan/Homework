#include <stdio.h>
#include "..\Headers\Calc.h"
#include "..\Headers\Convert.h"
#include "..\Headers\m_string.h"

int main()
{
    int a[] = {1,2,3,7,8,9};
    int b[] = {4,5,6};
    int c[] = {1,2,3,7,8,9};
    
    printf("\nTong cac phan tu mang a la: %d", tong_mang(a,6));
    printf("\nPhan tu lon nhat trong mang a la: %d", phan_tu_max(a,6));
    printf("\nPhan tu nho nhat trong mang a la: %d", phan_tu_min(a,6));
    vi_tri(a,8,6);

    dec_to_bin(20);
    dec_to_hex(250);

    int i = so_sanh_2_mang(a,5,c,5);
    if(i) printf("\nHai mang a va c co gia tri bang nhau");
	else printf("\nHai mang a va c khong bang nhau");

    i = so_sanh_2_mang(a,5,b,3);
    if(i) printf("\nHai mang a va b co gia tri bang nhau");
	else printf("\nHai mang a va b khong bang nhau");

    return 0;
}

