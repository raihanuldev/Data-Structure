#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        int flag = 1;
        if(n==1){
            flag =0;
        }
        for (int i = 2; i < sqrt(n); i++) 
        {
            if (n % i == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}