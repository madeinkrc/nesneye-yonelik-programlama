#include <iostream>

/**
11 KASIM
Çeþitli þekillerin ifade edilebilmesi icin "sekil" isminde bir temel sýnýf ve
"dogru","ucgen" ve "dikdortgen" isimlerinde türetilmiþ sýnýflar tasarlayýnýz.
Doðrunun uzunluðu , Üçgen ve Dikdörtgenin çevre uzunluklarý ve alanýný
hesaplayan fonksiyonlarýn kodlamasýný da yapýnýz.
Her bir sýnýf, kendisine ait "print()" fonksiyonunu kullanarak veri üyelerinin
(kullanýlan noktalarýn) deðerlerini ekrana yazdýrsýn.
**/

using namespace std;

class nokta
{
    int x,y;
public:
    nokta(int=0,int=0);
    void print();
    friend ostream & operator << (ostream &, const nokta &);
};

nokta::nokta(int x1, int y1)
{
    x=x1;
    y=y1;
}

void nokta::print()
{
    cout << "(" << x << ", " << y << ")";
}

ostream & operator << (ostream & o, const nokta & n)
{
    o << "(" << n.x << "," << n.y << ")";
    return o;
}



class sekil
{
protected:
    nokta n1; /// KOMPOZISYON (Sahip Olma Ýliþkisi)
public:
    sekil(nokta);
    sekil(int=0,int=0);
    void print();
    friend ostream & operator << (ostream &, const sekil &);
};


sekil::sekil(nokta n_yeni)
{
    n1=n_yeni;
}

sekil::sekil(int x1, int y1)
{
    n1=nokta(x1,y1);
}

ostream & operator << (ostream & o, const sekil & s)
{
    o << s.n1; /// ÖNEMLÝ
    return o;
}

void sekil::print()
{
    cout << n1;
}



class dogru : public sekil
{
protected:
    nokta n2;
public:
    dogru(nokta,nokta); ///Bir tanesi "sekil" den gelen nokta icin.
    dogru(int,int,int,int);
    void print();
    friend ostream & operator << (ostream &, const dogru &);
};

dogru::dogru(nokta n1_yeni,nokta n2_yeni)
{
    n1=n1_yeni;
    n2=n2_yeni;
}

dogru::dogru(int x1, int y1, int x2, int y2)
{
    n1=nokta(x1,y1);  /// NOKTA ICIN YAPICIYI CAGIRMIS OLDUK.
    n2=nokta(x2,y2);
}

void dogru::print()
{
    cout << endl << "Dogru icin bilgiler : " << endl;
    cout << "n1 = " << n1 << ", n2 = " << n2;
}

ostream & operator << (ostream &o, const dogru &d)
{
    o << endl << "Dogru icin bilgiler : " << endl;
    o << "n1 = " << d.n1 << ", n2 = " << d.n2;
	return o;
}


class ucgen : public sekil
{
	nokta n2;
	nokta n3;
public:
	ucgen(nokta,nokta,nokta);
	ucgen(int,int,int,int,int,int);
	void print();
	friend ostream & operator << (ostream &, const ucgen &);
};

ucgen::ucgen(nokta n1_new,nokta n2_new,nokta n3_new)
{
	n1=n1_new;
	n2=n2_new;
	n3=n3_new;
}

ucgen::ucgen(int x1, int y1, int x2, int y2, int x3, int y3)
{
	n1=nokta(x1,y1);
	n2=nokta(x2,y2);
	n3=nokta(x3,y3);
}

int main()
{
    sekil s1(10,10);
    s1.print();
    cout << endl << s1;

    nokta nn1(10,10) , nn2(20,20);
    dogru d1(nn1, nn2);
    cout << d1;

    dogru d2(nokta(5,5), nokta(15,15));
    cout << d2;
    
    ucgen u1(nokta(5,5),nokta(5,5),nokta(5,5));
    cout << u1;


}
