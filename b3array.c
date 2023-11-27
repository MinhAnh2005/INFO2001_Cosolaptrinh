#include <stdio.h>

#define SO_SINH_VIEN 48

void tinh_diem_trung_binh() {
    float diem[SO_SINH_VIEN];
    

    for (int i = 0; i < SO_SINH_VIEN; i++) {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &diem[i]);
    }

    float tong_diem = 0;
    for (int i = 0; i < SO_SINH_VIEN; i++) {
        tong_diem += diem[i];
    }

    float diem_trung_binh = tong_diem / SO_SINH_VIEN;

    printf("Diem trung binh cua lop la: %.2f\n", diem_trung_binh);
}

int main() {

    tinh_diem_trung_binh();
    
    return 0;
}