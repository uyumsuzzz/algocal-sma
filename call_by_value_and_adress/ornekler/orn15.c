/*
Özyinelemeli fonksiyon kullanarak ekrana Z harfi yazdıran 
programı yazınız
*/
#include <stdio.h>
void sekil(int n, int orj)
{
    if (n == 0)   //eğer en alt satırdaysa program bit
    {
        return;
    }
    if((n==orj)||(n==1))  // en tepe veya en aşağıda ise
    {
        for (int i = 0; i < orj; i++) 
        {
            printf("*");
        }
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");

sekil(n-1, orj);
}
int main ()
{
    int boyut = 9;
    sekil(boyut, boyut);  // başlangıçta orjinal ve kullanılan aynı
return 0;
}