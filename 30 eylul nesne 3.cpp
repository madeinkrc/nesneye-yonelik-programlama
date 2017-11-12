#include <cstdlib>
#include <iostream>

using namespace std;

void kare_alma(int a[][10]){
     for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            a[i][j]=a[i][j]*a[i][j];
        }   
       }
     }

int main(int argc, char *argv[])
{
    
    int A_dizi[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            A_dizi[i][j]=i+j;
                cout << A_dizi[i][j] << "  " ;
                }
    cout << endl;
        }
        
    kare_alma(A_dizi);
        for (int i=0;i<10;i++){
            for (int j=0;j<10;j++){
        cout << A_dizi[i][j] << "  " ;
        }
        cout << endl;
        }
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
