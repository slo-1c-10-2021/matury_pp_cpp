#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    ifstream f("hasla.txt");
    int licznik=0;
    while(f>>s) {
        if (s.size() % 2 == 0) licznik++;
        cout << s << "\n";
    }
    cout << "odp. a = " << licznik << "\n";
}
