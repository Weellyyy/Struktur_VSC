#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    mahasiswa mhs[3];
    for(int i=0;i<3;i++) {
        cout <<"Data ke-"<<(i+1)<<":" <<endl;
        cout << "nomor mahasiswa: ";
        getline(cin,mhs[i].nim);
        cout << "nama mahasiswa : ";
        getline(cin,mhs[i].nama);
