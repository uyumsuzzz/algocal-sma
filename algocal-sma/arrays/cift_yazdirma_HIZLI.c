//"tek sayıların hepsini silen"
#include <stdio.h>
int main ()
{
    int dizi[]={2, 3, 2, 3, 7, 300, 2, 200, 5, 6, 6, 100};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    int write=0;
        for(int i=0; i<boyut; i++)
        {   
            if((dizi[i]&1)==0) // çift sayıları bul
            {
                dizi[write]=dizi[i];
                write++;
            }
        }
        boyut = write;  // yeni boyut artık
        for(int m=0; m<boyut; m++)
        {
            printf("%d ", dizi[m]);
        }
return 0;
}
