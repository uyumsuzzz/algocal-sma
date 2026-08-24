/*
Kullanıcıdan öğrencilerin isim ve not bilgileri alınacaktır. Giriş işlemi kullanıcı 'q' yazana kadar
devam edecektir. Girilen bilgiler ogrenci.txt dosyasına kaydedilecektir.
Daha sonra dosya EOF kullanılarak okunup:
+ tüm öğrenciler
+ sınıf ortalaması
ekrana yazdırılacaktır.
*/
#include <stdio.h>
#include <string.h> // strcmp (string karşılaştırması) için şart

// Sadece temiz şablonumuzu bırakıyoruz
typedef struct {
    char isim[20];
    int not;
} ogr_t; 

int main() 
{
    // --- 1. AŞAMA: KULLANICIDAN AL VE DOSYAYA YAZ ---
    FILE *ptr_yaz = fopen("ogrenci.txt", "w");
    if (ptr_yaz == NULL) return 1;

    ogr_t kurye; // Tek bir struct, bütün işi bu taşıyacak.
    
    printf("--- OGRENCI GIRIS SISTEMI ---\n");
    printf("(Cikmak ve kaydetmek icin isim yerine 'q' yaziniz)\n\n");

    // Sonsuz döngü: Kullanıcı 'q' diyene kadar dönecek
    while(1) 
    {
        printf("Ogrenci ismi: ");
        scanf("%s", kurye.isim);

        // Kullanıcı q yazdıysa döngüyü anında kırıp dosyayı kapatmaya gidiyoruz
        if (strcmp(kurye.isim, "q") == 0) 
        {
            break; 
        }

        printf("Ogrenci notu: ");
        scanf("%d", &kurye.not); // int için & koymayı unutmadık

        // Veriyi struct'tan alıp anında dosyaya basıyoruz
        fprintf(ptr_yaz, "%s %d\n", kurye.isim, kurye.not);
    }
    
    fclose(ptr_yaz);
    printf("--- VERILER DOSYAYA KAYDEDILDI ---\n\n");


    // --- 2. AŞAMA: DOSYADAN OKU, YAZDIR VE ORTALAMA HESAPLA ---
    FILE *ptr_oku = fopen("ogrenci.txt", "r");
    if (ptr_oku == NULL) return 1;

    int toplam_not = 0;
    int ogrenci_sayisi = 0;

    printf("--- DOSYADAN OKUNAN OGRENCILER ---\n");

    // fscanf her turda başarıyla "1 isim ve 1 int" okuduğu sürece döner
    // Dosya bittiğinde (EOF) otomatik durur.
    while (fscanf(ptr_oku, "%s %d", kurye.isim, &kurye.not) != EOF) 
    {
        // Okunan veriyi ekrana bas
        printf("Isim: %s | Not: %d\n", kurye.isim, kurye.not);
        
        // Ortalama hesabı için toplamı ve sayacı arttır
        toplam_not += kurye.not;
        ogrenci_sayisi++;
    }
    
    fclose(ptr_oku);

    // Ortalama yazdırma (Sıfıra bölme hatasından kaçınmak için ufak bir kontrol)
    if (ogrenci_sayisi > 0) 
    {
        // float cast işlemi (bölüm küsuratlı çıksın diye)
        float ortalama = (float)toplam_not / ogrenci_sayisi;
        printf("\n=> Sinif Ortalamasi: %.2f\n", ortalama);
    } 
    else 
    {
        printf("\nSisteme hic ogrenci girilmedi.\n");
    }

    return 0;
}