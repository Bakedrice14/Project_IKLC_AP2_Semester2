#include <iostream>

using namespace std;

struct buyer
{
    string nama;
    int pesmin;
    int pesmak;
};

class order{

    public:

    buyer pembeli;

    void menu();
    void singleorder();
    void multiorder();
    void hitung(int pesmak, int pesmin);
};

struct food
{
    string nama;
    double harga;
};

food arrfood[] = {

    {
        "Indomie Original",
        15000
    },

    {
        "Indomie Warkop",
        20000
    },

    {
        "Sate Padang",
        5000
    },
    
    {
        "Ayam Penyet",
        45000
    },

    {
        "Burger",
        10000
    },

    {
        "Pizza",
        50000
    },

    {
        "Steak Daging",
        51000
    }
};

food arrdrink[] = {

    {
        "Americano ",
        20000
    },

    {
        "Teh",
        5000
    },

    {
        "Nutrisari",
        10000
    },
    
    {
        "Kopi Kapal Api",
        7000
    },

    {
        "Jamu Kuat",
        50000
    },

    {
        "Teh susu telur",
        25000
    },

    {
        "Susu",
        15000
    }
};

void order::menu(){

    system("cls");
    cout << "Selamat datang di Poji Coffee \n\n";

    cout << "Makanan :                                            Minuman : \n"; 
    cout << "0. Indomie Original        15.000                    0. Americano            20.000\n";
    cout << "1. Indomie Warkop          20.000                    1. Teh                   5.000\n";
    cout << "2. Sate Padang              5.000                    2. Nutrisari            10.000\n";
    cout << "3. Ayam Penyet             45.000                    3. Kopi Kapal Api        7.000\n";
    cout << "4. Burger                  10.000                    4. Jamu Kuat            50.000\n";
    cout << "5. Pizza                   50.000                    5. Teh susu telur       25.000\n";
    cout << "6. Steak Daging            51.000                    6. Susu                 15.000\n\n";

    cout << "*input 7 jika tidak ada pesanan \n\n";

    cout << "1. Single Order \n";
    cout << "2. Multi Order \n";
    cout << ">> ";
}

void order::singleorder(){

    cout << "Nama : ";
    cin >> pembeli.nama;

    cout << "Minuman : ";
    cin >> pembeli.pesmin;

    cout << "Makanan : ";
    cin >> pembeli.pesmak;

    hitung(arrfood[pembeli.pesmak].harga, arrdrink[pembeli.pesmin].harga);

}

void order::multiorder(){

    int banyak, multi[1000], banyak2, multi2[1000], total, total2;
    int harga1 = 0;
    int harga2 = 0;
    int tax = 0.1;
    

    cout << "Nama : ";
    cin >> pembeli.nama;

    cout << "Banyak Minuman yang mau dipesan : ";
    cin >> banyak;

    for (int i = 0; i < banyak; i++)
    {
        int x;
        cout << "Minuman " << i + 1 << " : ";
        cin >> x;
        harga1 += arrdrink[x].harga;
    }

    cout << "Banyak Makanan yang mau dipesan : ";
    cin >> banyak2;

    for (int i = 0; i < banyak2; i++)
    {
        int y;
        cout << "Makanan " << i + 1 << " : ";
        cin >> y;
        harga2 += arrfood[y].harga;
    }
   
   total = harga1 + harga2;
   total2 = total + (total*tax);
   cout << "Total Pembelian: Rp. "<< total2;
}

void order::hitung(int pesmak, int pesmin){

    double total, total2;
    double tax = 0.1;

    total = pesmak + pesmin;
    total2 = total + (total*tax);

    cout << "Total Pembelian: Rp. "<< total2; 
}