// Iterators and Iterating algorithm 
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

void printDouble(int a) {
    cout<< 2*a <<" ";
}

bool checkEven(int a) {
    return a%2 == 0;
}

 int main () {

    vector<int> arr(5);
    arr[0]=11;
    arr[1]=21;
    arr[2]=30;
    arr[3]=11;
    arr[4]=50;

    for_each(arr.begin(),arr.end(),printDouble);
    
    int target = 40;
    auto it=find(arr.begin() , arr.end() , target);
    cout<<*it<<endl;

    auto it = find_if(arr.begin(), arr.end(), checkEven);
    cout<<*it<<endl;

    int target=11;
    int ans = count(arr.begin(), arr.end(), target);
    cout<<ans<<endl;

    int ans=count_if(arr.begin() , arr.end() , checkEven);
    cout<<ans<<endl;

    sort(arr.begin() , arr.end());
    for (int a : arr) {
        cout<<a<<" ";
    } 
    cout<<endl;

    reverse(arr.begin() , arr.end());
    for (int a : arr) {
        cout<<a<<" ";
    } 
    cout<<endl;

    rotate(arr.begin() ,arr.begin()+3 , arr.end());
    for (int a : arr) {
        cout<<a<<" ";  //right rotate
    }


    auto it = unique(arr.begin() ,arr.end());
    it iterator k phele saare unique elements hai
    it k baad saare duplicate element hai
    
    arr.erase(it, arr.end());
    for (int a : arr) {
        cout<<a<<" ";
    }


    auto it = partition(arr.begin() , arr.end(), checkEven);
    for (int a: arr) {
        cout<<a<<" ";
    }






    //Numeric Algorithm
    vector<int> arr(5);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    int totalSum=accumulate(arr.begin() , arr.end() , 0);
    cout<< totalSum <<endl;

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);

    int ans = inner_product(first.begin(), first.end(), second.begin(), 0);
    cout<<ans<<endl;

    vector<int> result(first.size());

    partial_sum(first.begin(), first.end(), result.begin());

    for (int a : result) {
        cout<<a<<" ";
    }
    cout<<endl;

    vector<int> nums(5);

    iota(nums.begin() , nums.end(), 250);

    for (int a: nums) {
        cout<<a<<" ";
    }











}
