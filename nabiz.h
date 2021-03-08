#pragma once
#include <iostream>

class nabiz {
private:
	std::string isim;
	std::string soyisim;
	int dogumTarihiGun;
	int dogumTarihiAy;
	int dogumTarihiYil;
public:
	nabiz();
	nabiz(std::string, std::string, int, int, int);
	void setIsim(std::string);
	void setSoyIsim(std::string);
	void setGun(int);
	void setAy(int);
	void setYil(int);
	std::string getIsim();
	std::string getSoyIsim();
	int getGun();
	int getAy();
	int getYil();
	int getYas();
	void getHedefNabiz();
	int getMaksimumNabiz();
	void printInsan();
};
