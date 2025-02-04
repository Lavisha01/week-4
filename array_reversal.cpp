#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector <int> nums= {1,5,4,78,4,12,69,93,5};
    //print reversed array
    cout<<"reverse: ";
    for ( int i = nums.size()-1 ;  i >= 0;i--){
        cout<< nums[i] <<"   ";
    }
    cout<< endl;

// reverse the array using STL
    reverse(nums.begin(), nums.end()); //stl function to reverse
    for(int i: nums){
        cout<< i << "  ";
    }
    cout<<endl;

//reverse array using basic approach

int left=0, right = nums.size()-1;
 while (left<right)
 {
    swap(nums[left], nums[right]);
    left++; right--;
 }
 for(int i: nums){
        cout<< i << "  ";
    }
 
    return 0;
}