//Copied from week09-Ivo-Terziev

#include <iostream>

using namespace std;

void caesarCipher (char *str, unsigned int number) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] + number > 'z') {
                str[i] += number - 'z' + 'a' - 1;
            } else {
                str[i] += number;
            }
        }
    }
}

void decipher (char *str, unsigned int number) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] - number < 'a') {
                str[i] -= number - 'z' + 'a' - 1;
            } else {
                str[i] -= number;
            }
        }
    }
}

int main () {
    char string [100];
    unsigned int number;

    cin >> number;
    cin.ignore();
    cin.getline (string, 99);

    caesarCipher (string, number%26);
    cout << string << endl;
    
    decipher (string, number%26);
    cout << string << endl;

    return 0;
}
