// call by adress
#include <stdio.h>
void fnc(int *a, int *b)
{
    *b = 20;
}
int main ()
{
    int x=3, y=5;
    fnc(&x,&y);
    printf("%d", x);
return 0;
}
/*
    a nın adresi x in adresine, b nin adresi y nin adresine eşitlendi
    b nin içeriği 20 ye eşitlendi
*/