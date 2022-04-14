//
// Created by user on 14/04/2022.
//

#ifndef INC_3_LABA_ELEMENTS_H
#define INC_3_LABA_ELEMENTS_H

#include <cstring>
#include <iostream>

class Element {
public:
    const char *getName() const;

    int getKurs() const;

    int getOtedelenie() const;

public:
    void setName(char *str);

    void setKurs(int kurs);

    void setOtedelenie(int otedelenie);

    friend std::ostream &operator<<(std::ostream &os, const Element &element);

    friend std::istream &operator>>(std::istream &is, Element &element);

    char name[50];
    int Kurs;
    int Otedelenie;
};


class Element1 : public Element {
public:
    Element1();

    Element1(char *str, int Kurs_, int Otdelenie);
};

class Element2 : public Element {
public:
    Element2();

    Element2(char *str, int Kurs_, int Otdelenie);
};

class Element3 : public Element {
public:
    Element3();

    Element3(char *str, int Kurs_, int Otdelenie);

    Element3(Element1 &Copy);

    Element3(Element2 &Copy);
};


#endif //INC_3_LABA_ELEMENTS_H
