//Kelompok 2: 1.Vahmi reidina achagi (24104410094)
//            2.Muhammad Putra Apridika (24104410075)
//            3.Adile Ikhsan Muhammad Al Masyhuri (24104410071)
//            4.Dimas Akbar Maulana (24104410059)
//            5.Premas Aji Susilo (24104410055)
                         

#include <iostream>

using namespace std;

int main(){
    string kata, katabalik;

    cout << "check kata" << "\n";
    cout << "input kata : ";
    cin >> kata;

    for (int i = kata.length()-1; i >= 0; i--)
    {
        katabalik += kata[i];
    }
    if (kata == katabalik){
        cout << "hasil : true\n" << kata << "\n" << katabalik;
        cout << "\nkata : " << kata << " kata palindrom";
    }
    else {
        cout << "hasil : false\n" << kata << "\n" << katabalik;
        cout << "\nkata : " << kata << " bukan kata palindrom";
    }
    return 0;
}