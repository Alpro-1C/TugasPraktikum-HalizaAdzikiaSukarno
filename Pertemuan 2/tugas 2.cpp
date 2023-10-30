#include <iostream>
using namespace std;

int main (){
    int N,M;

    cout << "ekor bebek punya pak tatang: ";
    cin >> N;

    cout << "diberikan kepada masing masing temannya: ";
    cin >> M;

    int jumlah_bebek_yang_diberikan = N / M;
    int sisa_bebek_pak_tatang = N % M;

    cout << "jumlah bebek yang diberikan kepada masing masing temannya: " << jumlah_bebek_yang_diberikan << endl;
    cout << "jumlah sisa bebek pak tatang: " << sisa_bebek_pak_tatang << endl;

    return 0;
}