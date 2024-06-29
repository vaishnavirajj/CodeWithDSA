#include<iostream>
#include<vector>
using namespace std;
void mergeSortedArrays(int arr[],int brr[],int sizeArr,int sizeBrr,vector<int>&ans) {
    int i=0;
    int j=0;
    //jab tak i and j arrays k andar h
    while(i<sizeArr && j<sizeBrr) {
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }

    }

    //agar is loop k bhr aaye
    //to 2 cases ho skte h
    //1 case--> arr me still elements h
    while(i<sizeArr) {
        ans.push_back(arr[i]);
        i++;
    }
    //2case-->brr me still elemnts h

    while(j<sizeBrr) {
        ans.push_back(brr[j]);
        j++;
    }

}


int main () {
    int arr[]={10,30,50,70,90,100,110};
    int sizeArr=7;
    int brr[]={20,40,60,80};
    int sizeBrr=4;
    vector<int>ans;
    mergeSortedArrays(arr,brr,sizeArr,sizeBrr,ans);
    for(int num:ans) {
        cout<<num<<" ";
    }
    cout<<endl;

} 
