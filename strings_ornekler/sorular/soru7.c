//  strlen kullanmadan uzunluk
#include <stdio.h>
#include <string.h>  
int my_strlen(char *dizi)
{   
    int uzunluk=0;
    for(int i=0; dizi[i] != '\0'; i++)
    {
        if (dizi[i] == '\n')  // fgets kullanıldığında \n tuşuda sayılır onu atlayıp saymamak istiyoruz.
        {
            continue;
        }
        uzunluk++;
    }

return uzunluk;
}
int main ()
{
    char dizz[25];
    printf("dizinizi giriniz..");
    fgets(dizz, sizeof(dizz), stdin);
    int uzunluk;
    uzunluk = my_strlen(dizz);

    printf("%d", uzunluk);

return 0;
}