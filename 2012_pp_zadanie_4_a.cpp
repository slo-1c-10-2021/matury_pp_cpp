#include <bits/stdc++.h>
using  namespace std;
int main() {
    int s;
    int parzyste=0;
    ifstream f("cyfry.txt");
    while(f>>s) {
        if(s%2==0){
            parzyste++;}
    }
    cout<<parzyste<<endl;
}
