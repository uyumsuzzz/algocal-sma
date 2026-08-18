#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Bir seyler yaz: ");
    fgets(str, 100, stdin);
    
    int uzunluk = strlen(str); // Kelimenin uzunluğunu ölç

    // Eğer kelimenin son karakteri \n ise, onu \0 yap
    if (str[uzunluk - 1] == '\n') {
        str[uzunluk - 1] = '\0';
    }
    
    printf("Temizlenmis yazi: %s", str);
    return 0;
}