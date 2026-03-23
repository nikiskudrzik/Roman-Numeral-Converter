# Design Documentation

## Pseudocode

Class romanType

Private:
- romanNumber as string
- result as integer

Public:

setRoman(r)
- store r in romanNumber
- call convertToInt()

getValue(letter)
- if letter is M return 1000
- else if letter is D return 500
- else if letter is C return 100
- else if letter is L return 50
- else if letter is X return 10
- else if letter is V return 5
- else if letter is I return 1
- else return 0

convertToInt()
- set result to 0

- go through each letter in romanNumber
  - get current value
  - get next value if there is one

  - if current is less than next
    - subtract current from result
  - else
    - add current to result

printRoman()
- display romanNumber

printInt()
- display result

## Use Case

1. User enters a Roman numeral  
2. Program stores it  
3. Program converts it to an integer  
4. User chooses what to print  
5. Program displays the result
