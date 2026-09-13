//hash map approach

#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;         //creates the hash map
        for(int i=0;i<nums.size();i++){   //for loop to goes through all the element
            int n=target-nums[i];        //n is the number which we have to find in the array let target=9 then n=9-nums[i]
            if(mp.find(n)!=mp.end()){   // mp.find(n) search the element in the array mp.end()means the array completed so it will find the element until the array ends
                return{mp[n],i};      //mp[n]= map of the exact number and it's index of the substracted element
            }
            mp[nums[i]]=i;            // it stores the exact index of the mapped element
        }
        return{};                 //it will store the two mapped elements exact index
    }
};