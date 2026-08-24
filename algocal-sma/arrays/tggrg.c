#include <stdio.h>

int main() {
    
    int x[] = {1, 3, 2, 5, 5, 2, 3, 4, 8, 4, 4, 0};
    int n = 12;  // x dizisindeki eleman sayısı
    int y[12]; // y dizisine yerleştirilecek 
    int k = 0;  // y dizisinin başlangıçtaki eleman sayısı

    for (int i=0; i<n; i++) 
    {
        int is_duplicate = 0;
            for (int j=0; j<k; j++)
            {
                if (x[i]==y[j])
                {
                    is_duplicate = 1;
                    break;
                }
            }
               
                if (is_duplicate == 0)
                {
                y[k] = x[i];
                k++;
                }
    }


        for (int i = 0; i < k; i++) 
        {
        printf("%d ", y[i]);
        }

return 0;
}
