<< "\n=== RINCIAN PEMESANAN ===\n";
    cout << "Nama: " << p.nama << endl;
    cout << "Tujuan: " << p.tujuan << endl;
    cout << "Kelas: " << p.kelas << endl;
    cout << "Transit: " << p.transit << endl;
    cout << "Seat: " << p.seat << endl;
    cout << "Total Harga: Rp" << fixed << setprecision(0) << p.harga << endl;

    riwayat.push_back(p);
    cout << "\nPemesanan berhasil disimpan!\n";
}

int main() {
    int menu;

    do {
        cout << "\n==============================\n";
        cout << " SISTEM PEMESANAN TIKET PESAWAT\n";
        cout << "==============================\n";
        cout << "1. Pesan Tiket Baru\n";
        cout << "2. Lihat Riwayat Pemesanan\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;
        cin.ignore();

        switch (menu) {
            case 1: pesanTiket(); break;
            case 2: tampilRiwayat(); break;
            case 3: cout << "Terima kasih telah menggunakan layanan kami!\n"; break;
            default: cout << "Menu tidak valid!\n";
        }

    } while (menu != 3);
    
    return 0;
}
