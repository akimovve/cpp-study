#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct fish
{
    string _sound;
    string _name;
    int _old;
    fish(string sound, string name, int old)
    {
        _sound = sound;
        _name = name;
        _old = old;
    }
};

int main()
{
    fish my("bool-bool", "Peter", 1);
    cout << my._sound << " " << my._name << " " << my._old;
    return 0;
}
