#include <cstdlib>
#include <iostream>

// DIKPRIZMA ISIMLI BIR SINIF OLUSTURULACAK
// EN, YUKSEKLIK VE DERINLIK BILGISIYLE HACIM HESAPLANMASI ISTENECEK

using namespace std;

      class dikprizma{
          double en, derinlik, yukseklik; //SINIFIN VERI UYELERI
      public:
          void deger_ata(double, double, double);
          double hacim();
          void print();
      }; //SINIFIN SONUNDA ; KULLANILMAK ZORUNDA

      void dikprizma::deger_ata(double e, double d, double y){
           en=e; derinlik=d ; yukseklik=y;
      }
      
      double dikprizma::hacim(){
           return en*derinlik*yukseklik;
      }
      
      void dikprizma::print(){
           cout << "Dik prizmaya ait olculer: " << endl;
           cout << "En: " << en << endl;
           cout << "Derinlik: " << derinlik << endl;
           cout << "Yukseklik: " << yukseklik << endl;
           cout << "Hacim: " << hacim() << endl;
      }
      
int main(int argc, char *argv[])
{ // d1 ARTIK BIZIM BIR NESNEMIZ KEK KALIBI ORNEGI 
    dikprizma d1; //NESNE SINIFIN BIR ORNEGI
    d1.deger_ata(3,5,7);
    d1.print();
    
    cout << endl;
    cout << "Prizmanin Hacmi: " << d1.hacim() << endl; //BU DA DOGRUDUR
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
