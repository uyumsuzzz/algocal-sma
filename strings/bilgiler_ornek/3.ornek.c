// strlen komutu dizinin tüm kutucuklarını sayar '\0' dahildir. dadak -> k karakteri
// için ( strlen(str)-1 ). index kullanılmalı
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100]="dadak";
    int uzunluk = strlen(str);
    printf("%d\n", uzunluk);            // 5
    printf("%c\n", str[uzunluk-1]);     // 'k'
}