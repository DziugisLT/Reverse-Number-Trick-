#include<iostream>
#include <string>

using namespace std;

string reverseNum(string a, string b){
    for(int i = a.length()-1; i >= 0; i--){
        //cout << "#" << i << " reversing start: " << a << " : " << b << endl;
        b[a.length()-1-i] = a[i];
    }
    return b;
}

int main(){

    string a, b;
    cout << "Number: ";
    cin >> a;
    b = a; // filler
    b = reverseNum(a, b);
    cout << a << " | " << b << endl;
    int sum;
    while(a != b){
        sum = stoi(a) + stoi(b);
        a = to_string(sum);
        b = a; // size filler
        b = reverseNum(a, b);
        cout << a << " | " << b << endl;
    }

    cout << "Resulting polinomial: " << a << endl;

}
