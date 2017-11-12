#include <cstdlib>
#include <iostream>

using namespace std;

      class Point {
            int x,y;
      public:
             void move(int,int);
             void print();
             bool is_zero();
      };
      
      void Point::move(int new_x,int new_y){
           x=new_x;
           y=new_y;
      };
      
      void Point::print(){
           cout << " X= " << x << ",Y=" << y << endl;
      };
      
      bool Point::is_zero(){
           return(x==0)&&(y==0);
      };
      
int main(int argc, char *argv[])
{
    Point point1,point2;
    
    point1.move(100,50);
    point1.print();
    
    point1.move(20,65);
    point1.print();
    
    if(point1.is_zero())
        cout << "point1 is now on zero point(0,0)" << endl;
    else
        cout << "point1 is NOT on zero point(0,0)" << endl;
    point2.move(0,0);
    
    if(point2.is_zero())
        cout << "point2 is now on zero point(0,0)" << endl;
    else
        cout << "point2 is NOT on zero point(0,0)" << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
