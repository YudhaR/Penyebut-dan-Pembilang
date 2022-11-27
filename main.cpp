#include <iostream>

/*
    Program Pembilang da Penyebut
    Ket : Program untuk Pembilang dan Penyebut
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    float pembilang, penyebut, hasil;

    //Algoritma
    cout << "Input Pembilang dan Penyebut : ";
    cin >> pembilang >> penyebut;
    if (penyebut==0){
        cout << "Penyebut Tidak Boleh 0 !";
    }else {
        hasil = pembilang / penyebut ;
        cout << "Hasil " << pembilang << "/" << penyebut << " : " << hasil;
    }
    return 0;
}
