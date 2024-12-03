#include<iostream>
#include<vector>
using namespace std;
void printSubsequence(string name , int index, string output , vector<string> &ans) {
    //base case 
    if (index == name.length()) {
        ans.push_back(output);
        return;
    }

    char ch=name[index];
    // include ch
    printSubsequence(name , index+1, output+ch, ans);
    //exclude ch
    printSubsequence(name ,index+1, output, ans);
}
int main () {
    string name="xyz";
    int index=0;
    string output=" ";
    vector<string> ans;
    printSubsequence(name , index, output,ans);
    cout<<ans.size()<<"->";
    for (auto i : ans) {
        cout<<i<<" ";
    }
    

}