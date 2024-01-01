#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    long long n, x;
    vector < int > v;
    string a, s;
    fin >> n;
    while(fin >> a)
    {
        if(a == "+")
        {
            fin >> s;
            x = stoi(s);
            v.push_back(x);
        }
        else if(a == "-")
        {
            fout << v[0] << endl;
            v.erase(v.begin());
        }
        else if(a == "*")
        {
            fin >> s;
            x = stoi(s);
            v.push_back(x);
            for(int i = v.size() - 1; i > v.size() / 2; i--)
            {
                swap(v[i], v[i-1]);
            }
        }
    }
    int asdf;
    cin >> asdf;
    cout << "Hello, World!" << "\n" << asdf << "\n";
    fin.close();
    fout.close();
    return 0;
}
