#include<bits/stdc++.h>
using namespace std;
vector<int> leaderArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result;
    int max_leader = nums[n-1];
    result.push_back(max_leader);
    // now traverse the array from backwards
    for(int i= n-2;i>=0;i--)
    {
        if(nums[i] >= max_leader)
        {
            max_leader = nums[i];
            result.push_back(max_leader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{   
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> res = leaderArray(arr);
    for(int i : res)
    {
        cout << i << " ";
    }
    return 0;
}