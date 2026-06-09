#include <stdio.h>

typedef struct {
    char isim[50];
    int not_degeri;
} Ogrenci;

int main() {
    FILE *fp;
    Ogrenci hedef_ogrenci;
    
    // 1. DİKKAT: "rb+" modu! (Read + Update Binary)
    // Hem okuyacağız, hem yazacağız, hem de binary dosya.
    fp = fopen("veritabani.bin", "rb+"); 
    if (fp == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Diyelim ki hedefimiz 5. sıradaki öğrenci (İndeks olarak 4)
    int hedef_indeks = 4;

    // ==========================================
    // ADIM 1: HEDEFİN ÜSTÜNE IŞINLAN
    // ==========================================
    fseek(fp, hedef_indeks * sizeof(Ogrenci), SEEK_SET);

    // ==========================================
    // ADIM 2: MEVCUT VERİYİ OKU (VE İMLECİN KAYMASINA İZİN VER)
    // ==========================================
    // fread çalıştığı an veriyi RAM'e (hedef_ogrenci) çeker.
    // DİKKAT: İmleç şu an otomatik olarak 6. öğrencinin (indeks 5) üstüne kaydı!
    fread(&hedef_ogrenci, sizeof(Ogrenci), 1, fp);
    
    printf("Eski Durum -> Isim: %s, Not: %d\n", hedef_ogrenci.isim, hedef_ogrenci.not_degeri);

    // ==========================================
    // ADIM 3: VERİYİ RAM'DE GÜNCELLE
    // ==========================================
    // RAM'deki kutunun içindeki notu 100 yapıyoruz.
    hedef_ogrenci.not_degeri = 100;

    // ==========================================
    // ADIM 4: ÖLÜMCÜL HAMLE (İMLECİ GERİ ÇEK)
    // ==========================================
    // İmleç az önce ileri kaymıştı. Şimdi onu DURDUĞU YERDEN (SEEK_CUR) 
    // tam 1 adet Ogrenci boyutu kadar geriye (eksi) çekiyoruz ki hedefi ortalayalım.
    fseek(fp, -1 * sizeof(Ogrenci), SEEK_CUR);

    // ==========================================
    // ADIM 5: GÜNCEL VERİYİ DOSYAYA ÇAK (OVERWRITE)
    // ==========================================
    // Artık imleç tam 5. öğrencinin üstünde. Gönül rahatlığıyla ezebiliriz.
    fwrite(&hedef_ogrenci, sizeof(Ogrenci), 1, fp);

    printf("Yeni veri basariyla dosyaya islendi.\n");

    fclose(fp);
    return 0;
}