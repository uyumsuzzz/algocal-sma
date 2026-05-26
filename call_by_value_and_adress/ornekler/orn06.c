// Soru 1: Kullanıcı tarafından girilen bir metin içinde istenilen kelimenin olup
// olmadığını bulan fonksiyonu yazdırınız.
#include <stdio.h>
#include <string.h>
int bul(char *metin, char *istenilen)
{
    int bulundu = 0;

    for(int j=0; *(metin+j)!='\0'; j++)
    {
    int eslesti = 1; // varsayım        
            
            for (int i=0; *(istenilen + i)!='\0'; i++)
        {       
            if(*(metin + j + i) == '\0' || *(istenilen + i) != *(metin + j + i))
            {
                eslesti = 0;
                break;
            }
        }
            if (eslesti == 1)
            {
                bulundu = 1;
                return 1;
            }
    
    }
return 0;
}

int main ()
{
    int cevap;
    char dizi[20]="seni seviyorum.";
    char *ptr;
    char dizi2[20];
    ptr = dizi2;

    printf("aradiginiz kelimeyi giriniz..");
    scanf("%s", ptr);

    cevap = bul(dizi, ptr);

    if (cevap == 0)
    printf("\nyok");
    else
    printf("\nvar");

return 0;
}