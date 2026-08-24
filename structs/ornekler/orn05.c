//Bir firmanın çalışan bilgilerinin yer aldığı, kullanıcı tanımlı bir ada sahip, çalışanın isim(sadece adı
//yeterli), maaş ve doğum tarihinin yer aldığı (doğum tarihi bilgileri gün, ay, yıl şeklinde ayrı bir struct
//yapısında tutulacak) bir struct yapısı oluşturunuz ve 3 adet çalışanın bilgilerini dışarıdan alarak veya
//programın içerisine kaydettikten sonra ekrana yazdırınız. -- kaydetmeden ki hali
#include <stdio.h>
typedef struct DOGUM_tag{
    int gun;
    int ay;
    int yil;
}dogum_t;
typedef struct VERILER_tag{
    char isim[40];
    int maas;
    dogum_t  dogum;      
}veriler_t;
int main ()
{
    veriler_t isciler[3];

    for(int i=0; i<3; i++)
    {
        printf("%d. iscinin ismini giriniz..", i+1);
        scanf("%s", &isciler[i].isim);
        printf("%d. iscinin maasini giriniz..", i+1);
        scanf("%d", &isciler[i].maas);
        printf("%d. iscinin dogum tarihini giriniz.. (g/a/y)", i+1);
        scanf("%d%d%d",&isciler[i].dogum.gun, &isciler[i].dogum.ay, &isciler[i].dogum.yil);
    }

    for(int i = 0; i < 3; i++) {
        printf("%d. %s | Maas: %d | Dogum: %d/%d/%d\n", 
                i + 1, 
                isciler[i].isim, 
                isciler[i].maas, 
                isciler[i].dogum.gun, 
                isciler[i].dogum.ay, 
                isciler[i].dogum.yil);
    }

return 0;
}