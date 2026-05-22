// Last updated: 22/05/2026, 12:40:43
1class KthLargest {
2public:
3    int k;
4    priority_queue<int, vector<int>, greater<int>> min_heap;
5    KthLargest(int k, vector<int>& nums) {
6        this->k=k;
7        for(auto i : nums){
8            min_heap.push(i);
9
10            if(min_heap.size()>k){
11                min_heap.pop();
12            }
13        }
14        
15    }
16    
17    int add(int val) {
18        min_heap.push(val);
19
20        if(min_heap.size()>this->k){
21            min_heap.pop();
22        }
23        return min_heap.top();
24    }
25};
26
27/**
28 * Your KthLargest object will be instantiated and called as such:
29 * KthLargest* obj = new KthLargest(k, nums);
30 * int param_1 = obj->add(val);
31 */