#include<iostream>
using namespace std;
int main(void) {
    string s; getline(cin, s);
    bool a, e, i, o, u;
    a = e = i = o = u = false;
    for(char c: s) {
      if (!a && tolower(c) == 'a') a = true;
      if (!e && tolower(c) == 'e') e = true;
      if (!i && tolower(c) == 'i') i = true;
      if (!o && tolower(c) == 'o') o = true;
      if (!u && tolower(c) == 'u') u = true;
    }
    cout << ((a && e && i && o && u) ? "Yes" : "No");
    return 0;
}