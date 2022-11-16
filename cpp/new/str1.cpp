#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string str2;
    getline(cin, str2);
    const char* p = strstr(str.c_str(), str2.c_str());
    if (p)
        cout << "'" << str2 << "' find in " << p - str.c_str();
    else
        cout << "target "<< "not find \"" << str << "\"";

    return 0;
}