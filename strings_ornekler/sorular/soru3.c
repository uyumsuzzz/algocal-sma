/*
Kullanıcı tarafından girilen bir metin içinde istenilen kelimenin olup olmadığını bulan
programı yazdırınız.
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    char str2[150]="ben, beni sevdigini dusunerek pesinden gelmistim\n";
    printf("%s", str2);
    char str1[150];
    printf("hangi kelime araniyor?.. ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    int uzunluk1 = strlen(str1);
    int uzunluk2 = strlen(str2);
    int eslesti=1;
    int bulundu = 0;

    for (int i=0; i<=uzunluk2-uzunluk1; i++) // 
    {
    eslesti = 1;  // VARSAYIM    
        for (int j=0; j<uzunluk1; j++) // 
        {
            if(str2[i+j]!=str1[j])
            {
                eslesti = 0;
                break;
            } 
        }
    if (eslesti == 1)
        {
        bulundu = 1;
        break;
        }
    }
    
    if (bulundu == 1)
        printf ("evet aynisi var!");
    else
        printf("hayir aynisi yok!");

return 0;
}