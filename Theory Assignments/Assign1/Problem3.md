*Approach*:

Ask the user for province, if its not sindh, it has to be punjab or other provinces.

Check if age and gender requirements are met, using IF statements.

Output result accordingly.

*IPO*:

INPUT: Take Province, Gender and Age as input

PROCESS: If Province is Sindh, check if age is greater than 18.

Otherwise check if Gender is male, if so, check if age is greater than 18.

If it is Female, check if age is greater than 16

OUTPUT: Display Legal or Not Legal

*PseudoCode*:

```
INPUT Province, Age
IF Province == "Sindh":
  IF Age >= 18:
    OUTPUT "Legal"
  ELSE:
    OUTPUT "Not Legal"
ELSE:
  INPUT Gender:
  IF Gender == "Male":
    IF Age >= 18:
      OUTPUT "Legal"
    ELSE:
      OUTPUT "Not Legal"
  ELSE:
    IF Age >= 16:
       OUTPUT "Legal"
    ELSE:
      OUTPUT "Not Legal"
```




      
