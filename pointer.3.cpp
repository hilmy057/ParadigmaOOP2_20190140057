#include <iostream>
#include <string>
using namespace std; 

class siswa;

class orang{
private:
    string nama;
public:
    void setNama(string pNama);
    friend class siswa;
};
class siswa{
private
    int id;
public:
    void setId(int PId);
    void displayA11(orang &a){
        cout<<id<<endl<a.nama;
    }

}

int main(){
    orang joko;
    joko.setNama("Joko Kumat"0);
    siswa joko_siswa;
    joko_siswa Set ID(1);
    joko_siswa.displayA11(joko);
    return 0;
}