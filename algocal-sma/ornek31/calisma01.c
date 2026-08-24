#include <stdio.h>
#define SAYI 6
int labirent(int dizi[][], int sonuc)
{
    int x=0, y=0; 
    int a=0, b=0;
    int flag[SAYI][SAYI]; // flag tanımlandı
    int suan [SAYI][SAYI];
    // döngüye girilir 
    /*
    sağ sol üst alt 0 mı diye kontrol edilmeli, eğer 0 ise o noktaya geçmeli ve önceki noktasını kaydetmeli
    */    
    
        for(int i=0; i<SAYI; i++)  // x ekseni
        {
            for(int j=0; j<SAYI; j++) // y ekseni
            {
                if(i != (SAYI - 1))
                {
                    if(dizi[i+1][j] == 0) //sağ
                {
                    a=i, b=j;  // eski konumum 
                    x=(i+1), y=(j); // şuanki konumunun koordinatları 
                }
                }

                else if(i != 0)
                {
                    if(dizi[i-1][j] == 0) //sol
                {
                    a=i, b=j;  // eski konumum
                    x=(i-1), y=(j); // şuanki konumunun koordinatları 
                }
                }

                else if(dizi[i][j+1] == 0) //yukarı
                {
                    a=i, b=j;  // eski konumum
                    x=(i), y=(j+1); // şuanki konumunun koordinatları 
                }
                else if(dizi[i][j-1] == 0) //aşağı
                {
                    a=i, b=j;  // eski konumum
                    x=(i), y=(j-1); // şuanki konumunun koordinatları 
                }

            }
        }



return sonuc; // dizi sona ulaştığında ifle kontrole al
}

int main()
{
    int dizi[SAYI][SAYI] = {{0,0,1,1,1,1},
                            {1,0,1,1,1,1},
                            {1,0,1,1,1,1},
                            {1,0,0,1,1,1},
                            {1,1,0,1,1,1},
                            {1,1,0,0,0,0},
                    };
    int sonuc = 0; // sona ulaştığında 1'e dönecek
    
    sonuc = labirent(*dizi, sonuc);
    printf("%d\n", sonuc);

return 0;
}