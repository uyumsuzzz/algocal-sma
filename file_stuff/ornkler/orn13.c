#include <stdio.h>
#include <string.h>

typedef struct {
    char isim[50];
    int not;
} ogrenci_t;

int main() 
{
    // --- 1. AŞAMA: TEK TEK BINARY YAZMA ("wb") ---
    FILE *ptr_yaz = fopen("ogrenciler.bin", "wb");
    if (ptr_yaz == NULL) {
        printf("Dosya olusturulamadi!\n");
        return 1;
    }

    ogrenci_t kurye; // Bütün taşıma işini yapacak tek nesnemiz
    int girilen_sayi = 0;

    printf("--- SISTEME KAYIT ---\n");
    printf("(Cikmak icin isme 'q' giriniz)\n\n");

    while(1) 
    {
        printf("Isim: ");
        scanf(" %[^\n]s", kurye.isim); // Boşluklu isim okumak için güvenli scanf

        // q girildiyse döngüyü kır, dosyayı kapatmaya git
        if (strcmp(kurye.isim, "q") == 0) {
            break;
        }

        printf("Not: ");
        scanf("%d", &kurye.not);

        // İŞTE O KRİTİK SATIR:
        // kurye bir dizi olmadığı için adresini '&' ile veriyoruz.
        // Her turda sadece 1 tane kurye olduğu için sayı olarak '1' yazıyoruz.
        fwrite(&kurye, sizeof(ogrenci_t), 1, ptr_yaz);
        
        girilen_sayi++;
    }

    fclose(ptr_yaz);
    printf("\n=> %d adet ogrenci diske binary (ikili) olarak kazindi!\n\n", girilen_sayi);


    // --- 2. AŞAMA: TEK TEK BINARY OKUMA ("rb") ---
    // Şimdi diskteki o okunamaz makine kodlarını geri çağırıyoruz
    
    FILE *ptr_oku = fopen("ogrenciler.bin", "rb");
    if (ptr_oku == NULL) {
        printf("Dosya okunamadi!\n");
        return 1;
    }

    printf("--- DISKTEN OKUNAN VERILER ---\n");
    
    // fread fonksiyonu, başarıyla okuduğu "paket sayısını" döndürür.
    // Biz her turda 1 paket okumasını istiyoruz. 
    // Dosya bittiğinde 1 okuyamayacağı için döngü otomatik kırılır.
    while (fread(&kurye, sizeof(ogrenci_t), 1, ptr_oku) == 1) 
    {
        printf("Okunan -> Isim: %s | Not: %d\n", kurye.isim, kurye.not);
    }

    fclose(ptr_oku);

    return 0;
}