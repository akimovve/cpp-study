#include <iostream>
#include <vector>

using namespace std;

const int N = 10;

vector < int > vector_cnt(2 * N + 1, 0);

void read(vector < int > &vect)
{
    for (auto &i : vect)
    {
        cin >> i;
    }
}

void write_answer()
{
    for(int i = -N; i <= N; i++)
    {
        cout << "number[" << i << "] = " << vector_cnt[i + N + 1] << endl;
    }
    cout << endl;
}

void cnt_sort(vector < int > vect)
{
    for(int i = 0; i < vect.size(); i++)
    {
        if(vect[i] >= -N && vect[i] <= N)
        {
            vector_cnt[vect[i] + N + 1]++;
            write_answer();
            cout << endl;
        }
        else
        {
            cout << "ERROR " << vect[i] << endl;
        }
    }
}

void write(vector < int > vect)
{
    for (auto i : vect)
    {
        cout << i;
    }
}


int main()
{
    int n;
    cin >> n;
    vector < int > vect(n);
    read(vect);
    cnt_sort(vect);
    cout << endl;
    write_answer();


    return 0;
}
