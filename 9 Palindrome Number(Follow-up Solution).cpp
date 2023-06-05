/*

--Intuition

Follow up to the original problem - Solve without converting int to string.
Can be done by extracting last digit using%and reducing the number by num / 10 until all numbers have been extraced.
Then use basic maths to make the reverse number.

--Approach

Initialize a new number = 0
Run a loop that extracts the last digit of the number using% operator.
Append this digit into the new number by new number = (new number * 10) + digit.
Drop the extracted digit.
Continue until the input number becomes 0.
Subtract the original numberand the new number.Result will be 0 for palindromes.

--Complexity

Time complexity :
O(n), where n is the number of digits of the input number

Space complexity :
O(k), where k is the number of bytes used by an unsigned int in cpp.


--Code
*/
//Method 2 - Follow up (without converting to string)
/*Run a loop to extract the last digit from the number using %.
Drop the extracted digit from the number using division by 10.
Add the digit into the accumulative result using ans = ans * 10 + extracted digit.
Subtract the input number and the accumulated number.
If result is 0, number will be palindrome.*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int temp = x;
        int digit; //var to hold extracted digit
        unsigned int answer = 0; //accumulated result of extracting digits and appending 
        //them to create the reversed number

        while (temp > 0) {
            digit = temp % 10;  //extract the last digit
            answer = (answer * 10) + digit; //append the digit to create the rev number
            temp = temp / 10;   //drop the extracted digit
        }

        //check palindrome
        if (x - answer == 0) {
            return true;
        }
        else return false;

    }
};