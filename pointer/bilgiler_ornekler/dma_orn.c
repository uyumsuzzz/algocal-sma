//Malloc ve Calloc Kullanarak girilen sayilarin toplamini bulan kudu yaziniz 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int boyut;
    int *ptr;
    int toplam = 0;

    printf("kac sayi toplanacak?..");
    scanf("%d ", &boyut);
    // yer açılacak
    ptr = (int*) malloc(boyut*sizeof(int));

    if(ptr == NULL)
    {
        printf("yer ayrilamadi!!");
        return 1;
    }
    
    for(int i=0; i<boyut; i++)
    {
        scanf("%d", (ptr+i));   //scanf'a adres verilir !!
        toplam += *(ptr+i);
    }

    printf("sonucunuz = %d ", toplam);

    if(ptr != NULL)
    {
        free(ptr);
    }

return 0;
}