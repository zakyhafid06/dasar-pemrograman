#include <iostream>
#include <string>
using namespace std;
int main(){
string nama;
int umur;
string kota;
cout<<"--SELAMAT DATANG--"<<endl;
cout<<"masukkan identitas kamu: "<<endl;
cout<<"nama lengkap: ";
getline (cin,nama);
cout<<"umur: ";
cin>>umur;
cout<<"masukkan alamat kamu: ";
cin>>kota;
cout<<""<<endl;
cout<<"==============================="<<endl;
cout<<"         KARTU IDENTITAS       "<<endl;
cout<<"NAMA: "<<nama<<endl;
cout<<"UMUR: "<<umur<<endl;
cout<<"KOTA: "<<kota<<endl;
cout<<"==============================="<<endl;
}
