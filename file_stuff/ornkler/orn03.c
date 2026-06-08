/*
 Bir yapı dizisinin tüm üyelerini fwrite() kullanarak bir dosyaya yazmak için C programı yazınız. 
 Diziyi dosyadan okuyun ve ekranda görüntüleyin.
*/
#include <stdio.h>

// Struct tanımımız
typedef struct {
    char isim[50];
    int not_degeri;
} Ogrenci;

int main() {
    int n;
    
    printf("Kac adet ogrenci girilecek?: ");
    scanf("%d", &n);
    getchar(); // Buffer temizliği

    Ogrenci sinif[n]; // Verileri alacağımız orijinal dizi

    // 1. DİZİYİ KULLANICIDAN DOLDURMA
    for (int i = 0; i < n; i++) {
        printf("%d. ogrencinin ismi: ", i + 1);
        scanf("%s", sinif[i].isim);
        
        printf("%d. ogrencinin notu: ", i + 1);
        scanf("%d", &sinif[i].not_degeri);
    }

    // ==========================================
    // 2. FWRITE İLE DİZİYİ DOSYAYA YAZMA KISMI
    // ==========================================
    FILE *dosyaYaz;
    
    // DİKKAT: "w" değil, "wb" (Write Binary) kullanmak ZORUNDASIN
    dosyaYaz = fopen("veriler.bin", "wb"); 
    if (dosyaYaz == NULL) {
        printf("Dosya olusturulamadi!\n");
        return 1;
    }

    // İŞTE O BÜYÜLÜ SATIR: For döngüsü yok! 
    // sinif dizisini (n tane Ogrenci boyutunda) tek seferde dosyaya basıyoruz.
    fwrite(sinif, sizeof(Ogrenci), n, dosyaYaz);
    fclose(dosyaYaz);

    printf("\nVeriler veriler.bin dosyasina binary olarak yazildi.\n");
    printf("---------------------------------------------------\n");

    // ==========================================
    // 3. FREAD İLE DOSYADAN OKUYUP EKRANA BASMA
    // ==========================================
    FILE *dosyaOku;
    Ogrenci okunan_sinif[n]; // Dosyadan gelen verileri koyacağımız yepyeni, boş bir dizi

    // DİKKAT: "r" değil, "rb" (Read Binary) kullanmak ZORUNDASIN
    dosyaOku = fopen("veriler.bin", "rb");
    if (dosyaOku == NULL) {
        printf("Dosya okunamadi!\n");
        return 1;
    }

    // Yine döngüsüz, tek satırda bütün dosyayı RAM'deki yeni dizimize çekiyoruz
    fread(okunan_sinif, sizeof(Ogrenci), n, dosyaOku);
    fclose(dosyaOku);

    // Ekrana basmak için mecburen döngü kullanıyoruz (çünkü printf tek tek basar)
    printf("DOSYADAN OKUNAN VERILER:\n");
    for (int j = 0; j < n; j++) {
        printf("Isim: %s - Not: %d\n", okunan_sinif[j].isim, okunan_sinif[j].not_degeri);
    }

    return 0;
}