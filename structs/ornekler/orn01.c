// iki kesirli sayı çarpımı gerçekleştirilir
#include <stdio.h>
    // kesirli sayı için yapı oluşturulur
    struct kesir_sayi
    {
        int pay;
        int payda;
    };

    void main()
    {
        // kesir_sayi tipinde değişkenler atanır
        struct kesir_sayi ks1, ks2, sonuc;

        // ks1 ve ks2 değişkenlerinin değeri alınır.
        printf("\n1. kesirli sayinin pay ve paydasini girin..");
        scanf("%d%d", &ks1.pay, &ks1.payda);
        printf("\n2. kesirli sayinin pay ve paydasini girin..");
        scanf("%d%d", &ks2.pay, &ks2.payda);

        // kesirli sayilar çarpılır.
        sonuc.pay = ks1.pay * ks2.pay;
        sonuc.payda = ks1.payda * ks2.payda;

        // sonuç yansıt
        printf("%d/%d", sonuc.pay, sonuc.payda);
    }