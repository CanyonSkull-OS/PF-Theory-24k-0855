*Approach*:

Use mod operator with 10 to get the remainder as the last digit, and sequentially add that to a variable till every digit is added

*IPO*:

INPUT: Take num as input

PROCESS: Set a variable total to 0. use a while loop and store the last digit of the number in a variable using the mod operator, and divide num by 10 till it reaches below or equal to 0. Keep adding the last digit to the total variable.

OUTPUT: Display Total

*PesudoCode*:
```
INPUT num
sum = 0
while num > 0:
  digit = num MOD 10
  sum = sum + digit
  num = num / 10
OUTPUT sum
```
![WhatsApp Image 2024-09-07 at 18 41 22_3ebb3b27](https://github.com/user-attachments/assets/7d9894d7-f671-43aa-8326-c4b4cc56f464)
