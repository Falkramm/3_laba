//
// Created by user on 14/04/2022.
//

#include "Elements.h"

Element3::Element3(Element1 &Copy) {
    strcpy(name,Copy.name);
    Kurs=Copy.Kurs;
    Otedelenie=Copy.Otedelenie;
}
Element3::Element3(Element2 &Copy) {
    strcpy(name,Copy.name);
    Kurs=Copy.Kurs;
    Otedelenie=Copy.Otedelenie;
}


int Element::getKurs() const {
    return Kurs;
}

int Element::getOtedelenie() const {
    return Otedelenie;
}
void Element::setName(char *str){
    strcpy(name,str);
}
void Element::setKurs(int kurs) {
    Kurs = kurs;
}

void Element::setOtedelenie(int otedelenie) {
    Otedelenie = otedelenie;
}

std::ostream &operator<<(std::ostream &os, const Element &element) {
    os << "name: " << element.name << " Kurs: " << element.Kurs << " Otedelenie: " << element.Otedelenie << "\n";
    return os;
}
std::istream &operator>>(std::istream &is,  Element &element) {

    is >> element.name >> element.Kurs >> element.Otedelenie;
    return is;
}
Element1::Element1() {

    Otedelenie=0;
    Kurs=0;
}

Element2::Element2() {
    Otedelenie=0;
    Kurs=0;}

Element3::Element3() {
    Otedelenie=0;
    Kurs=0;}
Element1::Element1(char *str,int Kurs_,int Otdelenie_){
    setName(str);
    setKurs(Kurs_);
    setOtedelenie(Otdelenie_);
}
Element2::Element2(char *str,int Kurs_,int Otdelenie_){
    setName(str);
    setKurs(Kurs_);
    setOtedelenie(Otdelenie_);
}
Element3::Element3(char *str,int Kurs_,int Otdelenie_){
    setName(str);
    setKurs(Kurs_);
    setOtedelenie(Otdelenie_);
}