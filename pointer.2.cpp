#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"NO Induk = "<<nim<<endl;

    }
};

int main (){
    mahasiswa *mhs = new mahasiswa(1);
    mhs->nim
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0; 
};