// aynılarını yazdırma
#include <stdio.h>
int main ()
{
    int dizi[]={2, 3, 2, 3, 7, 300, 2, 200, 5, 6, 6, 100};
    int kontrol, index=0, boyut= sizeof(dizi)/sizeof(dizi[0]);
    int write=1;
        
     for(int j=0; j<boyut; j++)  // önce küçükten büyüğe sıralanır
     {
        for(int i=1; i<boyut; i++)
            {
                if(dizi[i]<dizi[i-1])
                {
                dizi[i-1]=dizi[i-1]^dizi[i];    // XOR fantezisi
                dizi[i]=dizi[i-1]^dizi[i];
                dizi[i-1]=dizi[i-1]^dizi[i];
                }
            }
     }     

        for(int n=1; n<boyut; n++) // eşsizse yazdırılır
        {
            if(dizi[n]!=dizi[n-1])
            {
                dizi[write]=dizi[n];
                write++;
            }
        }

        boyut = write;

        for (int m=0; m<boyut; m++)
        {
            printf("%d ", dizi[m]);
        }

return 0;
}
