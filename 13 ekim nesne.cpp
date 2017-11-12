#include <cstdlib>
#include <iostream>
#include <cmath>

// IKINCI DERECEDEN DENKLEMLERI IFADE EDEN DENKLEM ISIMLI SINIFI OLUSUTURUN VE
// X^2-3X+2=0 DENKLEMININ KOKLERINI BULACAK KODU YAZINIZ

using namespace std;

      class Denklem{
          double a, b, c;
      public:
      	  Denklem(double, double, double);
          void katsayi_ata(double, double, double);
          void coz();
      };

      void Denklem::katsayi_ata(double x, double y, double z){
           a=x; b=y; c=z;
      }
      
      void Denklem::coz(){
           double x1,x2;
           double delta=b*b-4*a*c;
           if(delta >=0){
               x1=(-b +sqrt(delta))/(2*a);
               x2=(-b -sqrt(delta))/(2*a);
               cout << "Verilen Denklemin Kokleri:" << endl;
               cout << "x_1 = " << x1 << endl;
               cout << "x_2 = " << x2 << endl;
           }
           else
           {
           cout << "Denklemin Reel Koku Yoktur" << endl;
           }
      }
                    
    Denklem::Denklem(double a, double b, double c){
		this->a=a; this->b=b; this->c=c;
	}
    
int main(int argc, char *argv[])
{
    
   
    //d1.katsayi_ata(a,b,c);
    Denklem d1(2,-3,2);
    d1.coz();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

// COZUM YOLU
// 1- KATSAYILARIN GIRILMESI GEREKIYOR
// 2- DENKLEMI COZ coz() FONKSIYONUNUN UYE FONKSIYON OLARAK TASARLANMALI 
