#include <iostream>
using namespace std;

int main(){
    float p, r, t;
    float si, amt;
    cout << "Enter the Principal Amount : Rs. ";
    cin >> p;
    cout << "Enter the Rate of Interest (per annum) : ";
    cin >> r;
    cout << "Enter the Time period (in years) : ";
    cin >> t;
    si = (p * r * t) / 100;
    amt = p + si;
    cout << "Simple Interest = Rs. " << si << endl;
    cout << "Total Amount = Rs. " << amt << endl;
}