#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

class ogrenci{
     public:
            int no;
            char * adi;
            char * adres; 
            ogrenci(int x, char * y, char * z){
                        
                        no=x;
                        
                        adi=(char*) malloc(sizeof(y));
                        strcpy(adi,y);
                        
                        adres=(char*) malloc(sizeof(z));
                        strcpy(adres,z);
                                               };
     void print(){
          
          printf("NO: %d\n",no);
          printf("ADI: %s\n",adi);
          printf("ADRES: %s\n",adres);
          };
          

};


int main(int argc, char *argv[])
{
    
    ogrenci o1(140401034,"Sercan","Canakkale");
    
    o1.print();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
