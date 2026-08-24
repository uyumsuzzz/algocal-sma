//"tek sayıların hepsini silen program" 
#include <stdio.h>
int main ()
{
    int dizi[]={2, 3, 2, 3, 7, 300, 2, 200, 5, 6, 6, 100};
    int boyut = sizeof(dizi)/sizeof(dizi[0]); // boyutu, dizinin sahip olduğu byte ve bir elemanın byte'ı bölümü olarak bulrz
        // iç içe iki döngü yavaş
        for(int i=0; i<boyut; i++)
        {   
            if(dizi[i]&1) // açıklama.1
            {
                for(int j=i; j<boyut-1; j++)
                {
                    dizi[j]=dizi[j+1];
                }
            boyut--;
            i--;  // ardışık tek sayılar gelirse diye geri gidilmeli
            }
        }
        for(int m=0; m<boyut; m++)
        {
            printf("%d ", dizi[m]);
        }
return 0;
/*
dizideki tüm elemanların yeri her tek bulunduğunda yeniden 
taşındığından bi tık yavaş
Açıklama.1;
    her tek sayının en sağdaki biti 1 dir. 01011 & 00001 -> 0 ve 0 = 0, 1 ve 0 = 0 ...  1 ve 1 = 1 
    sonuç -> 00001 (1 sayısı ve girilen sayı doğru çıktı! demekki tek sayıdır.)
    if doğru döndüğünde j. elemanın yerine bir sağındaki eleman yerine getirilir böylelikle tek eleman silinir, her şey sola kayar



*/




}
