#include <cstdlib>
#include <iostream>

using namespace std;

void swap (int &a,int &b){
     int temp;
     temp=a;
     a=b;
     b=temp;
}
int main()
{
    int x=5;
    int y=6;
    cout <<"Onceki degerler x= "<< x <<", y=" << y << endl;
    swap(x,y);
    cout <<"Sonraki degerler x= "<< x <<", y=" << y << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
