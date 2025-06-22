#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int majorityElement (vector <int> & nums) {
    int i=1;
    sort(nums.begin(),nums.end());
    int freq=1,ans=nums[0];
    while ( i< nums.size()){
        if(nums[i]==nums[i-1]){
            freq++;
        }else {
            freq =1;
        ans = nums[i];
        }
        cout<<freq;
        if(freq >nums.size()/2) return ans;
      i++;
    }
    return ans;
    
};
int main(){
    vector<int>input={6,5,5};
    int out=majorityElement(input);
    cout << out;

}