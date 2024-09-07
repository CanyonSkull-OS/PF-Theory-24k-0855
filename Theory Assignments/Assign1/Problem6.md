*Approach*:

Take height, age, and ride name as input, and then use if statements to check every ride name and restrictions

*IPO*:

INPUT: Take height, age and ride name as input

PROCESS: Use if Statements to ask if age and height conditions are being met, according to each ride. Height has to be greater than 48 at Dragon Roller Coaster, and 54 at Sky Swing. Age has to be greater than 10 at Dragon Roller Coaster and 5 at Carousel.

OUTPUT: "Criteria met" or "Critera not met" accordingly

*PseudoCode*
```
INPUT height, age, ride
IF ride == "Dragon roller coaster":
  IF age >= 10:
    IF height >= 48:
      OUTPUT "Criteria met"
    ELSE:
      OUTPUT "Criteria not met"
  ELSE:
    OUTPUT "Criteria not met"
ELSEIF ride == "Carousel":
  IF age >= 5:
    OUTPUT "Criteria met"
  ELSE:
    OUTPUT "Criteria not met"
ElSEIF ride == "Sky Swing":
  IF height >= 54:
    OUTPUT "Criteria met"
  ELSE:
    OUTPUT "Criteria not met"
```
![WhatsApp Image 2024-09-07 at 16 28 45_50e52c97](https://github.com/user-attachments/assets/b9b847f6-25ce-4718-bf6e-f99519a6eedb)


