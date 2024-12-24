#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Array yang sudah berisi data
    int i;

    printf("Data yang disimpan (hanya yang genap):\n");

    // Loop untuk mengecek dan mencetak hanya nilai genap
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {  // Cek apakah bilangan genap
            printf("%d ", A[i]); // Cetak nilai genap
        }
    }

    return 0;
}
