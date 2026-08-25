//Kullanıcı tarafından girilen bir sayının Abundant sayı olup olmadığını döndüren 
//fonksiyonu  yazınız.
#include <stdio.h>
void abudant(int *sayi, int *sonuc)
{
    int top = 0;

    for(int i=1; i<*(sayi); i++)
    {
        if(*(sayi) % i == 0)
        {
            top += i;
        }
    }    
    if(top > *(sayi))
    *(sonuc) = 0;
    else 
    *(sonuc) = 1;

} 
int main ()
{
    printf("sayinizi giriniz..\n");
    int sayi;
    scanf("%d", &sayi);
    int sonucc=0;
    abudant(&sayi , &sonucc);

    if(sonucc == 0)
    printf ("evet abudant..\n");

return 0;
}