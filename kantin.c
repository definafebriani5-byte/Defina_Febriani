#include <stdio.h>

int main() {
    int harga_nasgor = 15000;
    int harga_es_teh = 5000;
    
    int porsi_nasgor = 0;
    int porsi_es_teh = 0;
    int uang_bayar = 0;
    
    printf("===================================\n");
    printf("        MENU KANTINCALC            \n");
    printf("===================================\n");
    printf("1. Nasi Goreng  : Rp %d\n", harga_nasgor);
    printf("2. Es Teh       : Rp %d\n", harga_es_teh);
    printf("-----------------------------------\n");
    
    // Input Porsi
    printf("Jumlah Nasi Goreng : ");
    scanf("%d", &porsi_nasgor);
    printf("Jumlah Es Teh       : ");
    scanf("%d", &porsi_es_teh);
    
    // 1. PERKALIAN (*) & PENJUMLAHAN (+)
    int total_nasgor = harga_nasgor * porsi_nasgor;
    int total_es_teh = harga_es_teh * porsi_es_teh;
    int total_belanja = total_nasgor + total_es_teh;
    int total_item = porsi_nasgor + porsi_es_teh;
    
    int penyebut_aman = total_item + (total_item == 0);
    int rata_rata_per_item = total_belanja / penyebut_aman;
    
    printf("-----------------------------------\n");
    printf("Total Belanja    : Rp %d\n", total_belanja);
    printf("Rata-rata/Item   : Rp %d\n", rata_rata_per_item);
    printf("-----------------------------------\n");
    
    // Input Uang Pembayaran
    printf("Uang Dibayarkan  : Rp ");
    scanf("%d", &uang_bayar);
    
    // 3. PENGURANGAN (-)
    int sisa_kembalian = uang_bayar - total_belanja;
    
    // 4. PEMBAGIAN (/) & MODULUS (%)
    int lembar_10rb = sisa_kembalian / 10000;
    int sisa_pecahan = sisa_kembalian % 10000;
    
    printf("\n===================================\n");
    printf("          STRIP PEMBAYARAN         \n");
    printf("===================================\n");
    printf("Total Belanja    : Rp %d\n", total_belanja);
    printf("Uang Bayar       : Rp %d\n", uang_bayar);
    printf("Sisa Uang/Kembali: Rp %d\n", sisa_kembalian);
    printf("-----------------------------------\n");
    printf("Kembalian Lembar 10 ribuan : %d lembar\n", lembar_10rb);
    printf("Sisa Kembalian Pecahan     : Rp %d\n", sisa_pecahan);
    printf("===================================\n");

    return 0;
}