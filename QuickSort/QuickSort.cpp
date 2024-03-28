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

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_short(int low, int high)
{
    int temp;
    int pivot, i, j;
    if (low > high)
    {
        return;
    }

    pivot = arr[low];
    i = low + 1;
    j = high;

}

int main()
{
    
}
