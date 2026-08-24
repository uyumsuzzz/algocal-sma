/*
kaynak dosyası algo2.c ile aynı konumda olan dosya.txt dosyasında kaç adet a harfinin olduğunu bulan yazınız
*/
#include <stdio.h>
int main ()
{
    FILE *dosya = fopen("dosya.txt", "r");
    int flag = 0;

    if(dosya == NULL)
    {
        printf("dosya acilamadi..");
        return 1;
    }

    int ch = fgetc(dosya);   // !! İNT İLE AÇ CHAR DEĞİL (karakter okuma)

    while(ch != EOF)
    {
        if(ch == 'a')
        flag++;

        ch = fgetc(dosya);
    }
    
    if(feof(dosya))
    {
        printf("%d tane 'a' var..", flag);
    }
    else
    printf("ERROR");

    fclose(dosya);

return 0;
}