*Approach*:

Since, i cannot traverse through an integer without dividing it. I used a string instead to look up each character and tally it with 9 and 0 accordingly. I skipped the 0 digit if this happened, the rest i added to another variable before printing it

*IPO*:

INPUT: Take a string num as input

PROCESS: Use while loop to traverse through string and check if there is a 90 in the number. If there is, skip one extra digit before adding it to the fixednum variable. Otherwise add it to the fixednum variable with normal iterations.

OUTPUT: Display fixednum

*PseudoCode*:
```
//num is a string
INPUT num
fixednum = ""
i = 0
while i < Length(num):
  IF num[i] == "9" AND num[i+1] == "0":
    fixednum = fixednum + num[i]
    i = i + 2
  ELSE:
    fixednum = fixednum + num[i]
    i = i + 1
OUTPUT fixednum
```
![WhatsApp Image 2024-09-08 at 09 33 08_ddc79691](https://github.com/user-attachments/assets/f06dc5a8-56c7-417e-8dd9-bd15b2871dcc)

