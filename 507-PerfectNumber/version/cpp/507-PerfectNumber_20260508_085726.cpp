// Last updated: 08/05/2026, 08:57:26
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        int nn=0;
5
6        for(int i=1; i*i< num; i++){
7            if(num%i==0){
8                nn+=i;
9                cout<<i<<endl;
10    
11            if((num/i)!=i && (num/i)<num){
12                nn+=num/i;
13                cout<<num/i<<endl;
14            }}
15            
16        }
17            return num==nn;
18    }
19
20};