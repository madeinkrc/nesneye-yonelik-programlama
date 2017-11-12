#include <cstdlib>
#include <iostream>
/** SORU (2 ARALIK)
Çeþitli þekillerin ifade edilebilmesi için "sekil" isminde
bir temel sýnýfý ve "dogru" , "ucgen" ve "dikdortgen" isimlerinde
türetilmiþ sýnýflarý tasarlayýnýz.
Her bir sýnýf, sýnýflara ait olmayan tek bir "goster()" fonksiyonunu
kullanarak ilgili sýnýfýn kendisine ait verilerin deðerlerini ekrana yazdýrsýn.
**/
using namespace std;

class Nokta
{
    int x,y;
public:
    Nokta(int=0,int=0);
    void print();
    friend ostream & operator << (ostream &, const Nokta &);
};

Nokta::Nokta(int x,int y)
{
    this->x=x;
    (*this).y=y;
}

void Nokta::print()
{
    cout << "(" << x << "," << y << ")";
}

ostream & operator << (ostream &out, const Nokta &n)
{
    out << "(" << n.x << "," << n.y << ")";
    return out;
}

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

class Sekil
{
    Nokta n1;
public:
    Sekil(Nokta);
    virtual void print();
};

Sekil::Sekil(Nokta n_new)
{
    n1=n_new;
}

void Sekil::print()
{
    ///cout << "Sekil Sinifi Yazdiricisi: " << endl;
    cout << n1;
    ///Asiri yuklenmeseydi cout << n1.print(); yazacaktýk.
}

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

class Dogru : public Sekil
{
    Nokta n2;
public:
    Dogru(Nokta,Nokta);
    void print();
};

Dogru::Dogru(Nokta n1_new,Nokta n2_new) : Sekil(n1_new) /// Yapici baslaticiyla cagiriyoruz.
{
    n2=n2_new;
}

void Dogru::print()
{
    cout << "Dogru Sinifi Yazdiricisi: " << endl;
    Sekil::print();
    cout << n2;
}

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

class Ucgen : public Sekil
{
    Nokta n2,n3;
public:
    Ucgen(Nokta,Nokta,Nokta);
    void print();
};

Ucgen::Ucgen(Nokta n1_new,Nokta n2_new,Nokta n3_new) : Sekil(n1_new)
{
    n2=n2_new;
    n3=n3_new;
}

void Ucgen::print()
{
    cout << "Ucgen Sinifi Yazdiricisi: " << endl;
    Sekil::print();
    cout << n2 << n3;
}

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

///POINTERLA
void goster(Sekil * s)
{
    s->print();
}

int main(int argc, char *argv[])
{

    Nokta n1(5,5) , n2(10,10) , n3(10,5);
    Dogru d1(n1,n2);
    d1.print();

    Ucgen u1(n1,n2,n3);
    Sekil *s1;  //pointer

    char c;
    cout << "Dogru (d), Ucgen (u) Bilgilerini ekrana yazdir: " << endl;
    cin >> c;

    if (c=='d'){s1=&d1;}
    else if (c=='u'){s1=&u1;}
	else if (c!='d' || c!='u') 
	{cout << "Hatali giris..."; return 0;}
    goster(s1);

    system("PAUSE");
    return EXIT_SUCCESS;
}
