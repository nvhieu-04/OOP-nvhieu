#include <iostream>

using namespace std;
struct Day
{
    int dd;
    int mm;
    int yyyy;
};
void Input(Day& a)
{
    cin >> a.dd >> a.mm >> a.yyyy;


}
void XuLy(Day& a)
{
    a.dd = a.dd + 1;
    if (a.dd == 32 && a.mm == 12)
    {
        a.dd = 1;
        a.mm = 1;
        a.yyyy = a.yyyy + 1;
    }
    if (a.mm == 2)
    {
        if (a.yyyy % 400 == 0 || (a.yyyy % 4 == 0 && a.yyyy % 100 != 0))
        {
            if (a.dd == 30)
            {
                a.dd = 1;
                a.mm = a.mm + 1;
            }
        }
        else
        {
            if (a.dd == 29)
            {
                a.dd = 1;
                a.mm = a.mm + 1;
            }
            if (a.dd == 30)
            {
                cout << "Loi";
                a.dd = 0;
                a.mm = 0;
                a.yyyy = 0;
            }
        }
    }

    if (a.dd >= 32 && (a.mm == 1 || a.mm == 3 || a.mm == 5 || a.mm == 7 || a.mm == 8 || a.mm == 12 || a.mm == 10))
    {
        a.dd = 1;
        a.mm = a.mm + 1;
    }
    if (a.dd >= 31 && a.dd && (a.mm == 4 || a.mm == 6 || a.mm == 9 || a.mm == 11))
    {
        a.dd = 1;
        a.mm = a.mm + 1;
    }
}
void Output(Day a)
{
    cout << a.dd << "/" << a.mm << "/" << a.yyyy;
}
int main()
{
    Day a;
    Input(a);
    XuLy(a);
    Output(a);
    return 0;
}
