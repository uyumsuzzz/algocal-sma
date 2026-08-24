// dizi kullanarak fonksiyon oluşturma
#include <stdio.h>
int *fnc(int dizi[])
{
    dizi = dizi + 2;  // 0 1 2. index te şuan
return dizi;
}
int main ()
{
    int dizi[5] = {4,7,10,3,2};
    int *p;
    p = fnc(dizi);
    printf("%d\n", *p);
return 0;
}