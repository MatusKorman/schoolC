#include <iostream>
#include <conio.h>
#include <windows.h>




using namespace std;
bool koniec;
const int sirka = 50;
const int vyska = 20;
int x, y, fx, fy, skore;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;


void setup()
{
    koniec = false;
    dir = STOP;
    x = sirka / 2;
    y = vyska / 2;
    fx = rand() % sirka;
    fy = rand() % vyska;
    skore = 0;
}
void Draw()
{
    system("cls");
    for (int i = 0; i < sirka + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < vyska; i++)
    {
        for (int j = 0; j < sirka; j++)
        {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "0";
            else if (i == fy && j == fx)
                cout << "*";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "+";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }


            if (j == sirka - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < sirka + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Skore:" << skore << endl;
    cout << "(pre skoncenie hry stlac x)" << endl;
}
void ovladanie()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            koniec = true;
            break;
        }
    }
}
void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

//    if (x > sirka || x < 0 || y > vyska || y < 0)
//      koniec = true;


   if (x >= sirka) x = 0; else if (x < 0) x = sirka - 1;
   if (y >= vyska) y = 0; else if (y < 0) y = vyska - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            koniec = true;

    if (x == fx && y == fy)
    {
        skore += 10;
        fx = rand() % sirka;
        fy = rand() % vyska;
        nTail++;
    }
}
int main()
{
    setup();
    while (!koniec)
    {
        Draw();
        ovladanie();
        logic();
        Sleep(50);
    }
    return 0;
}