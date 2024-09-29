#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += num1[i] - '0';   // minus sign will convert a character to corresponding integer
            i--;
        }
        if (j >= 0) {
            sum += num2[j] - '0';
            j--;
        }
        carry = sum / 10;
        result += (sum % 10) + '0';  // Plus sign will convert any integer to corresponding character
        cout<<"🚀 ~ stringaddStrings ~ result:"<< result<<endl;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string NUM1 = "89";
    string NUM2 = "74";
    string result = addStrings(NUM1, NUM2);
    cout << "The sum is: " << result << endl;  // Output will be "26"
    return 0;
}
