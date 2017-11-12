#include <iostream>

using namespace std;

void f(){

    static int saydir=0; ///static olmasaydi ; deger her defasinda 0 alinirdi.
    cout << "Bu fonksiyon " << ++saydir << " defa cagrildi." << endl;
}

int main()
{
    for (int i=0 ; i<20 ; i++)
        f();

    f();

    for (int i=0 ; i<10 ; i++)
        f();

    return 0;
}
