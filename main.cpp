#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int n, m;
    cout << "n = "; cin >> n;

    int **a = new int *[n];
    for(int i = 0; i < n; i++) a[i] = new int[n];
    int *ans = new int[2 * n - 1];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans[i + j] += a[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < 2 * n - 1; i++)
    cout << ans[i] << " ";
}