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
- Pascals triangle
- Remove element
- Unique email addresses
- Isomorphioc strings
- Can place flowers
- Majority element
