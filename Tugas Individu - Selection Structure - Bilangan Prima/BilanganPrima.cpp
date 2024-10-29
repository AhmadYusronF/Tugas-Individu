#include <iostream>
using namespace std;

int main (){

    int size;
    cout << "Input Size : ";
    cin >> size;

    for (int i = 2; i <= size ; i++){           //perulangan for ini berfungsi untuk sebagai indentitas untuk memberikan bilangan untuk nanti akan di coba jika bilangan itu apakah prime
        bool prime = true;                      //ini akan selalu bernilai true dan akan hanya berubah jika di line 16 prime = false, ini berfungsi untuk mengecek jika bilangan itu prime atau tidak jika prime akan lanjut di cetak menggunakan cout di line 23

            for (int j = 2; j <= i / 2; j++){   //ini adalah operasi utama pengecekan apa bilangan yang di berikan i itu prime fungsi utama kode ini adalah jika j <= i/2 kalau benar akan menghasilkan bilangan nonprime tetapi kalau salah akan menghasilkan bilangan prime
                if (i % j == 0)                 //kode ini berfungis jika i module j sama dengan kosong akan menghasilakan true jika true akan lanjut ke line 16 tetapi jika false akan kembali ke line 13 dan akan menambahkan nilai kepada j sebesar satu
                {       
                    prime = false;              //kode ini berfungsi untuk mengganti nilai prime dari true menjadi false dan akan lanjut ke line 17
                   break;                       // dan di line 17 kode ini berfungsi untuk menghentikan perulangan for di line 13 dan akan lanjut kembali ke perulangan for di line 10 dan akan menambah nilai i dengan 1
                }
                
            }
            if (prime)                          //kode ini berfungsi untuk mengecek jika nila prime masih sama yaitu true jika true akan lanjut ke line 23 tetapi jika berubah menjadi fasle dikarenakan line 16 kode ini akan stop dan kembali ke perulangan for awal        
            {
                cout << i << " ";               //berfungsi untuk mencetak nilai i hanya aka di cetak ketika line 21 berhasil mengecek jika nilai prime tidak berubah yaitu true
            }
            
        
    }
        
    return 0;
}