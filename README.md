# leetcode Notes

## Arrays & hashing:

- Contains Duplicate:
  - Use a set

- Valid Anagram:
  - Use 2 maps and equate them

- Concatenation of Array: 
  - Create array of double the initial size and refill with data
  
- Replace Elements with Greatest Element on Right Side: 
  - Create a result array and set all values to be -1
  - Set the max so far to be the left most element of the array, loop through array backwards starting at the second to last element.
  - set the res[i] to be the max so far 
  - recalculate the max so far

- Is subsequence:
  - while both letters in each string is the same inrement the index of both
  - compare the index of the shorter string to it's count at the end, 
  - if they are the same then the shorter string is a subsequence of the longer string.

- Length of last word
  - loop through the string backwards until you find the first non space char
  - start counting until you hit another space char

- Two Sum
  - use a dictionary to store the element and it's index
  - return if the compliment is in the dictionary
  
- Longest common prefix
  - compare each letter in the first string to every letter in each string in the array
  - after we have compared the ith letter in every string to the ith letter in the first word
    - if we find a single letter that does not match we return the result
    - otherwise we add that letter to the result string

- Group anagrams
  - create a map <arr of ints, array of strings>
  - the keys are an array of size 26 where each position corresponds to one letter of the alphabet
  - loop through each word and for each word create the count of each letter 
  - result to the map 
  - return values of the map

- Pascals triangle
  - for the first 2 rows just insert them into the result array
  - for all rows after the 2nd row, create a new temp row and for each elem in the previous row do the following calcuations:
  - res[row - 1][elem] + res[row - 1][elem + 1] and then add that to the temp array

- Remove element
- Unique email addresses
- Isomorphioc strings
- Can place flowers
- Majority element


## Math & Geometry

- Convert int to excel column title
  - We are essentially coneverting base 10 to base 26
  - while the column number is greater than 0 we need to mod by 26
  - then add that offset with 'A' to get the letter to add to the result
  - we then decrease the column number by dividing by 26
  - because we set A -> 1 we need to subtract 1 from columnNumber before we mod or divide column number by 26 

- Greatest Common Divisor of strings
  - loop from min(str1, str2) to 0 
  - during each loop check if there exists a common divisor for the substring up to that point
    - if yes return the substring up to that point
  - For the isDivisor function: 
    - check if the current length is a factor of both strings
    - compute the current factor (how many times you have to multiply our substring to get the original strings)
    - return a boolean based on if the substring from 0 to the current length * the factor is equal to the original strings

- count odd numbers in an interval range
  - get the length of range (inclusive of both the end values) by doing high - low + 1
  - if both the end points or at least one of the end points is even, we just divide the range length by 2
  - if both are odd we divide the range length by 2 and then add 1 