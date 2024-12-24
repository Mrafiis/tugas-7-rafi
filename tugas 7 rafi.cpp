#include <stdio.h>

int main() {
    int nilai[10];  // Array untuk menyimpan nilai mahasiswa
    int i;

    // Input nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Mencetak nilai mahasiswa yang lulus (nilai >= 60)
    printf("\nDaftar nilai mahasiswa yang lulus (>= 60):\n");
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}
