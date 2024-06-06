#include<iostream>
using namespace std;
void uniqueElement(int arr[] ,int size) {
    int ans=0;   //0^anything-->anything
    for (int i=0;i<size;i++) {
        ans=ans^arr[i];
    }
    cout<<ans;


}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
    uniqueElement(arr,size);

}