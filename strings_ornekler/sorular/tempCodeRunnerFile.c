// yumurta sorusu -> 3 tane de birini kır sayıyı kullanıcıdan al
#include <stdio.h>
#include <string.h>
int main()
{
int n;
printf("kac yumurta var?..");
scanf("%d", &n);

int yumurtalar[n]={0};  // 0=sağlam, 1=kırık
int sayac=0;

    for(int i=0; i<n; i++) // her bir yumurtayı gezsin 
    {
        if(yumurtalar[i]==0)  // sağlam ise
        {
            sayac++;  // üstünde şuana kadar durduğumuz şuanda sağlam yumurtaları saysın
            if(sayac % 3 == 0)
            {
                yumurtalar[sayac] == 1;  // kır
            }
        }
        else // yani zaten kırıksa geç
        continue;
    
        if((n-sayac)==1)
        {
            yumurtalar[sayac];
        }
    
    }


return 0;
}