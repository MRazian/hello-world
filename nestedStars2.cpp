#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Insert number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }    
    cout << endl;
    system ("pause");
    return 0;
}
