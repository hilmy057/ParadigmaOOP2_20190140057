#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"NO Induk = "<<nim<<end1;

    }
};

int main(){
    mahasiswa mhs(1);
    mhs.showNim();

    mahasiswa brefMhs = mhs;
}