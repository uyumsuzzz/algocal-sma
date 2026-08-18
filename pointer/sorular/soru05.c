#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char *ptr = (char*) malloc(1*sizeof(char));
    char c;
    int boyut = 0;

    printf("\nstringinizi giriniz..\n");
    while(1)
    {
        scanf("%c", (ptr+boyut));   // %c ile kontrol et !!
        if(*(ptr+boyut)=='\n')  // \n mi kontrol
        {
            break;
            return 1;
        }

        boyut++; // kullandık boyut bir artmalı
        ptr = (char*) realloc(ptr, (boyut+1)*sizeof(char)); // sonraki harf veya \0 için alan aç
    }
        *(ptr + boyut)='\0';  // pointerın sonuna \0 ekle

        if(boyut > 0)  // kullanıcı girdi girmişse
        {
            char *bas=ptr;
            char *son=(ptr+boyut) - 1;
            char temp;

                while(bas<son)
                {
                    temp = *bas;
                    *bas = *son;
                    *son = temp;

                    bas++;
                    son--;
                }
        printf("%s\n", ptr);
        
        free(ptr);
        }

return 0;
}