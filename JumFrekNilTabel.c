/* Nama File    		: 3_JumFrekNilTabel*/
/* Deskripsi    		: Menghitung dan menampilkan hasil penjumlahan anggota tabel yang muncul lebih dari satu kali.*/
/* Pembuat      		: Laurentius Lucky Andriawan Bagaskara - 24060122130100 */
/*Tanggal Pembuatan		: 19 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus

    int n, *arr, i, j, jml = 0;

    //Algoritma

    printf("Masukkan jumlah elemen dalam tabel: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); // mengalokasikan memori untuk tabel

    printf("Masukkan elemen-elemen tabel: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int freq = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }

        if(freq > 1) // jika frekuensi kemunculan lebih dari satu kali
        {
            jml += arr[i]; // tambahkan elemen ke jml
        }
    }

    printf("Hasil penjumlahan elemen dengan frekuensi kemunculan lebih dari satu kali: %d\n", jml);

    free(arr); // dealokasikan memori yang telah dialokasikan

    return 0;
}
