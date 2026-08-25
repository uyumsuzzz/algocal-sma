#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    // 1. Deger degisemez, adres degisebilir
    const int *p1 = &a;

    printf("p1 (&a): %d\n", *p1);

    p1 = &b;     // DOGRU

    printf("p1 (&b): %d\n", *p1);
    //* p1 = 50; // HATA
    //printf("p1 (50): %d\n", *p1);

    // 2. Adres degisemez, deger degisebilir
    int *const p2 = &a;

    *p2 = 100;   // DOGRU

    // p2 = &b;  // HATA

    printf("a: %d\n", a);


    // 3. Ne adres ne deger degisebilir
    const int *const p3 = &a;

    printf("p3: %d\n", *p3);

    // *p3 = 200; // HATA
    // p3 = &b;   // HATA


    return 0;
}