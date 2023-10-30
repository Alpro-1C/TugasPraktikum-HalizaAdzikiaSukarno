#include <iostream>
using namespace std;

int main ()
{
    int a,b;
        a = 10;
        b = 8;
        int temp; // variable tambahan 

        // Menukar Nilai Menggunakan Variable Tambahan
        cout << "nilai sebelum ditukar : ";
        cout << "\n nilai a : " << a;
        cout << "\n nilai b : " << b;

        temp = a;
        a = b;
        b = temp;

        cout << "\n\n nilai setelah ditukar : ";
        cout << "\n nilai a : " << a;
        cout << "\n nilai b : " << b;
    return 0;
}