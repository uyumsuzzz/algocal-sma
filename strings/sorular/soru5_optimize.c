// Klavyeden girilen iki stringi strcat kullanmadan birleştiren programı yazınız.
// pointer kullanarak daha optimize kod yazımı
#include <stdio.h>
int main () {
    char str1[100] = "beraber kalsaydik ";
    char str2[100] = "mutlu olur muyduk?";
    
    char *p1 = str1; // p1 oku str1'in ilk harfini (b) işaret ediyor
    char *p2 = str2; // p2 oku str2'nin ilk harfini (m) işaret ediyor

    // 1. ADIM: p1 okunu ilk cümlenin sonuna kadar kaydır.
    // "Gösterdiğin harf \0 olmadığı sürece ok'u bir sağa kaydır"
    while (*p1 != '\0') {
        p1++;
    }

    // 2. ADIM: Kopyalama ve Bitiş (Şov kısmı)
    // "p2'nin gösterdiği harfi p1'in gösterdiği yere kopyala, 
    // sonra ikisinin de okunu bir sağa kaydır. Kopya \0 ise döngüyü bitir."
    while ((*p1++ = *p2++));  

    printf("%s\n", str1);
    //strings_ornekler/bilgiler_ornek/soru5_icin içinde detaylı açıklama mevcut   
    return 0;
}
