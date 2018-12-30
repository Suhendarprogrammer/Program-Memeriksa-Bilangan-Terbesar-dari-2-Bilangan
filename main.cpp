#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"*********PROGRAM MEMERIKSA BILANGAN TERBESAR DARI 2 BILANGAN**********";
    cout<<"=====================================================================\n";
    cout<<"\nMasukkan Bilangan Pertama  : ";
    cin>>a;
    cout<<"\nMasukkan Bilangan Ke Dua   : ";
    cin>>b;
    cout<<"\n======================================================\n";
    if (a<b){
        cout<<"\nMaka, Bilangan Kedua Adalah Yang Terbesar ";}
    else
        if (a>b){
        cout<<"Maka, Bilangan Pertama Adalah Yang Terbesar ";}
    else
        return 0;
}
