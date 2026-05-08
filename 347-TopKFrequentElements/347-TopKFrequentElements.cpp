// Last updated: 08/05/2026, 09:29:50
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies
    std::unordered_map<int, int> counts;
    for (int num : nums) {
        ++counts[num];
    }

    // Step 2: Build a min-heap
    auto comp = [&counts](int n1, int n2) { return counts[n1] > counts[n2]; };
    std::priority_queue<int, std::vector<int>, decltype(comp)> heap(comp);

    // Step 3: Process elements
    for (auto& pair : counts) {
        heap.push(pair.first);
        if (heap.size() > k) {
            heap.pop();
        }
    }

    // Step 4: Extract results
    std::vector<int> topKElements;
    while (!heap.empty()) {
        topKElements.push_back(heap.top());
        heap.pop();
    }
    return topKElements;
    }
};