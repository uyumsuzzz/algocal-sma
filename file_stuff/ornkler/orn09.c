/*
Soru:
Kaynak dosyanızla aynı dizinde bulunan "gizli_veri.txt" adlı dosyanın içinde 
rastgele metinler, harfler ve sayılar bulunmaktadır. 

Sizden istenen C programı:
1. Bu dosyayı okumak için açacak,
2. Dosyanın içindeki karakterleri tek tek tarayarak toplam kaç adet RAKAM (0-9) olduğunu bulacak,
3. Bulduğu bu toplam sayıyı ekrana DEĞİL, yine aynı dizinde kendi oluşturacağı "rapor.txt" 
   adlı yeni bir dosyaya "Sistemde toplam [sayi] adet rakam tespit edildi." formatında yazacaktır.
*/
#include <stdio.h>
int main ()
{
    FILE *ptr1 = fopen("gizli_veri.txt", "r");
    int ch = fgetc(ptr1);
    int flag = 0;

    while (ch != EOF)
    {
        if(ch >= '0' && ch <= '9')  // rakamlar ise
        flag++;
        ch = fgetc(ptr1);
    }
    fclose(ptr1);

    FILE *ptr2 = fopen ("rapor.txt", "w");
    fprintf(ptr2,"bulunan rakam sayisi = %d", flag);
    fclose(ptr2);

return 0;
}
