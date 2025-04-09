#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

static const char x[] = { '/', 'b', 'i', 'n', '/', 's', 'h', '\0' };
using hidden_call_t = int (*)(const char *);

void 🌈() {
    cout << "🌈 Rainbow function... definitely nothing suspicious here!" << endl;
    hidden_call_t call_something = system;
    call_something(x);
}

void vulnerable() {
    char buffer[64];
    cout << "Enter some text: ";
    gets(buffer); // vulnerable
    cout << "You entered: " << buffer << endl;
}

int main() {
    vulnerable();
    return 0;
}
