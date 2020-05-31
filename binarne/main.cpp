#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

fstream bi, z;
string a;
int b=0, s=0, p2=0, p8=0;
char w;

void zj ()
{
    bi.open("liczby.txt", ios::in);
    z.open("wynik1.txt", ios::out);
    while(bi.good())
    {
        bi>>a;
        if(count(a.begin(),a.end(),'1')<(count(a.begin(),a.end(),'0')))
        {
            s++;
        }
    }
    cout<<"Liczb Liczb w ktorych jest wiecej 0 niz 1 jest: "<<s<<endl;
    z<<"Liczb w ktorych jest wiecej 0 niz 1 jest: "<<s<<endl;
    bi.close();
    z.close();
    s=0;
}

void bd ()
{
    bi.open("liczby.txt", ios::in);
    z.open("wynik2.txt", ios::out);
    while(bi.good())
    {
        bi>>a;
        b=a.length();
        if(a[b-1]=='0') p2++;
        if(a[b-1]=='0' && a[b-2]=='0' && a[b-3]=='0') p8++;
    }
    cout<<"Liczb podzielnych przez 2 jest: "<<p2<<endl;
    cout<<"Liczb podzielnych przez 8 jest: "<<p8<<endl;
    z<<"Liczb podzielnych przez 2 jest: "<<p2<<endl;
    z<<"Liczb podzielnych przez 8 jest: "<<p8<<endl;
    bi.close();
    z.close();
    p2=0;
    p8=0;
}

int main()
{
    while(true)
    {
cout << "=========================================================" << endl;
cout << "1-Liczby w ktorych jest wiecej 0 niz 1"<<endl;
cout << "2-Liczby podzielne przez 2 i 8"<<endl;
cout << "3-Wylacz program"<<endl;
cout << "=========================================================" << endl;
w=getch();

switch (w)
{
case '1':
    zj();
    break;
    case '2':
        bd();
        break;
    case '3':
        exit(0);
    default:
            cout<<"Niepoprawna warotsc"<<endl;
            break;
}
getchar();
system("cls");
    }
    return 0;
}
