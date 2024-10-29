#include <iostream>;
using namespace std;

int main() {

	int n;
	int jumgenap = 0;
	int jumganjil = 0;
	
	cout << "Masukan Jumlah Data : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			jumgenap += i;
		}
		else {
			jumganjil += i;

		}
		
		
	}
	cout << "Jumlah total bilangan ganjil : " << jumganjil << "\n";
		cout << "Jumlah total bilangan genap : " << jumgenap << "\n";
}

// hasil yang diharapkan
// 
// Masukan jumlah data : 10
// Jumlah total bilangan ganjil : 25
// Jumlah total bilangan genap : 20