*Approach*:

Take the size of M and N jugs as well as target number of litres as input. use swapping to mkae sure M is always greater than N, so the code runs efficiently.
I can use the euclidean algorithm to calculate gcd which can be used to check if its possible to get target amount out of the jugs. if gcd is 0, i used a while loop, until the target amount was acquired, to refill m if it reaches 0, empty n if it reaches its capacity, or pour water from M to N or N to M, respectively, according to which one can handle it without overflowing. Finally i can print the name of he jug along with the target litres, it holds.

*IPO*:

INPUT: Take M, N, and Target as input

PROCESS: Set Mmaount and Namount to 0. Check if M is less than N, if it is, store M in temp, store N in M and store temp in N, to successfully swap. After that use While loop, while N is not 0, Use euclideans algorithm to calculate GCD (Problem solved prior), compare and see if modulus of target and gcd is not 0, if it is not, print not possible and end the program. If it is then use another while loop, until Mamount of Namount is equal to target. If Mamount is -, fill it with M. Otherwise, If Namount is full, set it to 0. Else, If Mamount is less than the remaining capacity in Namount (N - Namount), then add Mamount to Namount and set Mamount to 0. Otherwise, subtract remaining capacity of N jug from Mamount, and set Namount to N. 

OUTPUT: Print whichever Jug has the required target amount.

*PseudoCode*: 
```
INPUT M, N, target
Mamount = 0
Namount = 0

IF M < N:
  temp = M
  M = N
  N = temp

WHILE N != 0:
  temp = M % N
  M = N
  N = temp
gcd = N

IF target % gcd != 0 or target > M:
  OUTPUT "Not Possible"
ELSE:
  WHILE Mamount != target and Namount != target:
    IF Mamount == 0:
      Mamount = M
    ELSEIF Namount == N:
      Namount = 0
    ELSE:
      IF Mamount <= N - Namount:
        Namount = Namount + Mamount
        Mamount = 0
      ELSE:
        Mamount = Mamount - (N - Namount)
        Namount = N

IF Mamount == target:
  OUTPUT "Jug M has exactly ", target, "Litres"
IF Namount == target:
  OUTPUT "Jug N has exactly ", target, "Litres"
```
