#include <bits/stdc++.h>
using namespace std;

struct String
{
    int n;
    char* str = new char[100];
    String (const char* s)
    {
        n = strlen(s);
        for (int i = 0; i < n; i++){
            str[i] = s[i];
        }
    }
    ~String()
    {
        delete [] str;
    }
    void print()
    {
        cout << str << endl;
    }
    void append(const char* s)
    {
        char* tmp = new char[100];
        for (int i = 0; i < n; i++){
            tmp[i] = str[i];
        }
        for (int i = n; i < n + strlen(s); i++){
            tmp[i] = s[i - n];
        }
        str = tmp;
        delete [] tmp;
    }
};
int main()
{
    String s("Hello");
    s.print();
    s.append(" world");
    s.print();
    return 0;
}

