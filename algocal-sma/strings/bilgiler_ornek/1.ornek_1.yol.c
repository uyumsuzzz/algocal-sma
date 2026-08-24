#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // 99 karakter yer ayrıldı
    printf("Bir seyler yaz: ");
    fgets(str, 100, stdin); // 99 karakter alır sonuna \0 ekler.
    // fgets ile string alınırken sona \n koyar bunu \0 ile değiştirmek için;
    
    str[strcspn(str, "\n")] = '\0';     
    
    /*
    strcspn(str, "\n") --> strcspn komutu \n göre kadar sayar ve o indexi yazdırır
    str[(bulunan index)] = '\0'; olarak yeniden o indexe değer atar (biz bitsin görünsün diye \0) 
    */

    printf("Temizlenmis yazi: %s", str);
    return 0;
}