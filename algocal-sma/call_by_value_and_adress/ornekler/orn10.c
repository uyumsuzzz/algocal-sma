/*
 Kullanıcı tarafından girilen sayının pointer kullanarak faktoriyelini hesaplayan 
özyinemeli  fonksiyonu yazınız.  
*/
#include <stdio.h>
int fakto(int *sayi)
{
    if((*sayi)==1)
    return 1;
    else
    {
        int gecici = *sayi -1;
        return ((*sayi)*fakto(&gecici));
    }
}
int main ()
{
    int sayi = 5;
    int sonuc = fakto(&sayi);  // pointerla yer tutuldu adres gönderilmeli 
    printf("%d", sonuc);
return 0;
}