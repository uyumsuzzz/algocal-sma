// dizi ile fib bulma
#include <stdio.h>
#define KAPASITE 20
int main()
{
    int sayi, bulundu=0;
    int fib[KAPASITE];
    fib[0]=0;
    fib[1]=1;
    
    for (int i=2; i<KAPASITE; i++)
    {
        fib[i] = fib[i-1] + fib[i-2]; 
    }        
    printf("bir sayi giriniz..");
    scanf ("%d", &sayi);      
            
            for (int i=0; i<KAPASITE; i++)
            {
                if(fib[i] == sayi)
                {
                    bulundu = 1;
                    break;
                }
            }
            if(bulundu == 1)
        printf("%d sayisi bir fibonacci sayisidir..\n", sayi);
            else
        printf("%d sayisi fibonacci dizisinde yok..\n", sayi);

    
return 0;
}