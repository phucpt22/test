#include <stdio.h>
#define Pi 3.14
#include <math.h>
 
int main() {    
    float banKinh;
    printf("Nhap ban kinh: ");
    scanf("%f", &banKinh);
    printf("Chu vi hinh tron la: %.2f ", 2*banKinh*Pi);
    printf("\nDien tich hinh tron la: %.2f ", pow(2,banKinh)*Pi);
    return 0;
}
