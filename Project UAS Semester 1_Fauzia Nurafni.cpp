/*
    Mata Kuliah : Dasar Pemrograman
    Tugas       : Project UAS Pertemuan ke 16
    Nama        : Fauzia Nurafni
    NIM         : 2230511059
    Kelas       : Teknik Informatika,1B
    Tanggal     : 30 Januari 2023
*/

#include <iostream>
using namespace std;

	struct order{
        string nama;
        char tanggal[15],lanjut,lagi;
        int usia,rute,kelas,harga,jumlah,waktu;

	};
void tiket_order(){
     order tiket;
     system("color 06");
            do{
                for(int i=0; i<1; i++){
                cout << "\t ===============================================" << endl;
                cout << "\t                 SELAMAT DATANG DI              " << endl;
                cout << "\t       LOKET TIKET KERETA API SILIWANGI(SI)     " << endl;
                cout << "\t ===============================================" << endl;
                cout << "                                                  " << endl;
                }
                formatpemesanan:
                // program pengimputan data penumpang
                cout << "   Silahkan masukkan data anda : "<< endl;
                cout << "   Nama                 = ";
                cin >> tiket.nama;

                cout << "   -----------------------" << endl;
                cout << "   |No | Usia Penumpang  |" << endl;
                cout << "   -----------------------" << endl;
                cout << "   |1. | Anak-anak       |" << endl;
                cout << "   |2. | Dewasa          |" << endl;
                cout << "   -----------------------" << endl;
                cout << " Masukkan pilihan anda [1/2] = ";
                cin >> tiket.usia;
                cout << endl;

                cout << " Masukkan Tanggal Keberangkatan [dd/mm/yy] = ";
                cin >> tiket.tanggal;
                cout << "                                   " << endl;

                //program pemilihan tujuan penumpang
                cout << "   Silahkan pilih tujuan anda :  " << endl;
                cout << "   ------------------------------" << endl;
                cout << "   |No.|    Rute Perjalanan     |" << endl;
                cout << "   ------------------------------" << endl;
                cout << "   |1. |   Sukabumi-Jakarta     |" << endl;
                cout << "   |2. |   Sukabumi-Bogor       |" << endl;
                cout << "   |3. |   Sukabumi-Bandung     |" << endl;
                cout << "   |4. |   Sukabumi-Yogyakarta  |" << endl;
                cout << "   ------------------------------" << endl;
                cout << " Masukkan pilihan anda [1/2/3/4] = ";
                cin >> tiket.rute;
                cout << "                                   " << endl;

                //program pemilihan kelas penumpang
                cout << "   Silahkan pilih kelas :" << endl;
                cout << "   ----------------------------------" << endl;
                cout << "   |N0. |  Kelas     |    Harga     |" << endl;
                cout << "   ----------------------------------" << endl;
                cout << "   |1.  | Ekonomi    | Rp. 30.000,- |" << endl;
                cout << "   |2.  | Bisnis     | Rp. 45.000,- |" << endl;
                cout << "   |3.  | Eksekutif  | Rp. 80.000,- |" << endl;
                cout << "   ----------------------------------" << endl;
                cout << " Masukkan pilihan anda [1/2/3] = ";
                cin >> tiket.kelas;
                cout << "                                       " << endl;

                cout << " ----------------------------------------" << endl;
                cout << " Masukkan jumlah pemesanan tiket = "; cin >> tiket.jumlah;
                cout << "                                         " << endl;
                cout << " Jumlah tiket yang dipesan = " << tiket.jumlah << " tiket \n";

                switch(tiket.kelas){
                    case 1 :
                        if(tiket.harga=tiket.jumlah*30000)
                            cout << " ----------------------------------------" << endl;
                            cout << " Total Harga Kelas Ekonomi   : Rp " << tiket.harga << endl;
                            cout << " ----------------------------------------" << endl;
                            break;
                    case 2 :
                        if(tiket.harga=tiket.jumlah*45000)
                            cout << " ----------------------------------------" << endl;
                            cout << " Total Harga Kelas Bisnis    : Rp " << tiket.harga << endl;
                            cout << " ----------------------------------------" << endl;
                            break;
                    case 3 :
                        if(tiket.harga=tiket.jumlah*80000)
                            cout << " ----------------------------------------" << endl;
                            cout << " Total Harga Kelas Eksekutif : Rp " << tiket.harga << endl;
                            cout << " ----------------------------------------" << endl;
                            break;
                    default :
                        cout << "   Menu tidak tersedia " << endl;
                }
                cout << endl;

                //program pemilihan jam keberangkatan
                cout << "   Silahkan pilih jam keberangaktan : " << endl;
                cout << "   ---------------------------- " << endl;
                cout << "   |No. | Waktu  |     Jam    | " << endl;
                cout << "   ---------------------------- " << endl;
                cout << "   |1.  | Pagi   | 05.30 WIB  | " << endl;
                cout << "   |2.  | Siang  | 11.25 WIB  | " << endl;
                cout << "   |3.  | Sore   | 17.25 WIB  | " << endl;
                cout << "   ---------------------------- " << endl;
                cout << " Masukkan pilihan anda [1/2/3] = ";
                cin >> tiket.waktu;
                cout << "                                  " << endl;

                cout << " Lanjutkan untuk proses pemesanan [y/t] : "; cin >> tiket.lanjut;
                if(tiket.lanjut == 'y'){
                    goto resipesanantiket;
                }
                cout << endl;
                resipesanantiket:
                // resi pemesanan tiket
                cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
                cout << "               KERETA API SILIWANGI(SI)             " << endl;
                cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
                cout << "                                                    " << endl;

                cout <<         "   Nama Penumpang            : " << tiket.nama << endl;
                switch(tiket.usia){
                    case 1 :
                        cout << "   Usia Penumpang            : Anak-anak " << endl;
                        break;
                    case 2 :
                        cout << "   Usia Penumpang            : Dewasa    " << endl;
                        break;
                }
                        cout << "   Tanggal Keberangkatan     : " << tiket.tanggal << endl;


                string tujuan[5] = {"Jakarta","Bogor","Bandung","Yogyakarta"};
                switch(tiket.rute){
                    case 1 :
                        cout << "   Tujuan Perjalanan         : " << tujuan[0] << endl;
                        break;
                    case 2 :
                        cout << "   Tujuan Perjalanan         : " << tujuan[1] << endl;
                        break;
                    case 3 :
                        cout << "   Tujuan Perjalanan         : " << tujuan[2] << endl;
                        break;
                    case 4 :
                        cout << "   Tujuan Perjalanan         : " << tujuan[3] << endl;
                        break;
                }


                string kelas[3] = {"Ekonomi","Bisnis","Eksekutif"};
                switch(tiket.kelas){
                    case 1 :
                        cout << "   Kelas                     : " << kelas[0] << endl;
                        break;
                    case 2 :
                        cout << "   Kelas                     : " << kelas[1] << endl;
                        break;
                    case 3 :
                        cout << "   Kelas                     : " << kelas[2] << endl;
                        break;
                cout << endl;
                }

                switch(tiket.waktu){
                    case 1 :
                        cout << "   Jadwal Kereta pagi pukul  : 05.30 " << endl;
                        break;
                    case 2 :
                        cout << "   Jadwal kereta siang pukul : 11.25 " << endl;
                        break;
                    case 3 :
                        cout << "   Jadwal kereta Sore pukul  : 17.25 " << endl;
                        break;
                    default :
                        cout << "   Menu tidak tersedia \n";
				cout << endl;
                }
                    cout << "   ==========================================" << endl;
                    cout << "   total Harga yang harus dibayar = Rp." << tiket.harga << endl;
                    cout << "                                               " << endl;
                cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "        Gunungparang Kec.Cikole, Kota Sukabumi     " << endl;
                cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << endl;

                cout << " Ingin memesan tiket lagi(y/t) : "; cin >> tiket.lagi;

            }while(tiket.lagi == 'Y');
                if (tiket.lagi == 'y'){
                    goto formatpemesanan;
                }else{
                cout << endl;
                    cout << " Terima kasih telah memesan tiket " << endl;
                }
}
int main(){
    tiket_order();

    return 0;
}



















