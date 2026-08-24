#include <stdio.h>
int main ()
{
    int n;
    printf ("dizi kac elemanli?..");
    scanf("%d", &n);
    int dizi[n];
    for (int i=0; i<n; i++)
    {
    printf("dizinizin elemani giriniz..");
    scanf ("%d", &dizi[i]);
    }
    int en_buyuk=dizi[0], konum=0;
    for(int j=1; j<n; j++)
    {
        if (dizi[j] > en_buyuk)
        {
            en_buyuk = dizi[j];
            konum = j+1;
        }
    }
    printf ("en buyuk sayi = %d, konumu = %d. dir..",en_buyuk, konum);
return 0;
}