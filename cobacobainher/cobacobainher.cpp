#include <iostream>
#include <string>
using namespace std;

class profesor {
public :
	string jenisRobot;

	profesor(string pJenisRobot) :
		jenisRobot(pJenisRobot) {
		cout << "profesor dibuat \n" << endl;
	}
	~profesor() {
		cout << "profesor dihapus\n" << endl;
	}
};

class robot {
public : 
	string nama;

	robot(string pNama) :
		nama(pNama) {
		cout << "Robot dibuat\n" << endl;
	}
	~robot() {
		cout << "Robot di hapus\n" << endl;
	}
};

class kompetisi : private profesor, public robot {
public :
	string jadwal;

	kompetisi(string pJenisRobot, string pNama, string pJadwal) :
		profesor(pJenisRobot),
		robot(pNama),
		jadwal(pJadwal) {
		cout << "Kompetisi dibuat \n" << endl;
	}
	~kompetisi() {
		cout << "Kompetisi di hapus \n" << endl;
	}
	string Mulai() {
		return "P, this is Prof" + jenisRobot + " dengan power " + nama + " dari hasil pertandingan " + jadwal + "\n\n";
	}
};

int main() {
	kompetisi andi("andi laksono", "roket", "ezet boy \n");
	cout << andi.Mulai();
}