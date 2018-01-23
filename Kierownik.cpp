//
//  Kierownik.cpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.01.2018.
//  Copyright © 2018 Микита Вовк. All rights reserved.
//

#include "Kierownik.hpp"
Kierownik::Kierownik(const char* nazwa,int liczba,const char* im, const char* naz, int dzien, int miesiac, int rok):Pracownik( im,naz, dzien, miesiac, rok){
    m_NazwaDzialu.Ustaw(nazwa);
    m_nliczbaPracownikow=liczba;
};

Kierownik::Kierownik(const Kierownik & wzor):Pracownik(wzor){
    
    this->m_NazwaDzialu=wzor.m_NazwaDzialu;
    this->m_nliczbaPracownikow=wzor.m_nliczbaPracownikow;

};

Kierownik & Kierownik::operator=(const Kierownik &wzor){
    
    this->m_NazwaDzialu=wzor.m_NazwaDzialu;
    this->m_nliczbaPracownikow=wzor.m_nliczbaPracownikow;
    this->Pracownik::operator=(wzor);
//    this->m_Imie=wzor.m_Imie;
//    this->m_Nazwisko=wzor.m_Nazwisko;
//    this->m_DataUrodzenia=wzor.m_DataUrodzenia;
    return *this;
};

bool Kierownik::operator==(const Kierownik &wzor) const{
    if ((this->m_NazwaDzialu==wzor.m_NazwaDzialu)&&(this->m_nliczbaPracownikow==wzor.m_nliczbaPracownikow)&&(this->Porownaj(wzor)==0)) {
        return true;
    }
    
    return false;
};

void Kierownik::WypiszDane(){
   
    cout<<"Nazwa dzialu :\t"<<this->m_NazwaDzialu<<endl<<"Liczba pracownikow :\t"<<this->m_nliczbaPracownikow<<endl;
     this->Wypisz();
};


Pracownik* Kierownik::KopiaObiektu() const {

    Kierownik* buffer=new Kierownik;
    *buffer=*this;
    return buffer;
    
};

ostream & operator<<(ostream & wy, const Kierownik &s){

    wy<<"Nazwa dzialu : \t"<<s.m_NazwaDzialu<<endl<<"Liczba pracownikow :\t"<<s.m_nliczbaPracownikow<<endl;
    s.Wypisz();
    return wy;
};

istream & operator >> (istream & we, Kierownik &s){
    cout<<"Podaj nazwe dzialu :\n";
    we>>s.m_NazwaDzialu;
    cout<<"Podaj liczbe pracownikow :\n";
    we>>s.m_nliczbaPracownikow;
    s.Wpisz();
    return we;
};


