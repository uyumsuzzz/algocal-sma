#include <stdio.h>
#include <string.h> // strcpy kullanmak için bu kütüphane şart!

int main() {
    // İçinde veri olan kaynak kutumuz (Trenimiz)
    char hayaller[20] = "Roma"; 
    
    // İçi şu an tamamen boş olan hedef kutumuz
    char gercekler[20]; 

    // gercekler = hayaller; ---> C DİLİNDE BU YASAKTIR! HATA VERİR!

    // Fotokopi makinesini çalıştırıyoruz: (Nereye, Nereden) strcpy(destination, source);
    strcpy(gercekler, hayaller); 

    // Artık boş kutumuzun içinde de "Roma" yazıyor.
    printf("Gerceklesen plan: %s\n", gercekler);

    return 0;
}