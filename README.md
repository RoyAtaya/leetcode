# leetcode

## Notes

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