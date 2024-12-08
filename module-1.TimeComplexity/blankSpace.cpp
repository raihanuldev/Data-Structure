#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; // অ্যারেটির দৈর্ঘ্য
        cin >> n;

        int arr[n]; // সাধারণ অ্যারে ব্যবহার করা হচ্ছে
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxLength = 0; // সবচেয়ে বড় ব্ল্যাঙ্ক স্পেস
        int currentLength = 0; // বর্তমান 0-এর ধারাবাহিকতা

        // অ্যারে ট্রাভার্স করা
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                currentLength++; // যদি 0 পাওয়া যায়, লম্বা বাড়বে
                maxLength = max(maxLength, currentLength); // সর্বোচ্চ দৈর্ঘ্য আপডেট করা
            } else {
                currentLength = 0; // 1 পাওয়া গেলে ধারাবাহিকতা শেষ
            }
        }

        cout << maxLength << endl; // প্রতিটি টেস্ট কেসের জন্য আউটপুট
    }
    return 0;
}
