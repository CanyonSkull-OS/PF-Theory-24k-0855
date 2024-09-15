*Approach*:

I took the days months and years seperately for the birth date, and todays date, then checked if it was a leap year, if it was, then i checked if it was february, if it was and the day was greater than 29, the dates would be invalid, otherwise if its not a leap year then the limit is 28 instead of 29. After that i checked the capital months with 31 days using an IF statement, and checked the limits of the dates. If the dates are invalid, i simply output an error message accordingly. Otherwise, id subtract birth year from todays year, birthmonth from todays month, birth day from todays day. If the result of months was less than 0 id subtract a year and add 12 to the result. If the result of days was less than 0 id subtract a month and add 31 to the days.

*IPO*:

INPUT: Take Today's year, month and day, as well as birth year, month and day as input

PROCESS: Check if birth year is a leap year. Validate birthdate based on month and leap year. Check if current year is a leap year. Validate current date based on month and leap year. Calculate age in years, months, and days, adjusting for negative values. Handle invalid dates.

OUTPUT: Age in years, months and days

*PseudoCode*:
```
INPUT bday, bmonth, byear
INPUT tday, tmonth, tyear
Leap = FALSE
Invalid = FALSE
IF byear % 400 == 0 || byear % 100 != 0 && byear % 4 == 0:
  Leap = TRUE

IF bmonth == 2:
  IF Leap == TRUE:
    IF bday > 29:
      Invalid = TRUE
  ELSEIF bday > 28:
    Invalid = TRUE

IF bmonth == 1 || bmonth == 3 || bmonth == 5 || bmonth == 7 || bmonth == 8 || bmonth == 10 || bmonth == 12:
  IF bday > 31:
      Invalid = TRUE
ELSE:
  IF bday > 30:
      Invalid = TRUE
Leap = FALSE

IF tyear % 400 == 0 || tyear % 100 != 0 && tyear % 4 == 0:
  Leap = TRUE

IF tmonth == 2:
  IF Leap == TRUE:
    IF tday > 29:
      Invalid = TRUE
  ELSEIF tday > 28:
    Invalid = TRUE

IF tmonth == 1 || tmonth == 3 || tmonth == 5 || tmonth == 7 || tmonth == 8 || tmonth == 10 || tmonth == 12:
  IF tday > 31:
      Invalid = TRUE
ELSE:
  IF tday > 30:
      Invalid = TRUE


IF Invalid == FALSE:
    years = tyear - byear
    months = tmonth - bmonth
    days = tday - bday
    IF days < 0:
      months -= 1
      days += 31
    IF months < 0:
      years -= 1
      months += 12
    OUTPUT "You are ", years, "Years, ", months, "Months and ", days,"Days old"
ELSE:
  OUTPUT "Invalid Dates"
```
