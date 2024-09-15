*Approach*:

Filling the 3L jug and pouring it into the 5L jug, repeating the process so we have a full 5L jug and a 3L jug with one L filled. Then i will empty the 5L jug and pour the 1L from the 3L jug into the 5L jug. I will fill the 3L jug to the brim and then pour that on top of the 1L jug, which will give me exactly 4L in the 5L jug

*IPO*:

INPUT: There is no need for an input

PROCESS: Set 3jug variable to 3 and 5jug to zero. Use a while loop to gradually pour 3jug into 5jug (incrementing 5jug and decrementing 3jug) and refill the 3jug if its empty, until 5jug is == 5. Set 5jug to 0 and repeat the while process using the 1L in the 3 jug at the start, until 5jug == 4

OUTPUT: 5jug


*PseudoCode*:
```
3jug = 3
5jug = 0

WHILE 5jug < 5:
  5jug = 5jug + 1
  3jug = 3jug - 1

  IF 3jug == 0:
    3jug = 3

5jug = 0
WHILE 5jug != 4:
  5jug = 5jug + 1
  3jug = 3jug - 1
  
  IF 3jug == 0:
    3jug = 3

OUTPUT 5jug
```
![WhatsApp Image 2024-09-15 at 13 29 21_a8cb4a39](https://github.com/user-attachments/assets/73925b34-e271-4a6c-81e5-8d3d35138275)

