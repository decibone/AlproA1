/* Nama File    		: 41_JumPrima*/
/* Deskripsi    		: menampilkan bilangan Prima yang
dapat dibentuk dari bilangan integer N sembarang > 0 dan tampilkan juga hasil penjumlahan
dari elemen bilangan prima yang terbentuk dari deret tersebut menggunakan fungsi*/
/* Pembuat      		: Laurentius Lucky Andriawan Bagaskara - 24060122130100 */
/*Tanggal Pembuatan		: 25 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) { // Funsi untuk mencari bilangan prima

//Kamus Lokal

    int i;

//Algoritma

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            return 0; // Tidak prima
        }
    }
    return 1; // Prima
}

int main() {

//Kamus

int n, i, j, sum = 0;

//Algoritma


    printf("Masukkan bilangan integer N: ");
    scanf("%d", &n);

    if(n <= 1)

    {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya adalah 0");
    }else{
    printf("Bilangan prima yang dapat dibentuk dari N: ");
    for(i=2; i<=n; i++) {
        if(isPrime(i)) {
            int digits[10], num = i, k = 0, flag = 1;
            while(num) {
                digits[k++] = num % 10;
                num /= 10;
            }
            for(j=0; j<k/2; j++) {
                if(digits[j]!=digits[k-j-1]) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                printf("%d ", i);
                sum += i;
            }
        }
    }
    printf(", maka jumlahan bilangan prima adalah: %d", sum);
    }
 return 0;
}
