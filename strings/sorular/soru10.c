// dizilerde zıplama
#include <stdio.h>
int main (){

    int index = 0;
    int dizi1[3][3]={{2,4,3},{0,5,1},{4,6,7}};
    int dizi2[9];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            dizi2[index] = dizi1[i][j];
            index++;
        }
    }

    for(int m=0; m<index; )
    {
        int jump;
        printf("%d ", dizi2[m]);
        jump = dizi2[m];
        m += jump;
    }

return 0;
}
