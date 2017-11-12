#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

struct ogrenci{
       int no;
       char * adi;
       char * adres;
       
};

int main(int argc, char *argv[])
{
    ogrenci o1;
    
    o1.no = 140401034;
    
    o1.adi = (char*) malloc(sizeof(char)*20);
    printf("Ad Soyad Giriniz: ");
    char a[20];
    scanf("%s",a);
    strcpy(o1.adi,a);
    
    o1.adres = (char*) malloc(sizeof(char)*20);
    printf("Adresinizi Giriniz: ");
    char b[100];
    scanf("%s",b);
    strcpy(o1.adres,b);
  
  //Ekrana Yazdirma
    printf("%d\n",o1.no);
    printf("%s\n",o1.adi);
    printf("%s\n",o1.adres);
  
    system("PAUSE");
    return EXIT_SUCCESS;
}

