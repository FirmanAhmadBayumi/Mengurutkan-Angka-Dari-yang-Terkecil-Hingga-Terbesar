#include <iostream>
using namespace std;
int main()
{
    int angka[6], a, b, c, temp;
    for (a=1; a<=5; a++){
        cout << "Masukkan Bilangan ke "<< a <<": ";
        cin >> angka[a];
    }
    cout << "Hasil pengurutan bilangan kecil ke besar : " <<endl;
    for (b=1; b<=5; b++){
        for (c=1; c<=5; c++){
            if (angka[b] < angka[c]){
                temp = angka[b];
                angka[b] = angka[c];
                angka[c] = temp;
            }
        }
    }
    for (b=1; b<=5; b++){
        cout << angka[b] << ", ";
    }
    return 0;
}