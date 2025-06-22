#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int majorityElement (vector <int> & nums) {

   
    int freq=0,ans ;
   for(int num:nums){

    if(freq==0) ans = num;
    freq+=(ans == num)?1:-1;
   }
    return ans;
    
};
int main(){
    vector<int>input={3,2,3};
    int out=majorityElement(input);
    cout << out;

}