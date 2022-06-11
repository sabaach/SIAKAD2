#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	start:
    cout << "Selamat datang di laman administrator" << endl << endl;
    cout << "Silahkan login dengan username dan password" << endl;
	cout << "*Hint : " << endl; 
	cout << "usernamenya : syafrie bachtiar" << endl; 
	cout << "passwordnya : bachtiargokil123" << endl;
    string username,password;
	getline (cin, username);
    getline (cin, password);

    if (username == "syafrie bachtiar" && password == "bachtiargokil123"){
		while(1) {
		cout << endl;
		cout << "Selamat datang di Universitas Teknologi Sabach" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Orang" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Orang" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Menu Mahasiswa" << endl;
		cout << "  2. Menu Dosen" << endl;
		cout << "  3. Menu Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1: //Menu Mahasiswa
				cout << "Selamat Datang di Menu mahasiswa" << endl;
				cout << "Pilih Menu dibawah" << endl;
				cout << "1. Tambah Mahasiswa" << endl;
				cout << "2. Mata Kuliah Mahasiswa" << endl;
				cout << "3. Tampilkan data mahasiswa" << endl;
				cout << "4. Kembali..." << endl;
				int menupilih;
				cin >> menupilih;

				switch (menupilih)
				{
				case 1:
					int jumlah_mahasiswa;
					cout << "Masukkan jumlah mahasiswa yang ingin ditambah" << endl;
					cin >> jumlah_mahasiswa;

					for (int i = 1; i <= jumlah_mahasiswa; i++){
						string id,nama, nrp, departemen, matkul;
						int dd, mm, yy, tahunmasuk,sks,semester;
						float ipk;
						char pil;
						cout << "Masukkan Id Mahasiswa" << endl;
						cin >> id;
						cout << "Masukkan Nama Mahasiswa" << endl;
						cin >> nama;
						cout << "Masukkan NRP Mahasiswa" << endl;
						cin >> nrp;
						cout << "Masukkan Departemen Mahasiswa" << endl;
						cin >> departemen;
						cout << "Masukkan tanggal lahir mahasiswa" << endl;
						cin >> dd; 
						cout << "Masukkan bulan lahir mahasiswa" << endl;
						cin >> mm;
						cout << "Masukkan tahun lahir mahasiswa" << endl;
						cin >> yy;
						cout << "Masukkan tahun masuk mahasiswa" << endl;
						cin >> tahunmasuk;
						cout << "Semester Mahasiswa" <<endl;
						cin >> semester;
						cout << "IPK Mahasiswa :" <<endl;
						cout << "Jika IPK lebih dari sama dengan 3 bisa nambah mata kuliah" <<endl;
						cin >> ipk;

						if (ipk >= 3)
						{
							cout << "Nambah matkul? Y atau N " <<endl;
							cin >> pil;
							if (pil == 'Y' || pil == 'y')
							{
							cout << "ISI nama matkul" <<endl;
							cin >> matkul;
							cout << "Nambah berapa SKS" <<endl;
							cin >> sks;
							}
							else{
								continue;
							}
						}
					mahasiswa mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, matkul,sks,semester,ipk);
					recMhs.push_back(mahasiswa);
					}
					break;
				case 2 :
					if (recMhs.size() > 0)
					{
						cout << "Berikut adalah data Mata Kuliah Mahasiswa" << endl << endl;
						for (unsigned int i = 0; i < recMhs.size(); i++)
						{
						cout << recMhs[i].getmatkul() << ":" << endl;
						cout << endl;
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "IPK Mahasiswa : " << recMhs[i].getIPK()<<endl;
						cout << "NRP Mahasiswa : " << recMhs[i].getNRP() << endl;
						cout << "Departemen Mahasiswa: " << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk Mahasiswa: " << recMhs[i].getTahunMasuk() << endl;
						cout << "Semester Mahasiswa : " << recMhs[i].getSemester()<< endl;
						cout << " SKS Mata Kuliah yang diambil: " << recMhs[i].getSKS() << endl<< endl;
						}
					}
					
					break; 

				case 3 :
					if (recMhs.size() > 0)
					{
						cout << "Berikut adalah data Mahasiswa yang telah ditambahkan" << endl << endl;
						for (unsigned int i = 0; i < recMhs.size(); i++)
						{
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "Tanggal lahir : " << recMhs[i].getTglLahir();
						cout << "/" << recMhs[i].getBulanLahir();
						cout << "/" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP Mahasiswa : " << recMhs[i].getNRP() << endl;
						cout << "Departemen Mahasiswa: " << recMhs[i].getDepartemen() << endl;
						cout << "Semester Mahasiswa : " << recMhs[i].getSemester()<< endl;
						cout << "Tahun Masuk Mahasiswa: " << recMhs[i].getTahunMasuk() << endl << endl;
						}
					}
					break;
				case 4 :
					goto start;
				default:
					break;
				}
				
				break;

			case 2: //Menu Dosen

				cout << "Selamat Datang di Menu Dosen" << endl;
				cout << "Pilih Menu dibawah" << endl;
				cout << "1. Tambah Dosen" << endl;
				cout << "2. Tampilkan data dosen" << endl;
				cout << "3. Kembali..." << endl;
				int menupil;
				cin >> menupil;

				switch (menupil)
				{
				case 1:
					int jumlah_dosen;
					cout << "Masukkan jumlah dosen" << endl;
					cin >>  jumlah_dosen;

					for (int i = 1; i <= jumlah_dosen; i++){
						string id, nama, npp, departemen;
						int dd, mm, yy, pendidikan;
							cout << "Masukkan Id dosen" << endl;
							cin >> id;
							cout << "Masukkan Nama dosen" << endl;
							cin >> nama;
							cout << "Masukkan NPP dosen" << endl;
							cin >> npp;
							cout << "Masukkan Departemen dosen" << endl;
							cin >> departemen;
							cout << "Masukkan tanggal lahir dosen" << endl;
							cin >> dd; 
							cout << "Masukkan bulan lahir dosen" << endl;
							cin >> mm;
							cout << "Masukkan tahun lahir dosen" << endl;
							cin >> yy;
							cout << "Masukkan pendidikan dosen" << endl;
							cin >> pendidikan;

					dosen dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dosen);
					}
					break;
		
				case 2:
					if (recDosen.size() > 0)
					{
					cout << "Berikut adalah data dosen yang telah ditambahkan" << endl << endl;
					for (unsigned int i = 0; i < recDosen.size(); i++)
					{
					cout << "Nama: " << recDosen[i].getNama() << endl;
					cout << "Tanggal lahir : " << recDosen[i].getTglLahir();
					cout << "/" << recDosen[i].getBulanLahir();
					cout << "/" << recDosen[i].getTahunLahir() << endl;
					cout << "NPP Dosen : " << recDosen[i].getNPP() << endl;
					cout << "Departemen Dosen: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan Dosen: " << recDosen[i].getPendidikan() << endl << endl;
					}
					}
				break;
				case 3:
					goto start;
				break;
				default:
					break;
				}
				
				break;

			case 3: //Menu Tenaga Kependidikan
				
				cout << "Selamat Datang di Menu Tenaga Kependidikan" << endl;
				cout << "Pilih Menu dibawah" << endl;
				cout << "1. Tambah Tenaga Pendidik" << endl;
				cout << "2. Tampilkan data tenaga pendidik" << endl;
				cout << "3. Kembali..." << endl;
				int menupil2;
				cin >> menupil2;

				switch (menupil2)
				{
				case 1:
					int jumlah_tenagakependidikan;
					cout << "Masukkan jumlah tenaga kependidikan" << endl;
					cin >>  jumlah_tenagakependidikan;

					for (int i = 1; i <= jumlah_tenagakependidikan; i++){
					string id, nama, npp, unit;
					int dd, mm, yy;
					cout << "Masukkan Id tendik" << endl;
					cin >> id;
					cout << "Masukkan Nama tendik" << endl;
					cin >> nama;
					cout << "Masukkan NPP tendik" << endl;
					cin >> npp;
					cout << "Masukkan Unit tendik" << endl;
					cin >> unit;
					cout << "Masukkan tanggal lahir tendik" << endl;
					cin >> dd; 
					cout << "Masukkan bulan lahir tendik" << endl;
					cin >> mm;
					cout << "Masukkan tahun lahir tendik" << endl;
					cin >> yy;

					tendik tendik(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tendik);
					}
					break;
				case 2:
					if (recTendik.size() > 0)
					{
					cout << "Berikut adalah data Tenaga Kependidikan yang telah ditambahkan" << endl << endl;
					for (unsigned int i = 0; i < recTendik.size(); i++)
					{
					cout << "Nama: " << recTendik[i].getNama() << endl;
					cout << "Tanggal lahir : " << recTendik[i].getTglLahir();
					cout << "/" << recTendik[i].getBulanLahir();
					cout << "/" << recTendik[i].getTahunLahir() << endl;
					cout << "NPP Tendik : " << recTendik[i].getNPP() << endl;
					cout << "Unit Tendik: " << recTendik[i].getUnit() << endl << endl;
					}
					}
					break;
				case 3:
					goto start;
					break;
				default:
					break;
				}
				
				break;
			
			default:
			cout << "Inputan salah silahkan memasukkan inputan dengan baik dan benar" << endl;
				break;
		}
	}
       return 0;
	}
    else { 
		cout << "Login GAGAL" << endl << endl;
		cout << "silahkan coba lagi" << endl; 
		goto start;}

    cin.get();
    return 0;
}
