//Pointer kullanarak bir dizide en büyük iki eleman arasındaki farkı bulan programı
//yazınız. Not: malloc kullanınız. Dizi operatörü (“[]”) kullanılmayacak.
#include <stdio.h>
#include <stdlib.h> // malloc ve free için 

int main() {
    int *ptr, n;
    
    printf("Kac sayi girilecek?? ");
    scanf("%d", &n);

    // Kural 1: En az 2 sayı girmeli ki kıyaslama yapabilelim
    if (n < 2) {
        printf("Hata: En az 2 sayi girmelisiniz.\n");
        return 1; 
    }

    ptr = (int*) malloc(n * sizeof(int));
    
    printf("Sayilari giriniz..\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int m1, m2;

    // İlk iki sayıyı al kendi aralarında tahta oturt
    if (*ptr > *(ptr + 1)) {
        m1 = *ptr;       // 1. sayı daha büyükse m1 o olur
        m2 = *(ptr + 1); // 2. sayı m2 olur
    } else {
        m1 = *(ptr + 1); // 2. sayı daha büyükse m1 o olur
        m2 = *ptr;       // 1. sayı m2 olur
    }

    // İlk iki sayıyı zaten işlediğimiz için, döngüye 3. sayıdan (indis 2) başlıyoruz!
    for(int i = 2; i < n; i++) {
        
        if(*(ptr + i) > m1) {
            m2 = m1;           // Eski en büyük, ikinci sıraya kayar
            m1 = *(ptr + i);   // Yeni sayı zirveye yerleşir
        }
        else if (*(ptr + i) > m2) {
            m2 = *(ptr + i);   // Sayı m1'den küçük ama m2'den büyükse m2'yi günceller
        }
    }

    // İşimiz bitti, RAM'i işletim sistemine iade ediyoruz.
    free(ptr); 

    printf("En buyuk iki eleman: %d ve %d\n", m1, m2);
    printf("Fark: %d - %d = %d\n", m1, m2, (m1 - m2));

    return 0;
}