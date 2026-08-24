// Soru 2: Kullanıcı tarafından girilen bir metin içinde istenilen bir karakterin frekansını
// bulduran fonksiyonu yazdırınız.
#include <stdio.h>

int bul (char *sayilar, char *x, int frekans)
{
    frekans = 0;
        for(int i=0;*(sayilar+i)!='\0';i++)
        {
            if(*(sayilar+i)==*(x))
            frekans++;
        }
return frekans;
}
int main ()
{   
    

}