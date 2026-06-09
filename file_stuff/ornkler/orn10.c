// dosyayı yazdırma direkt
#include <stdio.h>
int main ()
{
    char dizi1[200];
    FILE *ptr1 = fopen("gizli_veri.txt", "r");
    
    while (fgets(dizi1, sizeof(dizi1)/sizeof(char), ptr1)!=NULL)
    {
        printf("%s", dizi1);
    }
    fclose(ptr1);

return 0;
}