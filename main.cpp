#include <iostream>
#include <vector>
#include <random>

using namespace std;

int itemAcak(int a, int b);
void viewItems(vector<string> inv);
void addItems(vector<string>& inv, vector<string> pl);

int main() {
    char rencana = ' ';
    char pilih = ' ';
    vector<string> pool {"Pisau", "Pedang", "Panah"};
    vector<string> item;

    cout << "==========================================================" << endl;
    cout << "Suatu hari, kamu berlibur ke Bali berangkat menggunakan pesawat," << endl;    
    cout << "pada perjalanan menggunakan pesawat, tiba-tiba pesawatmu mengalami" << endl;    
    cout << "kecelakaan dan kamu terdampar disebuah pulau yang tidak diketahui" << endl;
    cout << "==========================================================" << endl;
        
    while (true) {  // Loop utama untuk seluruh permainan
        
        cout << "kamu membuat sebuah rencana, terdapat 3 rencana yang telah kamu buat" << endl;
        cout << "1. Rencana pertama yaitu kamu pergi ke sebuah danau yang ada di tengah pulau" << endl;
        cout << "   (Untuk berkemping di sana)" << endl;
        cout << "2. Rencana kedua yaitu kamu pergi ke sebuah gua yang ada di pinggir pulau" << endl;
        cout << "   (Untuk mencari makanan)" << endl;
        cout << "3. Rencana ketiga yaitu kamu pergi ke sebuah puncuk gunung untuk memantau" << endl;
        cout << "   keadaan pulau tersebut" << endl;
        cout << "4. Keluar dari permainan" << endl;
        cout << "==========================================================" << endl;
        cout << "Pilih rencana yang akan kamu ambil (1/2/3/4): ";
        cin >> rencana; 
        
        switch (rencana) {
            case '1': {
                item.clear();  // Reset item setiap kali memilih danau
                cout << "Pada perjalanan ke danau, kamu mendapatkan sebuah item, setelah itu, kamu tiba ke sebuah danau, saat kamu sedang mempersiapkan kemah" << endl;
                cout << "tiba-tiba kamu dihadang oleh sebuah mahluk yang besar dan dia memangsamu" << endl;
                addItems(item, pool);
                
                bool keluar = false;
                while (!keluar) {
                    cout << "==========================================================" << endl;
                    cout << "1. View item" << endl;
                    cout << "2. Fight" << endl;
                    cout << "3. Run (kembali ke menu rencana)" << endl;
                    cout << "==========================================================" << endl;
                    cin >> pilih;
                    
                    switch (pilih) {
                        case '1': {
                            cout << "Item yang kamu miliki: " << endl;
                            viewItems(item);
                            break;
                        }
                        case '2': {
                            cout << "Kamu melawan mahluk tersebut dengan item yang ada" << endl;
                            if (item.empty()) {
                                cout << "Kamu tidak memiliki senjata!" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu dikalahkan monster tersebut dengan mudah" << endl;
                                return 0;
                            }
                            else if (item[0] == "Pisau") {
                                cout << "Kamu menggunakan pisau untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu dikalahkan monster tersebut dan pada akhirnya kamu mati dimakan" << endl;
                                cout << "oleh monster tersebut" << endl;
                                return 0;
                            }
                            else if (item[0] == "Pedang") {
                                cout << "Kamu menggunakan pedang untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu menang dengan mudah dan akhirnya kamu berhasil memberikan sinyal" << endl;
                                cout << "dan dijemput oleh tim penyelamat" << endl;
                                return 0;
                            }
                            else if (item[0] == "Panah") {
                                cout << "Kamu menggunakan panah untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu sedikit kesulitan untuk melawan musuh tersebut tetapi kamu dapat" << endl;
                                cout << "memenangkan pertarung tersebut dan akhirnya kamu berhasil memberikan sinyal" << endl;
                                cout << "dan dijemput oleh tim penyelamat" << endl;
                                return 0;
                            }
                            break;
                        }
                        case '3': {
                            cout << "Kamu mencoba kabur " << endl;
                            cout << "==========================================================" << endl;
                            cout << "Kamu berhasil kabur dari mahluk tersebut!" << endl;
                            cout << "Saat kabur, kamu menemukan senjata baru!" << endl;
                            item.clear();
                            addItems(item, pool);
                            cout << "Kamu mendapatkan: " << item[0] << endl;
                            keluar = true; // Keluar dari loop pertarungan
                            break;
                        }
                        default: {
                            cout << "Pilihan tidak valid" << endl;
                        }
                    }
                }
                break; // Kembali ke loop utama (menu rencana)
            }
            
            case '2': {
                item.clear();
                cout << "Pada perjalanan ke goa, kamu mendapatkan sebuah item, setelah itu, kamu tiba ke sebuah goa, saat kamu sedang memantau lingkungan sekitar" << endl;
                cout << "tiba-tiba kamu dihadang oleh sebuah mahluk bersayap yang besar dan dia memangsamu" << endl;
                addItems(item, pool);
                
                bool keluar = false;
                while (!keluar) {
                    cout << "==========================================================" << endl;
                    cout << "1. View item" << endl;
                    cout << "2. Fight" << endl;
                    cout << "3. Run (kembali ke menu rencana)" << endl;
                    cout << "==========================================================" << endl;
                    cin >> pilih;
                    
                    switch (pilih) {
                        case '1': {
                            cout << "Item yang kamu miliki: " << endl;
                            viewItems(item);
                            break;
                        }
                        case '2': {
                            cout << "Kamu melawan mahluk tersebut dengan item yang ada" << endl;
                            if (item[0] == "Pisau") {
                                cout << "Kamu menggunakan pisau untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu dikalahkan monster tersebut dengan mudah dan pada akhirnya kamu mati dimakan" << endl;
                                cout << "oleh monster tersebut" << endl;
                                return 0;
                            }
                            else if (item[0] == "Pedang") {
                                cout << "Kamu menggunakan pedang untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "kamu sudah berjuang sekuat tenagamu, tetapi" << endl;
                                cout << "monster itu terbang terlalu cepat dan pada akhirnya kamu dikalahkan oleh monster tersebut" << endl;
                                return 0;
                            }
                            else if (item[0] == "Panah") {
                                cout << "Kamu menggunakan panah untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu mengalahkan monster tersbut dengan mudah dan" << endl;
                                cout << "akhirnya kamu berhasil memberikan sinyal" << endl;
                                cout << "dan dijemput oleh tim penyelamat" << endl;
                                return 0;
                            }
                            break;
                        }
                        case '3': {
                            cout << "Kamu mencoba kabur " << endl;
                            cout << "==========================================================" << endl;
                            cout << "Kamu berhasil kabur dari mahluk tersebut!" << endl;
                            cout << "Saat kabur, kamu menemukan senjata baru!" << endl;
                            item.clear();
                            addItems(item, pool);
                            cout << "Kamu mendapatkan: " << item[0] << endl;
                            keluar = true; // Keluar dari loop pertarungan
                            break;
                        }
                        default: {
                            cout << "Pilihan tidak valid" << endl;
                        }
                    }
                }
                break; // Kembali ke loop utama (menu rencana)
            }

            case '3': {
                item.clear();  // Reset item setiap kali memilih danau
                cout << "Pada perjalanan ke puncak, kamu mendapatkan sebuah item, setelah itu, kamu tiba ke puncak gunung, saat kamu sedang memantau lingkungan yang ada" << endl;
                cout << "tiba-tiba kamu dihadang oleh sebuah mahluk lincah yang bergerak dengan cepat dan dia memangsamu" << endl;
                addItems(item, pool);
                bool keluar = false;
                while (!keluar) {
                    cout << "==========================================================" << endl;
                    cout << "1. View item" << endl;
                    cout << "2. Fight" << endl;
                    cout << "3. Run (kembali ke menu rencana)" << endl;
                    cout << "==========================================================" << endl;
                    cin >> pilih;
                    
                    switch (pilih) {
                        case '1': {
                            cout << "Item yang kamu miliki: " << endl;
                            viewItems(item);
                            break;
                        }
                        case '2': {
                            cout << "Kamu melawan mahluk tersebut dengan item yang ada" << endl;
                            if (item[0] == "Pisau") {
                                cout << "Kamu menggunakan pisau untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu menang dengan mudah dan akhirnya kamu berhasil memberikan sinyal" << endl;
                                cout << "dan dijemput oleh tim penyelamat" << endl;
                                return 0;
                            }
                            else if (item[0] == "Pedang") {
                                cout << "Kamu menggunakan pedang untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu sedikit kesulitan untuk melawan musuh tersebut tetapi kamu dapat" << endl;
                                cout << "memenangkan pertarung tersebut dan akhirnya kamu berhasil memberikan sinyal" << endl;
                                cout << "dan dijemput oleh tim penyelamat" << endl;
                                return 0;
                            }
                            else if (item[0] == "Panah") {
                                cout << "Kamu menggunakan panah untuk melawan mahluk tersebut" << endl;
                                cout << "==========================================================" << endl;
                                cout << "Kamu dikalahkan monster tersebut dengan mudah dan pada akhirnya kamu mati dimakan" << endl;
                                cout << "oleh monster tersebut" << endl;
                                return 0;
                            }
                            break;
                        }
                        case '3': {
                            cout << "Kamu mencoba kabur " << endl;
                            cout << "==========================================================" << endl;
                            cout << "Kamu berhasil kabur dari mahluk tersebut!" << endl;
                            cout << "Saat kabur, kamu menemukan senjata baru!" << endl;
                            item.clear();
                            addItems(item, pool);
                            cout << "Kamu mendapatkan: " << item[0] << endl;
                            keluar = true; // Keluar dari loop pertarungan
                            break;
                        }
                        default: {
                            cout << "Pilihan tidak valid" << endl;
                        }
                    }
                }
                break; // Kembali ke loop utama (menu rencana)
            }

            case '4': {
                cout << "Terima kasih telah bermain!" << endl;
                return 0;
            }

            default: {
                cout << "Rencana tidak valid" << endl;
                break;
            }
        }
    }

    return 0;
}

int acak(int a, int b){
    random_device rd;
    mt19937 gen(rd()); //caranya/modenya
    uniform_int_distribution<> distrib(a,b); //sebarkan/membagi
    int hasilAcak = distrib(gen);
    return hasilAcak;
}

void viewItems(vector<string> inv){
    vector<string>::iterator penunjuk;
    for (penunjuk = inv.begin(); penunjuk != inv.end(); ++penunjuk){
        cout << *penunjuk << endl;
    }
}

void addItems(vector<string>& inv, vector<string> pl){
    int senjata = acak(0,pl.size()-1);
    inv.push_back(pl[senjata]);
}