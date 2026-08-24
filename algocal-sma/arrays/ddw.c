#include <stdio.h>
void main ()
{
int oylar[10]={100,62,63,52,63,8,5,69,10,2001};
int en_buyuk_deger=oylar[0], konum=0;
for (int i=1; i<10; i++)
    if (oylar[i] > en_buyuk_deger)
    {
        en_buyuk_deger = oylar[i];
        konum=i;
    }
printf("en buyuk degere sahip eleman dizinin %d. elemanidir..", konum);

}