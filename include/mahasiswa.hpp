#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	std::string matkul;
	int tahunmasuk;
	int semesterke;
	int semester;
	int skslulus;
	float ipk;
	int sks;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk, std::string matkul, int sks, int semester,float ipk);

	void setSemester(int semesterke);
	int getSemester();

	std::string getNRP();
	std::string getDepartemen();
	std::string getmatkul();
	int getTahunMasuk();

	void setSKSLulus(int skslulus);
	int getSKS();
	int getIPK();
	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
