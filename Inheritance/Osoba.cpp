#include "pch.h"
#include "Osoba.h"




Osoba::Osoba() {};

Osoba::Osoba(const std::string & imie, const std::string & nazwisko, const std::string & pesel)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->pesel = pesel;
}

Osoba::~Osoba()
{
}

