#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukkan nama file :";
    cin >> NamaFile;

    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + "txt", ios::in);

    cout << endl << ">= membuka dan membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file  tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}