#include <stdio.h>

int main() {
    int temp = 10;

    while (temp <= 99) {
        int sayi = temp * 11;
        int top = 0;

        while (sayi > 0) {
            top += sayi % 10; // En sağdaki basamağı (mod 10) alıp toplama ekle
            sayi /= 10;       // En sağdaki basamağı sil (10'a böl)
        }

        // Eğer 11 katının rakamları toplamı 15 ise
        if (top == 15) {
            printf("Sartlari saglayan AB sayisi: %d\n", temp);
            
            // Bizden A+B isteniyor. temp zaten AB sayısı olduğu için:
            int a_arti_b = (temp / 10) + (temp % 10);
            printf("A + B toplami: %d\n", a_arti_b);
            break;
        }
        
        temp++;
    }

    return 0;
}