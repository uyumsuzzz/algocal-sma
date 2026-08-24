//
#include <stdio.h>
int main ()
{           //  * *  *  * *    * * *   * * * *   şeklinde ayır topla
    int dizi[]={5,12,15,6,12,  3,2,4,  4,3,0,7};   // 50 9 14
    int boyut= sizeof(dizi)/sizeof(dizi[0]);
    int a=0, top=0;

        for(int i=0; i<boyut; )
        {
            //printf("%d\n", i);
            top=0;
            a=dizi[i];
                
            if (a==0) // sonsuz döngüye girmesin diye kontrol
            {
                i++;
                continue;
            }    
                
                for(int j=0; j<a; j++)
                {
                    if(i >= boyut) // taşma olmasın diye kontrol
                    break;

                    top += dizi[i];
                    i++;
                }
            printf("*%d  ", top);
        }
    
return 0;
}

// odtülü oğuz yarattı soruyu
