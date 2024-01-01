#include <iostream>
using namespace std;
int main() {
	int n, i, max1, max2;
	max1 = -1;
	max2 = -1;
	while (1)
    {
        cin >> n;
        if (n != 0)
        {
            if (n > max1)
            {
                int c = max1;
                max1 = n;
                max2 = c;
            }
            else if (n < max1 && n > max2)
            {
                max2 = n;
            }
        }
        else
        {
            break;
        }
    }
    cout << max2;
	return 0;
}
