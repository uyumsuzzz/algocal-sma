#include <stdio.h>

#define PI 3.14159
#define ALAN(r) (PI * (r) * (r))
#define CEVRE(r) (2 * PI * (r))

int main() {

    float yaricap, alan;

    printf("Dairenin yaricapini giriniz: ");
    scanf("%f", &yaricap);

    alan = PI * yaricap * yaricap;

    printf("Dairenin alani: %.2f\n", alan);
    //printf("%.2f", ALAN(yaricap));
    //printf("%.2f", CEVRE(yaricap));

    return 0;
}