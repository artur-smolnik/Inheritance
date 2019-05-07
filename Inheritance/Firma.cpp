#include "pch.h"
#include "Firma.h"
#include <algorithm>
#include <iostream>






Firma::Firma(const std::string & nazwa, double stawka)
{
}

void Firma::zatrudnij(const Pracownik & p)
{
	pracownicy.push_back(p);
}

void Firma::zwolnij(const Pracownik & p)
{
	int searchedIndex = 0;
	for (int i = 0; i < pracownicy.size(); ++i) {
		if (pracownicy[i].get_pesel() == p.get_pesel()) searchedIndex = i;
	}
	pracownicy.erase(pracownicy.begin() + searchedIndex);
}

double Firma::podaj_koszty_pracy() const
{
	int cost = 0;
	for (int i = 0; i < pracownicy.size(); i++)
	{
		cost = cost + pracownicy[i].podaj_liczbe_godzin()*stawka_godzinowa;
	}
	return cost;
}

void Firma::wyswietl_liste_plac() const
{
	for (int i = 0; i < pracownicy.size(); i++)
	{
		std::cout << i + 1 << ". " << pracownicy[i].get_imie() << " " << pracownicy[i].get_nazwisko() << " " << pracownicy[i].get_pesel() << ", worktime: " << pracownicy[i].podaj_liczbe_godzin() << std::endl;
	}
}
