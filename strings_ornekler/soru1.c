// girilen stringteki kelimeleri tersten sırayla yazdırma
#include <string.h>
#include <stdio.h>
int main ()
{
    char str[150];
        printf("cumleni gir: ");
        fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int uzunluk = strlen(str);
        printf("ters hali: ");
            for (int i=uzunluk-1; i>=0; i--) // dış döngü tüm indexi sondan başlayıp sırayla tarar
            {
                if(str[i]==' '||i==0) // boşluğa denk geldiyse veya stringin başına geldi ise  
                {
                    int baslangic = (i==0) ? i : i+1;
                        for (int j = baslangic; str[j]!=' ' && str[j]!='\0'; j++)
                        {
                            printf("%c", str[j]);
                        }
                }
                printf(" ");

            }

printf("\n");
return 0;
}