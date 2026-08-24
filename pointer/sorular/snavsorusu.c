// dma kullanarak girilen şehir isimlerini ters yazdır DİZİ YASAK 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    while (1)
    {
    char *sehir = NULL; // şuanda hiç bir yeri göstermiyor
    int kapasite = 0;
    int uzunluk = 0;
    char c;  // karakter karakter alıp kontrol edecceğiz
    
    printf("\nsehir ismini giriniz: ");
        while ((c = getchar()) != '\n')  // entera basılmadığı sürecedevam
        {
            if(uzunluk >= kapasite)
            {
            // yer kalmadıysa kapasiteyi iki katına çıkar
            kapasite = (kapasite == 0) ? 2: kapasite*2;
            char *gecici = realloc(sehir, kapasite*sizeof(char));  // sehir'in alanı yeniden kapasite kadar yer açılır
            
                if(gecici == NULL)
                {
                    printf("bellek tahsisi hatasi!");
                    return 1;
                }
            sehir = gecici;
            }
        sehir [uzunluk++] = c;
        }
    // kullanıcı bir şey girdiyse
    if (uzunluk > 0)
    {
        sehir = realloc (sehir, (uzunluk+1)*sizeof(char));
        sehir[uzunluk] = '\0';  // sonuna \0 koyarak stringi tamamladık

        strrev(sehir);
        printf("tersten hali:%s\n", sehir);
    }
    
    if (sehir != NULL)
    {
        free(sehir);
    }
    
    }  

return 0;
}