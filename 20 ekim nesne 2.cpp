#include <iostream>

/// STATIK SINIF UYELERI 20.10.2015

using namespace std;

class A{
    char c;
    static int number;
public:
    static void setNum(){number=0;}
    A(){number++, cout << "\n" << "Yapici " << number << endl;}
    ~A(){number--, cout << "\n" << "Yikici " << number << endl;}
};

int A::number;

int main()
{
    A::setNum();
    {

        cout << "\n Entering 1.BLOK....";

        A a,b,c;
        {
            cout << "\n Exiting 2.BLOK....";
            A d,e;
            cout << "\n Exiting 3.BLOK....";
        }
    }
    return 0;
}
