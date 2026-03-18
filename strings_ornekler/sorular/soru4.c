/*
Kullanıcı tarafından girilen bir metin içinde istenilen bir karakterin frekansını bulduran
programı yazdırınız.
*/
#include <string.h>
#include <stdio.h>
int main ()
{
    char str[100]="istanbulu cok ozledigim icin gogusumde aci hissediyorum";
    int uzunluk = strlen(str);
    char aranan;
    int frekans = 0;  // kaç kere o harf geçti sayaç
    printf("%s\n", str);
    printf("hangi karakteri ariyoruz?");
    scanf("%c", &aranan);

        for(int i=0; i<uzunluk; i++)
        {
            if(str[i]==aranan)
            {
                frekans++;
            }
        }    

printf("%c -> %d kere gecti..", aranan, frekans);


return 0;
}
