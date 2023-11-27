#include <iostream>
using namespace std;

int main() {
    const int arraySize = 9; // Ukuran array
    int myArray[arraySize] = {10, 4, 5, 11, 3, 2, 8, 12, 9}; // Deklarasi array dan nilai-nilai

    int maxValue = myArray[0];
    int maxIndex = 0;

    // Mencari nilai tertinggi dan indeksnya dalam array
    for (int i = 1; i < arraySize; ++i) {
        if (myArray[i] > maxValue) {
            maxValue = myArray[i];
            maxIndex = i;
        }
    }

    // Menampilkan hasil
    cout << "Nilai tertinggi dalam array: " << maxValue << endl;

    if (maxIndex != -1) {
        cout << "Nilai tersebut ditemukan pada indeks: " << maxIndex << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

    return 0;
}
