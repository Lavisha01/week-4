#include<iostream>
#include <bits/stdc++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // Pointer for the last element in the valid portion of nums1
        int j = n - 1; // Pointer for the last element in nums2
        int k = m + n - 1; // Pointer for the last position in nums1
       
        while (i >= 0 && j >= 0) {
            if (nums1[i] <= nums2[j]) { 
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
     }

int main() {
    vector<int> nums1 = {1}; 
    //{7, 5, 3, 0, 0, 0}; // m elements + space for n elements
    vector<int> nums2 = {2,3,4,5};
    //{6, 4, 2}; // n elements
    int m = 1; 
    int n = 4; 
    
    merge(nums1, m, nums2, n);
    
    cout << "\nAfter merging in non-decreasing order:" << endl;
    cout << "nums1: ";
    for (int i : nums1) cout << i << " ";
    cout << endl;

    return 0;
}
