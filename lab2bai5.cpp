#include <stdio.h>
#include <string.h>
 
int main() {    
    char hoten[20];
    char mssv[20];
    char email[20];
    char lop[6];
    char sdt[20];
    printf("nhap ho va ten: ");
	gets(hoten);
    printf("nhap MSSV: ");
	gets(mssv);
    printf("nhap dia chi email: ");
    fflush(stdin);
	gets(email);
    printf("nhap lop: ");
    fflush(stdin);
	gets(lop);
    printf("nhap so dien thoai: ");
	gets(sdt);
    printf("----------------------------\n");
    printf("ten la %s\n ", hoten);
    printf("mssv la %s\n ", mssv);
    printf("email la %s\n ", email);
    printf("lop la %s\n ", lop);
    printf("sdt la %s\n ", sdt);
    return 0;
}
