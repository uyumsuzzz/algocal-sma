#include <stdio.h>
int topla(int a[], int sayi)
{
    int i, t=0;
        for(i=0; i<sayi; i++)
        {
            t= *(a+i);
            return t;
        }
}
int main ()
{
    int dizi[5]={-3, 9, 7, 4, 5};
    int t = topla(dizi,sizeof(dizi)/sizeof(int));
    printf("%d", t);
return 0;
}