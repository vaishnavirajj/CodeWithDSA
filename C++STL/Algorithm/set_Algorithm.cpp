#include<iostream>
#include<vector>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;
int main () {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
   

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    
    vector<int> result;

    // set_union(arr.begin() , arr.end() , nums.begin() ,nums.end() , inserter(result, result.begin()));

    // for (int i : result) {
    //     cout<<i <<" ";
    // }
    // cout<<endl;

    // set_intersection(arr.begin() , arr.end() , nums.begin() ,nums.end() , inserter(result, result.begin()));

    // for (int i : result) {
    //     cout<<i <<" ";
    // }
    // cout<<endl;


    
    // set_difference(arr.begin() , arr.end() , nums.begin() ,nums.end() , inserter(result, result.begin()));

    // for (int i : result) {
    //     cout<<i <<" ";
    // }
    // cout<<endl;

    set_symmetric_difference(arr.begin() , arr.end() , nums.begin() ,nums.end() , inserter(result, result.begin()));

    for (int i : result) {
        cout<<i <<" ";
    }
    cout<<endl;














    return 0;


}