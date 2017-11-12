#include <cstdlib>
#include <iostream>
#include <cstring>

// OGRENCI ADI SOYADI VE DOGUM GUNUNUN TUTULUP , SINIFLAR OLUSTURUP EKRANA YAZDIRMA
// 14 EKIM CARSAMBA (7 EKIM 2 YI YAPICI FONSIYONLA DEGISTIRME)

using namespace std;

   class tarih{
       int gun, ay, yil;
   public:
       tarih(int g=0, int a=0, int y=0){ // YAPICI FONKSIYON
            gun=g; ay=a; yil=y;
       } 
       void tarih_ata(int g, int a, int y){ // AYRI DA YAZILABILIR ASAGIDAKI GIBI*
            gun=g; ay=a; yil=y;
       }
       void print(){ // SINIFIN ICERISINDE DE YAZILABILIR.
           cout << gun << "/" << ay << "/" << yil;
       }
   };
   
   class ogrenci{
       char * adi, * soyadi;
       tarih dgun;
   public:
       ogrenci(char*, char *, tarih); // YAPICI FONKSIYON
       void adi_ata(char *); // BITISIKTE YAZILABILIR YUKARIDAKI GIBI*
       void soyadi_ata(char *);
       void dgun_ata(tarih);
       void print();
   };
   
   ogrenci::ogrenci(char *a, char *s, tarih d){
                         adi_ata(a);        
                         soyadi_ata(s);
                         dgun_ata(d);
                         }

    void ogrenci::adi_ata(char *a){
        adi=new char(strlen(a)+1); // STRING KARAKTERININ SONUNU GETIRSIN DIYE +1
        // MALLOC LA YAPIMI adi= malloc(sizeof(char)*strlen(a)+1);
        strcpy(adi,a); // ADI NIN ICERISINE A YI AKTARIYORUZ
   }
   
    void ogrenci::soyadi_ata(char *s){
        soyadi=new char(strlen(s)+1); // STRING KARAKTERININ SONUNU GETIRSIN DIYE +1
        // MALLOC LA YAPIMI soyadi= malloc(sizeof(char)*strlen(s)+1);
        strcpy(soyadi,s); // SOYADI NIN ICERISINE S YI AKTARIYORUZ
   }
   
    void ogrenci::dgun_ata(tarih d){
        dgun=d;
    }
          
    void ogrenci::print(){
         cout << "Ogrenci Bilgileri: " << endl;
         cout << "Adi: " << adi << endl;     
         cout << "Soyadi: " << soyadi << endl; 
         cout << "Dogum Gunu: " ;
         dgun.print();
         cout << endl;
    }
          

int main(int argc, char *argv[])
{
    
    tarih date(30,01,1996);
    //date.tarih_ata(30,01,1996);

    ogrenci o1("Sercan","KARACA",tarih(30,01,1996)); //tarih(30,01,1996) yerine date yazilabilir
    //o1.adi_ata("Sercan");
    //o1.soyadi_ata("KARACA");
   // o1.dgun_ata(date);
    o1.print();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
