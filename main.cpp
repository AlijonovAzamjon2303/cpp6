#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    cout << "n = "; cin >> n;

    int **a = new int *[n];
    for(int i = 0; i < n; i++) a[i] = new int[n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 20;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < n / 2; i++)
    {
        for(int j = i; j < n - i; j++) cout << a[i][j] << " ";
        
        for(int j = i + 1; j < n - i - 1; j++) cout << a[j][n - i - 1] << " ";

        for(int j = n - 1 - i; j >= i; j--) cout << a[n - 1 - i][j] << " ";

        for(int j = n - 2 - i; j > i; j--) cout << a[j][i] << " ";  
    }

    if(n & 1) cout << a[n / 2][n / 2];
}