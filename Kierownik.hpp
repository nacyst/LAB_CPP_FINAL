//
//  Kierownik.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.01.2018.
//  Copyright © 2018 Микита Вовк. All rights reserved.
//

#ifndef Kierownik_hpp
#define Kierownik_hpp
//#include "Napis.hpp"
//#include "Pracownik.hpp"
#include "Pracownik.hpp"
class Kierownik:public Pracownik{
public:
    Kierownik(const char* nazwa="",int liczba=0,const char* im="", const char* naz="", int dzien=1, int miesiac=1, int rok=2000);
    Kierownik(const Kierownik & wzor);
    Kierownik & operator=(const Kierownik &wzor);
    bool operator==(const Kierownik &wzor) const;
    virtual void WypiszDane() ;//override;
    virtual Pracownik* KopiaObiektu()  const;//override;
    friend ostream & operator<<(ostream & wy, const Kierownik &s);
    friend istream & operator >> (istream & we, Kierownik &s);
    
    
    
    
    
private:
    Napis m_NazwaDzialu;
    int m_nliczbaPracownikow;
    
};

#endif /* Kierownik_hpp */
