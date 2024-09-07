*Approach*:
Take the necessary inputs and use a while loop with IF statements to add price of all items chosen.


*IPO*:

INPUT: Take cart, money and prices of fruits/vegetables as input

PROCESS: Ask user to add vegetable to cart, before inquiring about the quantity and multiply the quantity with the vegetable/fruit price. Add the price to total. once cart input is emtpy, Subtract total from money to calculate Change. 

OUTPUT: Display Payment and Change

*PseudoCode*:

```
Total = 0
INPUT Money, Oprice, Aprice, Gprice, Tprice, cart
  WHILE cart != "":
    INPUT kgquantity
    IF cart == "Onions":
        Total += kgquantity * Oprice
    ELSEIF cart == "Apricots":
        Total += kgquantity * Aprice
    ELSEIF cart == "Grapes":
        Total += kgquantity * Gprice
    ELSEIF cart == "Tomatoes":
        Total += kgquantity * Tprice
    ENDIF
    INPUT cart
  END WHILE
OUTPUT "Your payment is ", Total
Change = Money - Total
OUTPUT "Your change is ", Change
```
