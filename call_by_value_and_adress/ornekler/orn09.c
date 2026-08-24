/*
Kullanıcı tarafından girilen bir metin içinde geçen sesli ve sessiz harfleri pointer 
kullanarak  sayan fonksiyonu yazınız.  
 */
#include <stdio.h>
int sayac(char *metin, int *sayac1, int *sayac2)
{
char sesli[]="aeiouAEIOU";
char sessiz[]="bcdfghjklmnprstvyzBCDFGHJKLMNOPRSTVYZ";
*sayac1 = 0;   // sesliler
*sayac2 = 0;   // sessizler

    for (int i=0; *(metin+i)!='\0'; i++)
    {
        for(int j=0; *(sesli+j)!='\0'; j++)
        {
            if (*(metin+i)==*(sesli+j))
            (*sayac1)++;
        }
         for(int t=0; *(sessiz+t)!='\0'; t++)
        {
            if (*(metin+i)==*(sessiz+t))
            (*sayac2)++;
        }
    }

return 0;
}
int main ()
{
    char metin[50];
    printf("metninizi giriniz..");
    fgets(metin, sizeof(metin), stdin);

    int sessiz_sayi = 0;
    int sesli_sayi = 0;

    sayac (metin, &sesli_sayi, &sessiz_sayi);

    printf("%d, %d\n",sesli_sayi, sessiz_sayi );

return 0;
}