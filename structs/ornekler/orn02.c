//işçinin haftalık üccreti, kullanıcı tanımlı tip ile gerçekleştirilir.
#include <stdio.h>
struct isci
{
    char isim [15];
    int haftalik_calisma;
    int haftalik_ucret;
};
typedef struct isci ISCI;

void main ()
{
    // ISCI tipinde isci1 tanımlanır
    ISCI isci1;
    int saat_ucret=10;

    //isci1' bilgileri alınır
    printf("iscinin ismini girin..");
    scanf("%s", &isci1.isim);

    printf("iscinin haftalik calisma saatini girin..");
    scanf("%d", &isci1.haftalik_calisma);

    isci1.haftalik_ucret = isci1.haftalik_calisma * saat_ucret;
    printf("\nisci ismi=%s\niscinin haftalik calisma saati=%d\niscinin haftalik ucreti=%d\n", isci1.isim, isci1.haftalik_calisma, isci1.haftalik_ucret);

}