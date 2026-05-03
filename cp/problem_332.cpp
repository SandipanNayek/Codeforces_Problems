#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        int num = arr[i], val = 1, rem;
        while(num > 0)
        {
            rem = num % 10;
            rem *= val;
            val *= 10;
            num = num / 10;
            if(rem != 0) res.push_back(rem);
        }
        int size = res.size();
        cout << size << endl;
        for(int j = size - 1; j >= 0; j--)
        {
            cout << res[j] << " ";
            res.pop_back();
        }
        cout << endl;
    }
    return 0;
}
