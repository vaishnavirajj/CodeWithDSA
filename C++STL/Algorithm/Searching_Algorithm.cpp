#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(40);
    arr.push_back(40);
    arr.push_back(50);
    
    int target=40;

    bool ans=binary_search(arr.begin(), arr.end(),target);
    cout<<ans<<endl;

    auto it=lower_bound(arr.begin() , arr.end() , 35);    //finds the first element greater or equal to a value in a sorted range
    cout<< *it <<endl;

    auto it2=upper_bound(arr.begin() , arr.end() ,40);   //finds the first element greater than a value in a sorted range
    cout<< *it2 <<endl;

    auto bounds = equal_range(arr.begin(), arr.end(), 40);

    std::cout << "The bounds of 40 in vector are: ";
    for (auto it = bounds.first; it != bounds.second; ++it)
        cout << *it << ' ';
    cout << endl;

   
   
   
    return 0;



}