#include <iostream>

using namespace std;

class Kisi
{
    string adi;
    string soyadi;
    string adresi;
    int TC_Kimlik_No;
public:
    Kisi(string,string,string,int);
    void set_adi(string);
    void set_soyadi(string);
    void set_adresi(string);
    void set_TC_Kimlik_No(int);
    void print();
};

void Kisi::set_adi(string a)
{
    adi=a;
}

void Kisi::set_soyadi(string s)
{
    soyadi=s;
}

void Kisi::set_adresi(string ad)
{
    adresi=ad;
}

void Kisi::set_TC_Kimlik_No(int no)
{
    TC_Kimlik_No=no;
}

Kisi::Kisi(string a,string s,string ad,int no)
{
    set_adi(a);
    set_soyadi(s);
    set_adresi(ad);
    set_TC_Kimlik_No(no);
}

void Kisi::print()
{
    cout << "ADI :" << adi << endl;
    cout << "SOYADI :" << soyadi << endl;
    cout << "ADRESI :" << adresi << endl;
    cout << "TC KIMLIK NO :" << TC_Kimlik_No << endl;
}


class Ogrenci : public Kisi
{
    string okul;
public:
    Ogrenci(string,string,string,int,string);
    void set_okul(string);
    void print();
};

void Ogrenci::set_okul(string o)
{
    okul=o;
}

Ogrenci::Ogrenci(string a,string s,string ad,int no,string o) : Kisi(a,s,ad,no)
{
    set_okul(o);
}

void Ogrenci::print()
{
    Kisi::print();
    cout << "OKULU  :" << okul << endl;
}


class Ogretmen : public Kisi
{
    string ders;
public:
    Ogretmen(string,string,string,int,string);
    void set_ders(string);
    void print();
};

void Ogretmen::set_ders(string d)
{
    ders=d;
}

Ogretmen::Ogretmen(string a,string s,string ad,int no,string d) : Kisi(a,s,ad,no)
{
    set_ders(d);
}

void Ogretmen::print()
{
    Kisi::print();
    cout << "VERDIGI DERS  :"  << ders << endl;
}

int main()
{
    Ogrenci o1("SERCAN","KARACA","ISTANBUL",140401034,"COMU");
    o1.print();

    Ogretmen o2("SURGEON","KARADJA","CANAKKALE",1234567,"MATEMATIK");
    o2.print();

}
