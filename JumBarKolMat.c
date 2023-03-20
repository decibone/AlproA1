/* Nama File    		: 5_JumBarKolMat*/
/* Deskripsi    		: Menghitung dan menampilkan hasil penjumlahan kolom dan baris dalam satu tabel.*/
/* Pembuat      		: Laurentius Lucky Andriawan Bagaskara - 24060122130100 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int **T;
    int n, m, i, j, row_sum, col_sum;

    // Input ukuran tabel
    printf("Masukkan jumlah baris n: ");
    scanf("%d", &n);
    printf("Masukkan jumlah kolom m: ");
    scanf("%d", &m);

    // Alokasi memori untuk tabel
    T = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        T[i] = (int *) malloc(m * sizeof(int));
    }

    // Input nilai elemen pada tabel
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Masukkan elemen pada baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &T[i][j]);
        }
    }

    // Hitung jumlah semua elemen pada setiap baris
    for (i = 0; i < n; i++) {
        row_sum = 0;
        for (j = 0; j < m; j++) {
            row_sum += T[i][j];
        }
        printf("Jumlah elemen pada baris %d adalah %d\n", i + 1, row_sum);
    }

    // Hitung jumlah semua elemen pada setiap kolom
    for (j = 0; j < m; j++) {
        col_sum = 0;
        for (i = 0; i < n; i++) {
            col_sum += T[i][j];
        }
        printf("Jumlah elemen pada kolom %d adalah %d\n", j + 1, col_sum);
    }

    // Bebaskan memori yang telah dialokasikan
    for (i = 0; i < n; i++) {
        free(T[i]);
    }
    free(T);

    return 0;
}
