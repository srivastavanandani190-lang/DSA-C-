#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

bool isArmstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while(n != 0) {
        rem = n % 10;
        n = n / 10;
        ans = ans + pow(rem, digit);
    }
    return num == ans;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit = countDigits(num);
    if(isArmstrong(num, digit)) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
