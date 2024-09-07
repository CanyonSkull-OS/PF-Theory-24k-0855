*Approach*:

Ask user which type of crop it is, then check if conditions are being met. if they are, we can initiate irrigation.

*IPO*:

INPUT: Take crop, moisture level, and rainfall status in the last 24 hours as input

PROCESS: Use IF statements to check which type of crop it is, if it is wheat, check if moisture level is below 

30% and rainfall status is false. IF it is, then initiate irrigation.

IF crop is corn, check if moisture level is below 40. IF it is, initiate irrigation.

ELSE, it will be rice, check if the moisture level is below 25 and if rainfall status is false.

IF it is, initiate irrigation

OUTPUT: Display Initiate Irrigation if appropriate

*PsuedoCode*:

```
INPUT crop, moistlvl, rainfall24
IF crop == "Wheat":
  IF moistlvl <= 30%:
    IF rainfall24 == FALSE:
      OUTPUT "Initiate Irrigation"
IF crop == "Corn":
  IF moistlvl <= 40%:
    OUTPUT "Initiate Irrigation"
ELSE:
  IF moistlvl <= 25%:
    IF rainfall24 == FALSE:
      OUTPUT "Initiate Irrigation"
```
![WhatsApp Image 2024-09-07 at 10 39 15_295a09d2](https://github.com/user-attachments/assets/0b0e15a0-7557-40c8-93d4-2ac28e2f7795)

      
