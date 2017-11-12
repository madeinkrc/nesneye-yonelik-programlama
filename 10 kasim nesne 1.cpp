#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Kisi
{
    string adi;
    string soyadi;
    string adresi;
    int TC_Kimlik_No;
public:
    Kisi(string, string, string, int);
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

void Kisi::set_adresi(string ad) //(string adres) olursa ; this->adres=adres;
{
    adresi=ad;
}

void Kisi::set_TC_Kimlik_No(int no)
{
    TC_Kimlik_No=no;
}

Kisi::Kisi(string a, string s, string ad, int no)
{
    set_adi(a);
    set_soyadi(s);
    set_adresi(ad);
    set_TC_Kimlik_No(no);
}

void Kisi::print()
{
    cout << "Adi : " << adi << endl;
    cout << "Soyadi : " << soyadi << endl;
    cout << "Adresi : " << adresi << endl;
    cout << "TC Kimlik NO : " << TC_Kimlik_No << endl;
}

class Ogrenci : public Kisi
{
    string O_okul;
public:
    Ogrenci(string, string, string, int, string);
    void set_O_okul(string);
    void print();
};

void Ogrenci::set_O_okul(string o)
{
    O_okul=o;
}

Ogrenci::Ogrenci(string a, string s, string ad, int no, string o) : Kisi(a,s,ad,no)
{
    set_O_okul(o);
}

void Ogrenci::print()
{
    Kisi::print();
    cout << "Okudugu Okul : " << O_okul << endl;
}


class Ogretmen : public Kisi
{
	string O_ders;
public:
	Ogretmen(string, string, string, int, string);
    void set_O_ders(string);
    void print();
};

Ogretmen::Ogretmen(string a, string s, string ad, int no, string od) : Kisi(a,s,ad,no)
{
    set_O_ders(od);
}

void Ogretmen::set_O_ders(string od)
{
    O_ders=od;
}

void Ogretmen::print()
{
    Kisi::print();
    cout << "Verdigi Ders : " << O_ders << endl;
}


int main()
{
    Ogrenci o1("Sercan","KARACA","Ataturk Mah. Istanbul",12345678,"Atakent Lisesi");
    o1.print();

	cout << endl;

	Ogretmen og1("Ibrahim","TURKYILMAZ","Barbaros Mah. Canakkale",87654321,"Nesneye Yonelik Programlama");
	og1.print();

}
