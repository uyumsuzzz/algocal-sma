// call by value
#include <stdio.h>
int fnc (int a)  // a tanımlandı
{
    int x, y ,i; 
    x = 4;
    i = a + 3;
return i;
}
int main ()
{
    int x, y, i;  
    y = 5;
    x = fnc(y);   // artık x = 8
    printf ("%d",x);
return 0;
}
/*
    değişkenlerin isimleri aynı olması aynı oldukları anlamına gelmez farklı adreslere sahipler.
*/