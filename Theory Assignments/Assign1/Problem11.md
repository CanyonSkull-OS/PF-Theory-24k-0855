*Approach*:

If the remainder at the end of a continuous loop being 1 means its coprime, then using a while loop to do that would be efficient.

*IPO*:

INPUT: Take two numbers as input, num1 and num2

PROCESS: Use while loop to take mod of num1 and num2, replace num1 with num2 and num2 with result of mod, till num2 is equal to 0. If num1 is 1 after loop ends, then numbers are coprime, otherwise they are not coprime.

OUTPUT: "Numbers are coprime" or "Numbers are not coprime"

*PseudoCode*:
```
INPUT num1, num2
while num2 == 0:
  remainder = num1 MOD num2
  num1 = num2
  num2 = remainder

IF num1 == 1:
  OUTPUT "Numbers are Co-Prime"
ELSE:
  OUTPUT "Numbers are not Co-Prime"
  ```
![WhatsApp Image 2024-09-08 at 09 32 53_a91627f2](https://github.com/user-attachments/assets/704ee98a-8b4b-4b90-9443-b9a5deb1719d)
