#include <iostream>
#include <vector>

using namespace std;

struct parrot
{
    string color;
    int year;
    string country;
};

int main()
{
    parrot Myparrot;
    int n;
    cin >> n;
    vector <parrot> parrots;
    parrots.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> parrots[i].color >> parrots[i].year >> parrots[i].country;
    }
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << " parrot: " << parrots[i].color  << " - color; " << parrots[i].year << " - year; " << parrots[i].country << " - country. " << endl;
    }
    return 0;
}
