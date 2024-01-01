#include <iostream>
#include <vector>

using namespace std;

void read(vector < int > &vec1)
{
    int n;
    cin >> n;
    vec1.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }
}
int get (vector < int > vec1, int i)
{
    return vec1[i - 1];
}
void update(vector < int > &vec1, int l, int r, int x)
{
    for(int i = l - 1; i < r; i++)
    {
        vec1[i] = x;
    }
}
void add(vector < int > &vec1, int l, int r, int x)
{
    for(int i = l - 1; i < r; i++)
    {
        vec1[i] += x;
    }
}
int rsq(vector < int > vec1, int l, int r)
{
    int answer = 0;
    for(int i = l - 1; i < r; i++)
    {
        answer += vec1[i];
    }
    return answer;
}
int rmq(vector < int > vec1, int l, int r)
{
    int answer = vec1[l - 1];
    for(int i = l - 1; i < r; i++)
    {
        answer = min(answer, vec1[i]);
    }
    return answer;
}
int main()
{
    vector <int> vec;
    read(vec);
    return 0;
}
