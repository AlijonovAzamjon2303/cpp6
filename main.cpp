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
            a[i][j] = 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl; 

    int cnt = 0;
    for(int i = n / 2; i < n; i++)
    {
        for(int j = n - 1 - i; j < i + 1; j++)
        {
            a[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl; 
}