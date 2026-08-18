// küçükten büyüğe sıralama
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr = (int*)malloc(1*sizeof(int));
    int uzunluk=0;
    int temp;

    printf("(0 girilince biter)\nsayilarinizi giriniz..");

    while(1)
    {
        scanf("%d", (ptr+uzunluk));

        if(*(ptr+uzunluk)==0)
        break;
        uzunluk++;

        ptr = (int*) realloc(ptr, (uzunluk+1)*sizeof(int));
    }

    for(int i=0; i<uzunluk-1; i++)   // *(ptr+j+1) kullandığımzda alan dışına çıkmasın diye uzunluk-1 den başlatılır
    {
        for(int j=0; j<uzunluk-i-1; j++)   // -i nedeni biriktirdiğimiz sağdaki elemanları yine karşılaştırmaya gerek yok
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j+1);
                *(ptr+j+1)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    for(int i=0; i<uzunluk; i++)
    {
        printf("%d ", *(ptr+i));
    }

free(ptr);

return 0;
}