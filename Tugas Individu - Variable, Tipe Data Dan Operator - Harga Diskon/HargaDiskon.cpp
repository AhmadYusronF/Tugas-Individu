#include <iostream>
using namespace std;

int main()
{
	int harga = 150000;
	double diskon = 12.5;
	int hargadiskon = harga * (diskon/100);
	int hargasetelahdiskon = harga - hargadiskon;

	cout << "Harga : " << harga << " Ribu" << '\n';
	cout << "Diskon : " << diskon << '\n';
	cout << "Besarnya Diskon Dari Harga : " << hargadiskon << " Ribu" << '\n';
	cout << "Harga Setelah Diskon : " << hargasetelahdiskon << " Ribu" << '\n';

	return 0;
}