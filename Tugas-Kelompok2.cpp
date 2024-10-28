//Kelompok 2: 1.Vahmi reidina achagi (24104410094)
//            2.Muhammad Putra Apridika (24104410075)
//            3.Adile Ikhsan Muhammad Al Masyhuri (24104410071)
//            4.Dimas Akbar Maulana (24104410059)
//            5.Premas Aji Susilo (24104410055)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()

{
    string a;
    cout << "Check Kata\n";
    cout << "Input Kata: ";
    getline(cin, a);

    string b = a;
    reverse(b.begin(),b.end());

    if (a==b) {
        cout << "Hasil : True\n";
    } else {
        cout << "Hasil : False\n";
    }
    cout << a << "\n" << b;
    return 0;
}
