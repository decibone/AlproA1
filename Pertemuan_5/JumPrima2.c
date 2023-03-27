/* Nama File    		: 41_JumPrima*/
/* Deskripsi    		: menampilkan bilangan Prima yang
dapat dibentuk dari bilangan integer N sembarang > 0 dan tampilkan juga hasil penjumlahan menggunakan prosedur
dari elemen bilangan prima yang terbentuk dari deret tersebut*/
/* Pembuat      		: Laurentius Lucky Andriawan Bagaskara - 24060122130100 */
/*Tanggal Pembuatan		: 25 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

//Prosedur pengecekan bilangan prima

void isPrima(int n, int *flag) {
    int i;
    *flag = 1;
    for(i=2; i<=n/2; i++) {
        if(n%i==0) {
            *flag = 0; // Bukan bilangan prima
            break;
        }
    }
}

int main() {

//Kamus

int n, i, j, sum = 0, flag;

//Algoritma


    printf("Masukkan bilangan integer N: ");
    scanf("%d", &n);

    if(n <= 1)

    {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya adalah 0");

    }else{

        printf("Bilangan prima yang dapat dibentuk dari N: ");

        for(i=2; i<=n; i++) {

            isPrima(i, &flag);

            if(flag) {

                int digits[10], num = i, k = 0, flag2 = 1;

                while(num) {

                    digits[k++] = num % 10;
                    num /= 10;
                }

                for(j=0; j<k/2; j++) {

                    if(digits[j]!=digits[k-j-1]) {
                        flag2 = 0;
                        break;
                    }
                }
                if(flag2){
                    printf("%d ", i);
                        sum += i;
                         }
                }
        }

        printf(", maka jumlahan bilangan prima adalah: %d", sum);
        return 0;
    }
}
