
*PseudoCode*:
// M = 3, N = 5, Amount 4
INPUT M, N, Amount
Flag = FALSE
Mamount = M
Namount = 0
WHILE Namount < N:
  Namount += 1
  Mamount -= 1

  IF Mamount == 0:
    Mamount = M

WHILE Namount != Amount:
  Namount += 1
  Mamount -= 1

  IF Mamount == 0:
    Mamount = M
  
