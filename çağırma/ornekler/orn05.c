// fonk ile faktöriyel bulma
#include <stdio.h>
int fnc(int n)
{
    if(n==1)
    return 1;
    else
    return n*fnc(n-1);
}
int main ()
{
    int n=5;
    int sonuc = fnc(n);
    printf("%d", sonuc);
return 0;
}