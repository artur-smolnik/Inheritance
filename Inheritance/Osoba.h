#pragma once
#include <string>
class Osoba {
	std::string imie;
	std::string nazwisko;
	std::string pesel;
public:
	Osoba();
	Osoba(const std::string & imie, const std::string & nazwisko, const std::string & pesel);
	std::string get_imie() const { return imie; }
	std::string get_nazwisko() const { return nazwisko; }
	std::string get_pesel() const { return pesel; }
	~Osoba();
};