// 
#include <stdio.h>
int main ()
{
    int a[15] = {2, 3, -5, 6, 7, 300, 9, 200, 5, 6, 2, 100};
    int m1=-1, m2=-1, m3=-1;
    int boyut = sizeof(a)/sizeof(a[0]);

        for (int i=0; i<boyut; i++)
        {
            if (m1 == -1 || a[i]>a[m1])   // m1 = -1 iken dizide a[-1] aranmaz çünkü sol ifade DOĞRU (True) iken sağ taraftaki ifade kontrol edilmez
            {
                m3 = m2;
                m2 = m1;
                m1 = i;
            }
            else if (a[i] < a[m1])  
            {
                if (m2 == -1 || a[i]>a[m2])
                {
                    m3 = m2;
                    m2 = i;
                }
                else if(a[i]<a[m2])
                {
                    if (m3 == -1 || a[i]>a[m3])
                    {
                        m3 = i;
                    }
                }
            }
        }
    
    if (m3 == -1)
    {
        printf("HATA, 3 max sayi bulunamadi..");
    }
    else
        printf("3. max sayi = %d", a[m3]);

return 0;
}
