#include<iostream>
using namespace std;
int main(){
    cout<<"==========Penukaran nilai dua variabel dengan bantuan variabel sementara==========\nmasukkan nilai berupa integer saja"<<endl;
    cout<<"Silahkan masukkan nilai Pertama\t : ";
    int A,B,vartm;
    cin>>A;
    cout<<"\nSilahkan masukkan nilai Kedua\t : ";
    cin>>B;
    cout<<"============================================"<<endl;
    cout<<"Nilai Pertama sebelum ditukar adalah = "<< A <<endl;
    cout<<"Nilai Kedua sebelum ditukar adalah = "<< B <<endl;
    cout<<"============================================"<<endl;
    cout<<"Dengan metode penukaran menggunakan variabel sementara maka didapat :"<<endl;
    vartm=A;
    A=B;
    B=vartm;
    cout<<"============================================"<<endl;
    cout<<"Nilai Pertama setelah ditukar adalah = "<<A<<endl;
    cout<<"Nilai Kedua setelah ditukar adalah = "<<B<<endl;
    cout<<"============================================"<<endl;
    return 0;
}
