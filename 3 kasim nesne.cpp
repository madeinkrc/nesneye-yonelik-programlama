#include <cstdlib>
#include <iostream>
/*
(3.KASIM.2015-SALI)
Matematik te kullanýlan küme kavramýnýn bir soyutlamasý olan küme
sýnýfýnýn olusturulmasý istenmektedir.Bu sýnýfýn kümeye eleman ekleme,
kümeden eleman çýkarma, kümelerin birleþimi ve farký gibi iþlemleri
yerine getirmelidir (burada ekleme ve çýkarma için  + ve - operatörlerinin
aþýrý yüklenmesi istenmektedir.)
Hatýrlatma : Küme , tekrar etmeyen ve birbirinden farklý elemanlarýn 
koleksiyonundan oluþur
*/
using namespace std;

const int MaxSize=100;

class Set{
	int len;
	char members[MaxSize];
	int find (char ch); // eleman bulma
public:
	Set(){len=0;}

	int getLenght( ){return len;}
	
	void showSet();
	bool isMember(char ch);

	Set operator+(char ch); // eleman ekleme
	Set operator-(char ch); // eleman çýkarma

	Set operator+(Set ob); // kümelerin birleþimi
	Set operator-(Set ob); // kümelerin farký
};

void Set::showSet(){
     cout << "{" ;
     for(int i=0 ; i<len-1 ; i++){ // sonuna , koymamak için len-1 aldýk.
          cout << members[i] << ",";
     }
     cout << members[len-1];
     cout << "}"; 
     cout << endl;
}

bool Set::isMember(char ch){
     for(int i=0 ; i<len ; i++){
         if(members[i]==ch)
         return 1;
     }
     return 0;
}     

Set Set::operator+(char ch){
    if(len==MaxSize-1)
        cout << "Daha fazla eklenemez" << endl;
    else if(!isMember(ch))
        members[len++]=ch;
        
    return *this;
}

Set Set::operator-(char ch){
    if(isMember(ch)){
        for(int i=find(ch)-1 ; i<len-1 ; i++){
            members[i]=members[i+1];
        }        
        len--;
    }
    return *this;
}

int Set::find (char ch){
    for(int i=0 ; i<len; i++){
            if(members[i]==ch)
            return i+1;
    }
    return 0; 
    //aranan eleman bulunursa kacinci eleman oldugu geri doner
    //eleman bulunamazsa 0 geri döner.
}


int main(int argc, char *argv[])
{
    Set kume1,kume2;
    kume1+'a';
    kume1+'b';
    kume1+'c';
    kume1+'d';
    kume1+'e';
    kume1-'e';
    kume1.showSet();

     
    system("PAUSE");
    return EXIT_SUCCESS;
}


/*
Set Set::operator+(char ch){
    if(len==MaxSize-1)
        cout << "Daha fazla eklenemez" << endl;;
    else if(!isMember(ch))
        members[len++]=ch;
        
    return *this;
}
*/

