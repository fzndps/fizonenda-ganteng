#include <iostream>
#include <string>
using namespace std;


int main() {
        int ulangi = 3;
        int password;
        string username;
        string nama = "Fizonenda Poca sondaya";
        string npm = "06.2023.1.07658";
        string tanggal_lahir = "15 - 09 - 2002";
        string email = "fizonenda18@gmail.com";
        string default_username = "fizonenda";
        
        int default_password = 123;
        bool login = false; 
        


    while (ulangi > 0){
        cout << "masukkan username anda : ";
        cin >> username;
        cout << "masukkan pin anda : ";
        cin >> password;

            if ((username == default_username) && (password == default_password)) {
            login = true;
            cout << "username dan password anda benar \n";
            break; 

            } else {
            cout << "Username dan password salah. Sisa percobaan: " << ulangi - 1 << endl;
            ulangi--;
            if (ulangi == 0) {
                cout << "Akun anda terblokir. \n";
                return 0;
                }
            }
        }

        while (login) {
            int pilih;
            cout << "1. Profil. \n";
            cout << "2. Jadwal dan Absensi. \n";
            cout << "3. Ruang Kelas. \n";
            cout << "4. Keluar. \n";

            string jawab;
            cout << "Anda ingin mengecek apa? ";
            cin >> pilih;
            string hari;
            string kelas;
            

            switch (pilih){
            case 1:
                cout << "|=========================================| \n";
                cout << "|                  PROFIL                 | \n";
                cout << "|=========================================| \n";
                cout << "|  NAMA         : " << nama         <<"  |" << endl;
                cout << "|  NPM          : " << npm          <<"         |" << endl;
                cout << "|  TANGGAL LAHIR: " << tanggal_lahir<<"          |" << endl;
                cout << "|  EMAIL        : " << email        <<"   |" << endl;
                cout << "|=========================================| \n";

                cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                cin >> jawab;
                if (jawab == "y" || jawab == "Y"){
                    cout << "Baik kamu memilih menu utama. \n";
                 } 
                 else {
                    cout << "Baik program selesai. \n";
                    login = false;
                }
                break;
            case 2: 
                cout << "Anda ingin melihat jadwal hari apa? ";
                cin >> hari;

                if (hari == "senin") {
                    cout << "|=====================================| \n";
                    cout << "|SENIN  | MATEMATIKA  |  18.00-19.40  | \n";
                    cout << "|       |  PANCASILA  |  19.50-21.30  | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                        }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                } else if (hari == "selasa"){
                    cout << "|=====================================| \n";
                    cout << "|SELASA| ALJABAR LINEAR | 18.00-19.40 | \n";
                    cout << "|      |                |             | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";
                        
                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                }else if (hari == "rabu"){
                    cout << "|=====================================| \n";
                    cout << "|RABU  |   MATEMATIKA   | 18.00-18.50 | \n";
                    cout << "|      |   B.INGGRIS    | 19.50-21.30 | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";
                        
                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                } else if (hari == "kamis"){
                    cout << "|=====================================| \n";
                    cout << "|RABU  |   MATEMATIKA   | 18.00-18.50 | \n";
                    cout << "|      |   B.INGGRIS    | 19.50-21.30 | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";
                        
                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                }else if(hari == "kamis"){
                    cout << "|=====================================| \n";
                    cout << "| KAMIS|     PETRUK     | 18.00-19.40 | \n";
                    cout << "|      |    SOSIO. T    | 19.50-21.30 | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";
                        
                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                } else if (hari == "jumat"){
                    cout << "|=====================================| \n";
                    cout << "| JUMAT| SISTEM DIGITAL | 18.00-20.40 | \n";
                    cout << "|      |                |             | \n";
                    cout << "|=====================================| \n";

                    cout << endl;
                    cout << "silahkan absen untuk hari ini! \n";
                    
                    int pilih_absensi;
                    cout << "1. Hadir. \n";
                    cout << "2. Sakit. \n";
                    cout << "3. Izin. \n";

                    cout << "masukkan absensi hari ini : ";
                    cin >> pilih_absensi;

                    switch (pilih_absensi)
                    {
                    case 1:
                        cout << endl;
                        cout << "Baik anda memilih hadir. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;

                    case 2:
                        cout << endl;
                        cout << "Baik anda memilih sakit. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    
                    case 3:
                        cout << endl;
                        cout << "Baik anda memilih izin. \n";

                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    default:
                        cout << "maaf pilihan anda tidak ada \n";
                        
                        cout << "Apakah ingin kembali ke menu utama? ( y / n )";
                        cin >> jawab;
                        if (jawab == "y" || jawab == "Y"){
                         cout << "Baik kamu memilih menu utama. \n";
                        } else {
                        cout << "Baik program selesai. \n";
                        login = false;
                         }
                        break;
                    }
                }else {
                    cout << "Happy weekend!";

                    cout << "Apakah ingin kembali ke menu utama lagi? ( y / n )";
                    cin >> jawab;
                    if (jawab == "y" || jawab == "Y"){
                    cout << "Baik kamu memilih menu utama. \n";
                    } else {
                    cout << "Baik program selesai. \n";
                    login = false;
                    }
                }

                break;
            case 3: 
                cout << "Ruang kelas hari apa yang ingin kamu lihat? ";
                cin >> kelas;
  
                if(kelas == "senin") {
                    cout << "Senin: \n" ;
                    cout << "Kelas Matematika = Ruang F1 \n" ;
                    cout << "Kelas Pancasila = Ruang F2 \n";
    
                } else if(kelas == "selasa") {
                    cout << "Selasa: \n"; 
                    cout << "Kelas Aljabar linear = Ruang F3 \n";

                } else if(kelas == "rabu") {
                    cout << "Rabu: \n"; 
                    cout << "Kelas Matematika = Ruang F3 \n";
                    cout << "Kelas B Inggris = Ruang F5 \n";

                } else if(kelas == "kamis") {
                    cout << "Kamis: \n"; 
                    cout << "Kelas Pemrograman Terstruktur = Ruang F1 \n";
                    cout << "Kelas Sosio Teknologi = Ruang F5 \n";

                } else if (kelas == "jumat"){
                    cout << "Jumat : \n";
                    cout << "Kelas Sistem Digital = Ruang F6 \n";

                }

                cout << "Apakah ingin kembali ke menu utama lagi? ( y / n )";
                cin >> jawab;
                if (jawab == "y" || jawab == "Y"){
                    cout << "Baik kamu memilih menu utama. \n";
                } else {
                    cout << "Baik program selesai. \n";
                    login = false;
                }
                

                break;
            case 4:

            cout << "apakah anda ingin keluar? (y / n)";
            cin >> jawab;
            if (jawab == "y" || jawab == "Y"){
                login = false;
                break;
            }
        }
    }
    return 0;
}


