// yumurta sorusu -> 3 tane de birini kır sayıyı kullanıcıdan al
#include <stdio.h>
#include <string.h>
int main()
{
int n;
printf("kac yumurta var?..");
scanf("%d", &n);
int saglam = n;
int yumurtalar[n];  // 0=sağlam, 1=kırık
    for(int i=0; i<n; i++)
    {
        yumurtalar[i]=0;
    }

int sayac=0;

    while(saglam>1) // her bir yumurtayı gezsin 
    {
        for(int i=0; i<n; i++)
        {
            if(yumurtalar[i]==0)  // sağlam ise
        {
            sayac++;  // üstünde şuana kadar durduğumuz şuanda sağlam yumurtaları saysın
            if(sayac % 3 == 0)
            {
                yumurtalar[i] = 1;  // kır
                saglam--;
            }
        }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(yumurtalar[i]==0)  // sağlamı arıyoruz kırıkları 1 e dönüştürdük
        {
            printf("%d. yumurta saglam ",i+1);
        }
    }


return 0;
}