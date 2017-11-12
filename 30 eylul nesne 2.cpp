#include <cstdlib>
#include <iostream>

using namespace std;

void kare_alma(int a[]){ // (int *a) da kullanilabilir
     for (int i=0;i<10;i++){
        a[i]=a[i]*a[i];
        }
     
     }

int main(int argc, char *argv[])
{
    //(int*)malloc(10*sizeof(int)); C MANTIGI;
    int A_dizi[10]; // int *A_dizi = new int[10]; C++ MANTIGI
    for (int i=0;i<10;i++){
        A_dizi[i]=i+1;
        cout << "A_dizi[" << i << "] = " << A_dizi[i] << endl;
        }
        
    kare_alma(A_dizi);
        for (int i=0;i<10;i++){
        cout << "A_dizi[" << i << "] = " << A_dizi[i] << endl;
        }
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
