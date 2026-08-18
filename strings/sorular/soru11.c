/*
        8 5 6
        4 5 7   -->  8+5+6+7+3+2+1+4   (köşeler bir kere sayılacak!)
        1 2 3  
*/
#include <stdio.h>
int main ()
{
    int n;
        printf("kare matris derecesi ne?..");
        scanf("%d", &n);
    
    int d[n][n];
        printf("elemanlari gir..");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d", d[i][j]);
            }
        }
    int top=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                top+=d[i][j]; 
            }
        }
        
    }

    printf("%d ", top);


return 0;
}