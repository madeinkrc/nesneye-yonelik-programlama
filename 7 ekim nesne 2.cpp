#include <cstdlib>
#include <iostream>
#include <cstring>

// OGRENCI ADI SOYADI VE DOGUM GUNUNUN TUTULUP , SINIFLAR OLUSTURUP EKRANA YAZDIRMA
 

using namespace std;

   class tarih{
       int gun, ay, yil;
   public:
       void tarih_ata(int g, int a, int y){ // AYRI DA YAZILABILIR ASAGIDAKI GIBI*
            gun=g; ay=a; yil=y;
       }
       void print(){ // SINIFIN ICERISINDE DE YAZILABILIR.
           cout << gun << "/" << ay << "/" << yil;
       }
   };
   
   class ogrenci{
       char * adi;
	   char * soyadi;
       tarih dgun; // tarih sýnýfýndan nesne oluþturuldu [kompozisyon]
   public:
       void adi_ata(char *); // BITISIKTE YAZILABILIR YUKARIDAKI GIBI*
       void soyadi_ata(char *);
       void dgun_ata(tarih);
       void print();
   };

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
    tarih  date;
    date.tarih_ata(30,01,1996);
    ogrenci o1;
    o1.adi_ata("Sercan");
    o1.soyadi_ata("KARACA");
    o1.dgun_ata(date);
    o1.print();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
