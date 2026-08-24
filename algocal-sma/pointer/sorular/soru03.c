//Pointer kullanarak klavyede 0 girilene kadar sayı girilen bir dizideki negatif sayıları
//silen programı yazınız. Not: realloc kullanınız. Dizi operatörü (“[]”) kullanılmayacak.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr = (int*) malloc(1*sizeof(int));
    int n=0;
    int index=0;

    while (1)
    {
        printf("(0 girilince sonlanir)\nsayinizi giriniz..");
        scanf("%d", (ptr+n));
        
        if(*(ptr+n)==0)
        break;
        
        n++;
        ptr = (int*) realloc(ptr,(n+1)*sizeof(int));
        
    }
// acı çekiyorum

    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)>0)
        {
            *(ptr+index)=*(ptr+i);
            index++;
        }
    }

    for(int i=0; i<index; i++)
    {
        printf("%d ", *(ptr+i));
    }

free(ptr);

return 0;
}