#include <cstdlib>
#include <iostream>
/*
(3.KASIM.2015-SALI)
Matematik te kullan�lan k�me kavram�n�n bir soyutlamas� olan k�me
s�n�f�n�n olusturulmas� istenmektedir.Bu s�n�f�n k�meye eleman ekleme,
k�meden eleman ��karma, k�melerin birle�imi ve fark� gibi i�lemleri
yerine getirmelidir (burada ekleme ve ��karma i�in  + ve - operat�rlerinin
a��r� y�klenmesi istenmektedir.)
Hat�rlatma : K�me , tekrar etmeyen ve birbirinden farkl� elemanlar�n 
koleksiyonundan olu�ur
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
	Set operator-(char ch); // eleman ��karma

	Set operator+(Set ob); // k�melerin birle�imi
	Set operator-(Set ob); // k�melerin fark�
};

void Set::showSet(){
     cout << "{" ;
     for(int i=0 ; i<len-1 ; i++){ // sonuna , koymamak i�in len-1 ald�k.
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
    //eleman bulunamazsa 0 geri d�ner.
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

