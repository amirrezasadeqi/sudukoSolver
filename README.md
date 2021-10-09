# sudukoSolver
writing a suduko Solver as a practice for becoming programmer 

## Pseudo Code for sudo table

1. create a recursive function which gets a table and does bellow things:
2. find the first empty cell(0 means empty).
3. if there are no empty cell print the table and return true.
4. for the empty cell find valid digits from 1 to 9.
5. if there was no valid digit for the empty cell, so the table is unsolvable
   and then return false.
6. for each valid digit create a new table and do:
7.  call the recursive function to solve the new table.
8.  if calling recursive function returned true then break the loop.
9.  if calling recursive function returned false then continue the loop.
10. now that the program squence arrived here the suduko solved and you must
   return true.


