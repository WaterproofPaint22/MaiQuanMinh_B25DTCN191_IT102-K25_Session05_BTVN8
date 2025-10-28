#include <stdio.h>
int main() {
    long soNuoc, tienNuoc;
    printf("Nhap so nuoc (met khoi): ");
    scanf("%d", &soNuoc);
    if (soNuoc < 0) {
        printf("Loi: So nuoc phai lon hon 0.\n");
        return 1;
    }
    if (soNuoc < 10)
        tienNuoc = soNuoc * 6000;
    else if (soNuoc < 20)
        tienNuoc = 10 * 6000 + (soNuoc - 10) * 7000;
    else if (soNuoc < 30)
        tienNuoc = 10 * 6000 + 10 * 7000 + (soNuoc - 20) * 8500;
    else 
        tienNuoc = 10 * 6000 + 10 * 7000 + 10 * 8500 + (soNuoc - 30) * 10000;
    printf("Tien nuoc phai tra: %ld VND\n", tienNuoc);
    return 0;
}
