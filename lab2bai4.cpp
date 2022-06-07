#include <stdio.h>
 
int main() {    
    float toan, ly, hoa;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    printf("Diem trung binh 3 mon: %.2f ", ((toan*3)+(ly*2)+hoa)/6);
    return 0;
}
