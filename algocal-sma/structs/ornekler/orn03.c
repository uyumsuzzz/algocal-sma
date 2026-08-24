#include <stdio.h>
int main ()
{
    typedef struct ABC_tag {
        int a;          // 4 byte 
        short int b;    // 2 byte
        char c;         // 1 byte   top -> 8 byte yer kaplar 1 byte boşta
    }ABC_t;

    ABC_t z1;
    
    ABC_t z4;


    // 1. yol
    z1.a = 4;
    z1.b = 3;
    z1.c = 'S';
    
    // 2. yol
    ABC_t z2 = {101, 31, 'Z'};
    
    // 3. yol
    ABC_t z3 = {.c = 'B', .a = 500, .b = 15}; // Sıra karışık olsa da sorun olmaz

    // 4. yol (kullanıcıdan almak)
    printf("sirasiyla a(int), b(short int), c(char) degerlerini giriniz..");
    scanf("%d%d %c", &z4.a, &z4.b, &z4.c);

    printf("%d %d %c\n%d %d %c\n%d %d %c\n%d %d %c\n",z1.a, z1.b, z1.c, z2.a, z2.b, z2.c, z3.a, z3.b, z3.c, z4.a, z4.b, z4.c);


return 0;
}