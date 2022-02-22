
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the sum of a
// triplet which is closest to x
int solution(vector<int>& arr, int x)
{
    // To store the closets sum
    int closestSum = INT_MAX;

    // Run three nested loops each loop
    // for each element of triplet
    for (int i = 0; i < arr.size() ; i++)
    {
        for(int j =i + 1; j < arr.size(); j++)
        {
            for(int k =j + 1; k < arr.size(); k++)
            {
                //update the closestSum
                if(abs(x - closestSum) > abs(x - (arr[i] + arr[j] + arr[k])))
                    closestSum = (arr[i] + arr[j] + arr[k]);
            }
        }
    }
    // Return the closest sum found
    return closestSum;
}

// Driver code
int main()
{
    vector<int> arr = { -1, 2, 1, -4 };
    int x = 1;
    cout << solution(arr, x);

    return 0;
}
