#pragma once
#include "Osoba.h"
class Pracownik : public Osoba
{
	int liczba_godzin;
	

public:
	Pracownik();
	Pracownik(Osoba & osoba, int liczba_godzin);	
	Pracownik(std::string & imie,  std::string & nazwisko,  std::string & pesel, int liczba_godzin);
	
	int podaj_liczbe_godzin() const { return liczba_godzin; }


};
