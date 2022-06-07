#include <stdio.h>
 
int main() {    
    float dai, rong;
    printf("Nhap chieu dai: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong: ");
    scanf("%f", &rong);
    printf("Chu vi hinh chu nhat la: %.2f ", (dai+rong)*2);
    printf("\nDien tich hinh chu nhat la: %.2f ", dai*rong);
    return 0;
}
