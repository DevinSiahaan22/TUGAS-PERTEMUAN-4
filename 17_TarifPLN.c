/*Nama Program : TarifPLN.c*/
/*Deskripsi    : menampilkan tarif listrik dari 2 golongan dengan ketentuan pemakaian min adalah 100 kWh dan untuk pemakaian 1000kWH dan diatasnya akan dikenakan tambahan biaya sebesar 10% dari total pembayaran*/
/*Pembuat      : 24060121140158-Devin Januar Siahaan*/
/*Tgl Pembuatan : Kamis. 17 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int gol,pakai;

    //Algoritma
    printf("Masukkan golongan listrik : ");
    scanf("%d",&gol);
    printf("Masukkan jumlah pemakaian dalam KWH : ");
    scanf("%d", &pakai);
    if(gol == 1){
        if(pakai > 0 && pakai <= 100){
            printf("%d",100*1000);
        }
        else if (pakai > 100 && pakai < 1000){
            printf("%d",pakai*1000);
        }
        else if (pakai>=1000){
            printf("%d", pakai*1000 + (pakai*1000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KWH");
        }
    }
    else{
        if(pakai > 0 && pakai <= 100){
            printf("%d",100*2000);
        }
        else if (pakai > 100 && pakai < 1000){
            printf("%d",pakai*2000);
        }
        else if (pakai>=1000){
            printf("%d", pakai*2000 + (pakai*2000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KWH");
        }
    }
    return 0;
}
