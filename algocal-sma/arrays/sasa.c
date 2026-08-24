//
/*
*2.soru
!ekrandan sürekli olarak sayı girilmektedir .
!ekrandan girilen son 3 sayı arasında
!en büyük sayi ekrana yazdırılıyor
!girilen sayi 0 ise program sonlanacaktır 
!örnek: 5 9 3 6 1 5 7 1 8 6 8 9 4 3 0
!output: 9 9 6 6 7 7 8 8 9 9 9
*/
#include <stdio.h>
int main ()
{
    int depo_dizi[10];
    int dizi[3];
    int sayi=0, sayac=0;

       for(int i=0; i<3; i++)
        {
            printf("sayi giriniZ..\n");
            scanf("%d", &dizi[i]);
        }

        while (1)
        {
            int max=dizi[0];

            if (dizi[1]>max)
            max = dizi[1];
            if (dizi[2]>max)
            max = dizi[2];

            depo_dizi[sayac]=max;
            sayac++;

            printf("sayi giriniz..");
            scanf("%d", &sayi);
            
            if(sayi==0)
            {
                printf("program bitti, cikiliyor..\n");
                break;
            }

            dizi[0]=dizi[1];
            dizi[1]=dizi[2];
            dizi[2]=sayi;
        }

    printf("\n--- SONUCLAR ---\n");
    for (int i = 0; i < sayac; i++) 
    {
        printf("%d ", depo_dizi[i]);
    }


return 0;
}
