#include <stdio.h>
#include <string.h>

int main() {
    char girilen_sifre[50];

    printf("Sisteme giris icin sifreyi yazin: ");
    scanf("%49s", girilen_sifre);

    // Efsanevi strcmp fonksiyonumuz sahnede
    if (strcmp(girilen_sifre, "suna123") == 0) {
        printf("Giris Basarili! Hos geldin.\n");
    } else {
        printf("HATA: Yanlis sifre!\n");
    }

    return 0;
}