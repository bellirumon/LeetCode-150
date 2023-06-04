/*

--Intuition

The first solution that comes to mind is fairly simple.
Convert the integer to a string.
Store the reverse of this string in another string.
Compare both strings.

--Approach

Use built - in to_string() function to convert integer to string.
Use a reverse for loop to push the string character by character in another string.
Compare the two strings.

--Complexity

Time complexity :
O(n), where n is the number of digits of the input number.

Space complexity :
O(n)

--Code
*/
//Method 1 - converting the integer to a string and comparing it with it's reverse

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string r;

        for (short i = s.length() - 1; i >= 0; i--) {
            r.push_back(s[i]);
        }

        short comparison = r.compare(s);

        if (comparison == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};