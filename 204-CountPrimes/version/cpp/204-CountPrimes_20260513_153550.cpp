// Last updated: 13/05/2026, 15:35:50
1class Solution {
2public:
3    int countPrimes(int n) {
4        if( n==0 || n==1){
5            return 0;
6        }
7
8        vector<int> isPrime(n, 1);
9
10        for(int i=2; i*i< n; i++){
11            if(isPrime[i]){
12                for(int j=i*i; j<n;j+=i){
13                    isPrime[j]=0;
14                }
15            }
16        }
17
18        int count=0;
19
20        for( int i=2;i<n; i++){
21            if(isPrime[i]){
22                count++;
23            }
24        }
25        return count;
26    }
27};