#include<iostream>
using namespace std;

int main()
{
    int matica1[3][3], matica2[3][3], a, b, matica3[3][3];
    cout << "Zadaj cisla pre prvu maticu (9 cisiel): ";
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
            cin >> matica1[a][b];
    }
    cout << "Zadaj cisla pre druhu maticu (9 cisiel): ";
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
            cin >> matica2[a][b];
    }

    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
            matica3[a][b] = matica1[a][b] + matica2[a][b];
    }
    cout << "Vysledok:" << endl;
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
            cout << matica3[a][b] << " ";
        cout << endl;
    }
    return 0;
}