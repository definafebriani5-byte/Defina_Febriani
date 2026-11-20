vharga_nasgor = 15000
harga_es_teh = 5000

porsi_nasgor = 0
porsi_es_teh = 0
uang_bayar = 0

print("--------------------------------")
print("        MENU KANTINCALC        ")
print("--------------------------------")
print(f"1. Nasi Goreng : Rp {harga_nasgor}")
print(f"2. Es Teh      : Rp {harga_es_teh}")
print("--------------------------------")

# Input Porsi
porsi_nasgor = int(input("Jumlah Nasi Goreng : "))
porsi_es_teh = int(input("Jumlah Es Teh      : "))

# 1. PERKALIAN (*) & PENJUMLAHAN (+)
total_nasgor = harga_nasgor * porsi_nasgor
total_es_teh = harga_es_teh * porsi_es_teh
total_belanja = total_nasgor + total_es_teh
total_item = porsi_nasgor + porsi_es_teh

penyebut_aman = total_item + (total_item == 0)
rata_rata_per_item = total_belanja // penyebut_aman

print("--------------------------------")
print(f"Total Belanja   : Rp {total_belanja}")
print(f"Rata-rata/Item  : Rp {rata_rata_per_item}")
print("--------------------------------")

# Input Uang Pembayaran
uang_bayar = int(input("Uang Dibayarkan : Rp "))

# 3. PENGURANGAN (-)
sisa_kembalian = uang_bayar - total_belanja

# 4. PEMBAGIAN (/) & MODULUS (%)
lembar_10rb = sisa_kembalian // 10000
sisa_pecahan = sisa_kembalian % 10000

print("\n================================")
print("        STRIP PEMBAYARAN        ")
print("================================")
print(f"Total Belanja   : Rp {total_belanja}")
print(f"Uang Bayar      : Rp {uang_bayar}")
print(f"Sisa Uang/Kembali: Rp {sisa_kembalian}")
print("--------------------------------")
print(f"Kembalian Lembar 10 ribuan : {lembar_10rb} lembar")
print(f"Sisa Kembalian Pecahan     : Rp {sisa_pecahan}")
print("--------------------------------")