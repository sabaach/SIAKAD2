#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"


mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, std::string departemen, int tahunmasuk, std::string matkul,int sks, int semester, float ipk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk),matkul(matkul), sks(sks), semester(semester), ipk(ipk)
{
	
}

std::string mahasiswa::getNRP()
{
	return this->nrp;
}


std::string mahasiswa::getmatkul() 
{
    return this->matkul;
}

std::string mahasiswa::getDepartemen()
{
	return this->departemen;
}
int mahasiswa::getTahunMasuk()
{
	return this->tahunmasuk;
}
				
void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKS()
{
	return this->sks;
}
int mahasiswa::getIPK(){
	return this->ipk;
}





