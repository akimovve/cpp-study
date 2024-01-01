#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int> > ans(2 * t + 1);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        int mark;
        cin >> mark;
        if (mark >= -t && mark <= t)
        {
            ans[mark + t].push_back(i);
        }
    }
    for (int mark1 = -t; mark1 <= t; ++mark1){
        cout << mark1 << ": ";
        for (int j = 0; j < ans[mark1 + t].size(); ++j)
            cout << ans[mark1 + t][j] << " ";
        cout << endl;
    }
    return 0;
}
