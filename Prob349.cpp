class Solution {
public:
    int interpolationSearch(vector <int> arr, int x) 
{ 
    int n = arr.size();
    int lo = 0, hi = (n - 1);  
    while (lo <= hi && x >= arr[lo] && x <= arr[hi]) 
    { 
        if (lo == hi || arr[lo] == arr[hi]) 
        { 
            if (arr[lo] == x) return lo; 
            return -1; 
        } 
        int pos = lo + (((double)(hi - lo) / 
            (arr[hi] - arr[lo])) * (x - arr[lo])); 
        if (arr[pos] == x) 
            return pos; 
        if (arr[pos] < x) 
            lo = pos + 1; 
        else
            hi = pos - 1; 
    } 
    return -1; 
} 
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(),nums1.end());        
        sort(nums2.begin(),nums2.end());
        for (int i = 0; i < nums1.size(); i++) {
            if (i == 0 || nums1[i] != nums1[i - 1]) {
                cout << interpolationSearch(nums2, nums1[i]);
                if (interpolationSearch(nums2, nums1[i]) >= 0) res.push_back(nums1[i]);
            }
        }
        return res;
    }
};
