/*
 Dışarıdan alınacak taban ve üst sayılarını kullanarak özyinelemeli şekilde üst alma 
işlemini  yapan kodu yazınız.  
Örnek: 10, 3 Cevap: 10^3=1000  
Örnek: 9,4 Cevap: 9^4= 6561  
*/
#include <stdio.h>
int uslu(int taban, int us)
{
    if(us == 0)
    return 1;
    else
    return taban * uslu(taban, us-1);
}
int main ()
{
    int us, taban, cevap;
    
    printf("taban ve us sayilarini sirasiyla girin..");
    scanf("%d%d", &taban, &us);

    cevap = uslu(taban, us);
    printf("%d\n", cevap);
return 0;    
}