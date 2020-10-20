#include <iostream>
#include <string>

using namespace std;

class account{
public:
    // Informasi
    int posgnj;
    int neggnj;
    int posgnp;
    int neggnp;

    //member function
    int getposgnj ( void );
    int getneggnj ( void );
    int getposgnp ( void );
    int getneggnp ( void );

    //constructor
    account (int inputposgnj, int inputneggnj, int inputposgnp, int inputneggnp){
        account::posgnj = inputposgnj;
        account::neggnj = inputneggnj;
        account::posgnp = inputposgnp;
        account::neggnp = inputneggnp;
    }
};

//deskripsi functionnya
int account::getposgnj ( void ) {
    return posgnj;
}

int account::getneggnj ( void ) {
    return neggnj;
}

int account::getposgnp ( void ){
    return posgnp;
}

int account::getneggnp ( void ){
    return neggnp;
}

//main program
int main(){

    account account1 = account ( 3, -3, 4, 7);
    if ( account1.posgnj % 2 != 0){
        cout << " Nilai nya adalah Positip ganjil " << endl;
    }
    else {
        cout << " Nilainya bukan positip ganjil " << endl;
    }
    if (account1.neggnj % 2 <= 0){
        if (account1.neggnj % 2 < 0 ){
            cout << " Nilainya adalah negatip ganjil" << endl;
        }
        else {
            cout << " nilainya adalah bukan negatif ganjil" << endl;
        }
    }
    else{
        cout << " nilainya adalah bukan negatip ganjil" << endl;
    }
    if (account1.posgnp % 2 == 0){
        cout << " Nilainya adalah Positip Genap" << endl;
    }
    else {
        cout << " Nilainya adalah bukan Positip Genap " << endl;
    }
    if (account1.neggnp % 2 == 0){
        if (account1.neggnj % 2 < 0 ){
            cout << " Nilainya adalah bukan negatip genap" << endl;
        }
        else {
            cout << " nilainya adalah negatif genap" << endl;
        }
    }
    else {
        cout << " Nilainya adlaha Bukan Negatif Genap" << endl;
    }

    return 0;
}
