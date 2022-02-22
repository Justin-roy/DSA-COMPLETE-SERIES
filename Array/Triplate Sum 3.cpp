#include <bits/stdc++.h>
using namespace std;
int solution(vector<int>& arr, int x)
{
    sort(arr.begin(), arr.end());
    int closestSum = 1000000000;
    for (int i = 0; i < arr.size() - 2; i++) {
        int ptr1 = i + 1, ptr2 = arr.size() - 1;//ptr1 = 1 and ptr2 = 3//2
        while (ptr1 < ptr2) {
            int sum = arr[i] + arr[ptr1] + arr[ptr2];// 0 + 1 + 2
                                                     // -1 + 2 + 1 = 2
            if (abs(1LL*x - sum) < abs(1LL*x - closestSum)) {
                closestSum = sum;//-2
            }
            if (sum > x) {//2>1
                ptr2--;//2
            }
            else {
                ptr1++;//2
            }
        }
    }
    return closestSum;
}
int main()
{
    vector<int> arr = { -1, 2, 1, -4 };
    int x = 1;
    cout << solution(arr, x);
    return 0;
}
