#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}
char nama;

string status(double r, double n){
	if (r >= 70 && n >= 80)
	return "diterima";
	else
	return "ditolak";
}

int main() {
	double nilM, nilB;
	char nama;

	cout << "Masukkan Nilai Matematika = ";
	cin >> nilM;
	cout << "Masukkan Nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Masukkan Nama = ";
	cin >> nama;
	
	//rata = (nilM+nilB)/2;
	//rata = rerata(nilM,nilB);
	//st = status(rerata(nilM,nilB));
	// if (rata >= 70 && n >= 80)
	// status = "diterima";
	// else
	// status = "ditolak";

	//cout<< "Status Penerimaan : " << st;
	cout << "Status Penerimaan : " << status(rerata(nilM, nilB),(nama));
	return 0;
}