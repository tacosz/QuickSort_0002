#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang Elemen Array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum Panjang Array adalah 20" << endl;
    }
}

int main()
{
    
}
