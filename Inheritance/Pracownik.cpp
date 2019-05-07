#include "pch.h"
#include "Pracownik.h"



Pracownik::Pracownik() :  Osoba()
{
}

Pracownik::Pracownik( Osoba & osoba, int liczba_godzin) : Osoba(osoba)
{
	this->liczba_godzin = liczba_godzin;
}

Pracownik::Pracownik(std::string & imie, std::string & nazwisko, std::string & pesel, int liczba_godzin) : Osoba(imie, nazwisko, pesel)
{
	this->liczba_godzin = liczba_godzin;
}
