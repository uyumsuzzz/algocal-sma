//boyutu 10 olan int türünden sayı top
#include <stdio.h>
void fnc(int *dizi, int *toplam)
{
    (*toplam)=0;
        for(int i=0; i<10; i++)
        {
            (*toplam) += *(dizi+i);
        }
}
int main ()
{   
    int dizi[10]={0,1,2,3,4,5,6,7,8,9};
    int sonuc = 0;
    fnc(dizi, &sonuc);
    printf("%d", sonuc);
return 0;
}