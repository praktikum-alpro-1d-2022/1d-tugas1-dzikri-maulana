#include<iostream>
using namespace std;
int main(){
    cout<<"==========Penukaran nilai dua variabel tanpa bantuan variabel sementara==========\nmasukkan nilai berupa integer saja"<<endl;
    cout<<"Silahkan masukkan nilai A\t : ";
    int A,B;
    cin>>A;
    cout<<"\nSilahkan masukkan nilai B\t : ";
    cin>>B;
    cout<<"============================================"<<endl;
    cout<<"Nilai Pertama sebelum ditukar adalah = "<< A <<endl;
    cout<<"Nilai Kedua sebelum ditukar adalah = "<< B <<endl;
    cout<<"============================================"<<endl;
    cout<<"Dengan metode penukaran tanpa menggunakan variabel sementara maka didapat :"<<endl;
    A=A+B;
    B=A-B;
    A=A-B;
    cout<<"============================================"<<endl;
    cout<<"Nilai Pertama setelah ditukar adalah = "<<A<<endl;
    cout<<"Nilai Kedua setelah ditukar adalah = "<<B<<endl;
    cout<<"============================================"<<endl;
return 0;
}

