//
//  Pracownik.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//
#pragma once


#include "Napis.hpp"
#include "Data.hpp"
#include <fstream>

class Pracownik {
    
public:
    Pracownik(const char* im = "", const char* naz = "", int dzien = 1, int miesiac = 1, int rok = 2000);
    Pracownik(const Pracownik & wzor);
    
    
    const char* Imie() const;//
    const char* Nazwisko() const;//
    void Imie(const char* nowe_imie);
    void Nazwisko(const char* nowe_nazwisko);
    void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);
    void Wypisz() const;
    void Wpisz();
    int sprawdz_imie(const char* por_imie) const;
    int sprawdz_nazwisko(const char* por_nazwisko) const;
    int Porownaj(const Pracownik& wzorzec) const;
    Pracownik *m_pNastepny;
    
    Pracownik & operator=(const Pracownik &wzor);
    bool  operator==(const Pracownik &wzor);
    friend ostream & operator<<(ostream & wy, const Pracownik &p);
    friend istream & operator >> (istream & we, Pracownik &p);
    virtual void WypiszDane();
    virtual Pracownik* KopiaObiektu() const;
private:
    Napis m_Imie;
    Napis m_Nazwisko;
    Data m_DataUrodzenia;
    const    int  m_nIDZatrudnienia;
    static int ID;
    
};
