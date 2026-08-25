#include <stdio.h>
#define MAX_DEN 3
#define HESAP(x) (MAX_DEN - (x)) 
int main ()
{
    const int sifre = 3017;
    int girilen;
    int deneme=0;

    while(deneme < MAX_DEN)
    {
    printf("sifrenizi giriniz..");
    scanf("%d", &girilen);
    deneme++;
        if(sifre == girilen)
        {
            printf("giris yapiliyor..");
            return 0;
        }
        else
        printf("kalan hakkiniz..%d\n", HESAP(deneme));    
    }
return 0;  
}