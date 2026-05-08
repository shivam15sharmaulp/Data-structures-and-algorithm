// Last updated: 08/05/2026, 09:30:29
class Solution {
public:
    
int calculate(string s) {
    int n = s.size();
    int i = 0;
    int pol = 1;  // To track the sign (+1 or -1)
    long total = 0;
    stack<int> sign;  // Stack to store the sign at different levels
    
    // Initially, the sign at the root level is positive
    sign.push(1);

    while (i < n) {
        char c = s[i];

        if (isdigit(c)) {
            // Parse the number
            long num = 0;
            while (i < n && isdigit(s[i])) {
                num = 10 * num + (s[i++] - '0');
            }

            // Apply the sign and add to total
            total += pol * sign.top() * num;
            i--;  // To counter the extra i++ from the inner loop
        } 
        else if (c == '(') {
            // Push the sign onto the stack
            sign.push(sign.top() * pol);
            pol = 1;  // Reset the sign inside parentheses
        } 
        else if (c == ')') {
            // Pop the sign when parentheses close
            sign.pop();
        } 
        else if (c == '+' || c == '-') {
            // Update the sign for the next number
            pol = (c == '+') ? 1 : -1;
        }

        // Move to the next character
        i++;
    }

    return total;
}
};