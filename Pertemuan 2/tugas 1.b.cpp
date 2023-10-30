#include <iostream>
using namespace std;
int main()
    {
        int a,b;
        a = 10;
        b = 8;
        // Menukar nilai bilangan tanpa menggunakan variable tambahan
        cout<<"firstvalue = 10 "<<endl;
        cout<<"secoundvalue = 8 "<<endl<<endl;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"jadi, nilai a = "<<a<<" dan nilai b = "<<b<<" "<<endl;
        //
        return 0;
    }

