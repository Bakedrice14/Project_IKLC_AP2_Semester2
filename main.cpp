#include <iostream>
#include "allfunc.h"

using namespace std;



int main(){

    int singmut;
    int *xptr;
    xptr = &singmut;

    order pesan;

    awal:
    pesan.menu();
    cin >> singmut;

    if (*xptr == 1)
    {
        pesan.singleorder();

    }else if (*xptr == 2)
    {
        pesan.multiorder();

    }else
    {
        cout << "Invalid Input!" << endl;
        system("pause");
        goto awal;
    }
    
}