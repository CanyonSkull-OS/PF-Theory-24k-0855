Approach:

Every even number can be exactly divided by 2, hence if the remainder of the division is anything other than 2, it is not an even number.

*IPO*:

Input: Take a number as input.

Process: Check to see if number is greater than 0. If it is, then take MOD of number with 2.

If result is 0, then it is even, otherwise it is odd.

Output: Output whether it is even or odd.

*PsuedoCode*:

```
INPUT Num
IF Num <= 0:
  OUTPUT "Invalid Input"
ELSE:
  Temp = Num // 2
  IF Temp == 0:
    OUTPUT "Even Number"
  ELSE:
    OUTPUT "Odd Number"
```
![WhatsApp Image 2024-09-05 at 19 11 08_1a242772](https://github.com/user-attachments/assets/2786f3f2-5092-407c-a95e-61af782c0c0f)
