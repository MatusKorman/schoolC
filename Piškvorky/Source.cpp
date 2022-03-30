#include <iostream>
using namespace std;

char ocislovanie[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int vysledok();
void tabulka();

int main()
{
    int Hrac1 = 1, i, choice;

    char znak;
    do
    {
        tabulka();
        Hrac1 = (Hrac1 % 2) ? 1 : 2;

        cout << "Hrac " << Hrac1 << " zadaj cislo: ";
        cin >> choice;

        znak = (Hrac1 == 1) ? 'X' : 'O';

        if (choice == 1 && ocislovanie[1] == '1')

            ocislovanie[1] = znak;
        else if (choice == 2 && ocislovanie[2] == '2')

            ocislovanie[2] = znak;
        else if (choice == 3 && ocislovanie[3] == '3')

            ocislovanie[3] = znak;
        else if (choice == 4 && ocislovanie[4] == '4')

            ocislovanie[4] = znak;
        else if (choice == 5 && ocislovanie[5] == '5')

            ocislovanie[5] = znak;
        else if (choice == 6 && ocislovanie[6] == '6')

            ocislovanie[6] = znak;
        else if (choice == 7 && ocislovanie[7] == '7')

            ocislovanie[7] = znak;
        else if (choice == 8 && ocislovanie[8] == '8')

            ocislovanie[8] = znak;
        else if (choice == 9 && ocislovanie[9] == '9')

            ocislovanie[9] = znak;
        else
        {
            cout << "Zle cislo!";

            Hrac1--;
            cin.ignore();
            cin.get();
        }
        i = vysledok();

        Hrac1++;
    } while (i == -1);
    tabulka();
    if (i == 1)

        cout << "==>Hrac " << --Hrac1 << " vyhral." << endl;
    else
        cout << "==>\Remiza" << endl;

    cin.ignore();
    cin.get();
    return 0;
}

int vysledok()
{
    if (ocislovanie[1] == ocislovanie[2] && ocislovanie[2] == ocislovanie[3])

        return 1;
    else if (ocislovanie[4] == ocislovanie[5] && ocislovanie[5] == ocislovanie[6])

        return 1;
    else if (ocislovanie[7] == ocislovanie[8] && ocislovanie[8] == ocislovanie[9])

        return 1;
    else if (ocislovanie[1] == ocislovanie[4] && ocislovanie[4] == ocislovanie[7])

        return 1;
    else if (ocislovanie[2] == ocislovanie[5] && ocislovanie[5] == ocislovanie[8])

        return 1;
    else if (ocislovanie[3] == ocislovanie[6] && ocislovanie[6] == ocislovanie[9])

        return 1;
    else if (ocislovanie[1] == ocislovanie[5] && ocislovanie[5] == ocislovanie[9])

        return 1;
    else if (ocislovanie[3] == ocislovanie[5] && ocislovanie[5] == ocislovanie[7])

        return 1;
    else if (ocislovanie[1] != '1' && ocislovanie[2] != '2' && ocislovanie[3] != '3'
        && ocislovanie[4] != '4' && ocislovanie[5] != '5' && ocislovanie[6] != '6'
        && ocislovanie[7] != '7' && ocislovanie[8] != '8' && ocislovanie[9] != '9')

        return 0;
    else
        return -1;
}

void tabulka()
{
    system("cls");
    cout << "                                 |-----------|" << endl;
    cout << "                                 | PISKVORKY |" << endl;
    cout << "                                 |-----------|" << endl;
    cout << endl;
    cout << "                                    |     |     " << endl;
    cout << "                                 " << ocislovanie[1] << "  |  " << ocislovanie[2] << "  |  " << ocislovanie[3] << endl;

    cout << "|Hrac prvy ma X|               _____|_____|_____" << endl;
    cout << "                                    |     |     " << endl;
     
    cout << "                                 " << ocislovanie[4] << "  |  " << ocislovanie[5] << "  |  " << ocislovanie[6] << endl;

    cout << "|Hrac druhy ma O|              _____|_____|_____" << endl;
    cout << "                                    |     |     " << endl;

    cout << "                                 " << ocislovanie[7] << "  |  " << ocislovanie[8] << "  |  " << ocislovanie[9] << endl;

    cout << "                                    |     |     " << endl;
   
}