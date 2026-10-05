class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> results;
        vector<int> nums2;
        
        // storing the key: values
        for (auto num : nums) {
            results[num]++;
        }

        // sort it appropately
        vector<pair<int, int>> elements;
        for(auto& item : results) {
            elements.push_back({item.first, item.second});
        }

        // sort the vector
        sort(elements.begin(), elements.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
            return a.second > b.second;
        });

        for (int i = 0; i < k; i++) {
    nums2.push_back(elements[i].first);
}

        return nums2;





        
    }
};
