# Last updated: 08/05/2026, 09:31:49
class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        current_gas=0
        total_gas=0
        total_cost=0
        n= len(gas)
        start_index=0
        for i in range(n):
            total_gas+=gas[i]
            total_cost+=cost[i]
            current_gas+=gas[i]-cost[i]

            if current_gas<0:
                current_gas=0
                start_index=i+1

        if total_gas-total_cost<0:
            return -1

        return start_index
