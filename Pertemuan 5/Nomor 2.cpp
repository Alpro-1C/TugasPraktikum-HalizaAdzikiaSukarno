#include <iostream>

using namespace std;

void pyramid(){
   cout << "Membuat Piramida Bintang" << endl;
   int n;

   cout << "Masukkan tinggi piramida :";
   cin >> n;

   char currentchar = '*';
   for (int i = 0; i <= n; i++){
    for (int j = n; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        cout << currentchar << " ";
    }
    cout << endl;
   }
}

int main(){
   pyramid();

   return 0;
}