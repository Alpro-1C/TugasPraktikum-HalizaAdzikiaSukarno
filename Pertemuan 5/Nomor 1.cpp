 #include <iostream>

using namespace std;

//Function untuk Mencari Bilangan Ganjil
 void bilanganGanjil (int limit, int & sumGanjil){
   cout << "Bilangan Ganjil: ";
     //Output Bilangan Ganjil
     //Mencari Bilangan Ganjil

     for(int i = 0; i <= limit; i++){
        if(i % 2 != 0){
            cout << i << " "; 
            sumGanjil += i;
        }
     }

     cout << endl;
 }


//Function untuk Mencari Bilangan Genap
void bilanganGenap (int limit, int & sumGenap){
    cout << "Bilangan Genap: ";
     for(int i = 0; i <= limit; i += 2){
        cout << i << " ";
        sumGenap += i;
     }
     cout << endl;
}

//Function untuk Mencari Bilangan Prima
void bilanganPrima (int limit, int & sumPrima){
    cout << "Bilangan Prima: ";
     for(int i = 2; i <= limit; i++){
        int j;
        for(j = 2; j * j <= i && i % j != 0; j++){
        }
        if(j * j > i){
            cout << i << " ";
            sumPrima += i;
        }
     }        
     cout << endl;

}

//Function untuk Mencari Faktor Bilangan Ganjil
void faktorbilanganGanjil (int sumGanjil){
    cout << "Faktor dari Bilangan Ganjil: ";
      for (int k = 1; k <= sumGanjil; k++){
        if (sumGanjil % k == 0){
            cout << k << " ";
        }
      }   
     cout << endl;
}

//Function untuk Mencari Faktor Bilangan Genap
void faktorbilanganGenap (int sumGenap){
    cout << "Faktor dari Bilangan Genap: ";
      for (int l = 1; l <= sumGenap; l++){
        if (sumGenap % l == 0){
            cout << l << " ";
        }
      }      
     cout << endl;

}

//Function untuk Mencari Faktor Bilangan Prima
void faktorbilanganPrima (int sumPrima){
    cout << "Faktor dari Bilangan Prima: ";
      for (int m = 1; m <= sumPrima; m++){
        if (sumPrima % m == 0){
            cout << m << " ";
        }
      } 
     cout << endl;

}

//Output

int main() {
    int limit;
    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;


    cout << "Program Bilangan Ganjil, Genap, dan Prima : ";
    cout << "Masukkan batas akhir : ";
    cin >> limit; 

    //Memanggil function untuk menghasilkan bilangan
    bilanganGanjil(limit, sumGanjil);
    bilanganGenap(limit, sumGenap);
    bilanganPrima(limit, sumPrima);


    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;
    
    //Memanggil function untuk menghasilkan faktor bilangan

    faktorbilanganGanjil(sumGanjil);
    faktorbilanganGenap(sumGenap);
    faktorbilanganPrima(sumPrima);

    return 0;
}