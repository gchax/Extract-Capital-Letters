#include <iostream> 
using namespace std;
string extractCap(string);

int main()
{
    string text;
    cin >> text;
    string fin = extractCap(text);
    cout << fin;

    return 0;
}
string extractCap(string text) {
    int len = text.length(), i = 0;
    string final = "";

    while (i < len) {
        if (text[i] >= 65 && text[i] <= 90) final += text[i];
        i++;
    }

    return final;
}