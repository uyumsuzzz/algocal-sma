#include <stdio.h>
int main()
{
    int b = 7;
    int a = 6;
    int const *p1 = &a;  // değer kitli
    int *const p2 = &a;  // adres kitli
    const int *const p3 = &b;  //hem adres hem değer kitli 


return 0;
}