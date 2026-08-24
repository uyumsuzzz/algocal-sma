// bu çok mistik bir sorudur oğuz hoca bunu dersinde örnek vermiştir! sorunun mantığı başkla problemlere de uygulanabilir
#include <stdio.h>
int main () {

    int dizi[5]={0};
    int saglam=5;   // kirik=0 -> 1 

    int j = 0;  // kaçıncı kere saydık yumurta sayaç
    int a = 1;  // yazdırdığımızı saymak için sayaç... (tamam,evet daha optimali olabilirdi ama uykum ve çişim var.)
    while(saglam > 1)  // sağlam olduğu sürece devam et
    {
       printf("%d. ", a);  // buralar yok edileblir aslında
       a++;

       for(int i = 0; i<5; i++)   //  dizi de gezsin
        {                               
            if(dizi[i]==1)   // kırıksa onu atlasın 
                continue;
            else
            {
            j++;    
                if(j % 3 == 0)  // 3. saymamıza denk geliyorsa kıralım
                {
                dizi[i]=1;
                saglam--;
                }
            }
        }
        for(int k=0; k<5; k++)  // en sonda yazdırır, en son kırılmayan yumurtayı bulur
        printf("%d ", dizi[k]);
        printf("\n");
    }

return 0;
}
