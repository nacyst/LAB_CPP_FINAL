//
//  ListaPracownikow.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 30.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#ifndef ListaPracownikow_hpp
#define ListaPracownikow_hpp
#pragma once
//#include"Pracownik.hpp"
#include"Kierownik.hpp"

class ListaPracownikow
{
public:
    ListaPracownikow();
    ~ListaPracownikow();
    void Dodaj(const Pracownik  &p);
    void DodajKierownik(const Kierownik  &p);
    void Usun(const Pracownik& wzorzec);
    void WypiszPracownikow()const;
    const Pracownik* Szukaj(const char* nazwisko, const char * imie) const;
    
    
private:
    Pracownik* m_pPoczatek;
    int m_nLiczbaPracownikow;
};
#endif /* ListaPracownikow_hpp */
