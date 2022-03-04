#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PLikZAdresatami.h"

using namespace std;

class AdresatMenedzer{
    const int IDZALOGOWANEGOUZYTKOWNIKA;
    vector<Adresat>adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami (nazwaPlikuZAdresatami), IDZALOGOWANEGOUZYTKOWNIKA (idZalogowanegoUzytkownika){
        adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(IDZALOGOWANEGOUZYTKOWNIKA);
    };

    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif
