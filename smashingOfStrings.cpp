#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string longStr, tempStr;
    char delimiter;
    int lengthLongStr, previousIndex = 0;

    cout << "Enter string: ";
    getline(cin, longStr);

    cout << "Enter char: ";
    cin >> delimiter;
    cout << endl;

    lengthLongStr = longStr.length();

    for (int i = 0; i < lengthLongStr; i++) {
    
        if ((int)longStr[i] == (int)delimiter || (i + 1) == lengthLongStr) {

            tempStr = "";

            for (previousIndex; previousIndex <= i; previousIndex++) {
                tempStr = tempStr + longStr[previousIndex];
            }

            cout << tempStr << endl;
        }
    }

    return 0;
}