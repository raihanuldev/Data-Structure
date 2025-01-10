#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    queue<string>ticketLine;

    while(tcase--){

        int x;
        cin >> x;

        if (x == 0) {
            string name;
            cin >> name;
            ticketLine.push(name);
        } else if (x == 1) {
            if (ticketLine.empty()) {
                cout << "Invalid" << endl; 
            } else {
                cout << ticketLine.front() << endl;
                ticketLine.pop();
            }
        }
    }
    return 0;
}