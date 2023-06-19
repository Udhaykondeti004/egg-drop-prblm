# egg-drop-prblm

## Problem Statement
You are given N identical eggs and you have access to a Kfloored building from 1 to K.
There exists a floor f where such that any egg dropped at a 
floor higher than f will break, and any egg dropped at or 
below floor f will not break. 

o An egg that survives a fall can be used again.

o A broken egg must be discarded.

o The effect of a fall is the same for all eggs.

o If the egg doesn't break at a certain floor, it will not 
break at any floor below.

o If the eggs breaks at a certain floor, it will break at any 
floor above.

Print the minimum number of moves or steps that you 
need to determine what the value of threshold floor is ?

## Explanation
If we choose a xth floor and if eggs don’t break from there
we are certain that all floor below cant be the threshold
floor, but if the egg breaks, from there we are certain that
any floor below can be our answer
All the floors must be checked separately as we have to
consider the worst case of egg not breaking till we reach the
top. Hence minimum number of moves equals number of
floors
This process uses brute force algorithm, and for worst case
scenario, we need to check N times which is not the best
case, hence we need to use recursive technique, which
includes storing of values in a table.
Dynamic Programming helps to minimize the complexity
and helps to attain the threshold floor in least moves as
possible
Handle the base cases, when floors = 0 or 1 and eggs = 1.
Run a loop from 1 to K and for each iteration, recurse for the 
case, if the egg breaks on the Xth floor or not and maximize 
it. Also, minimize the minimum floor found so far. Return 
the minimum floor
In this above recursive step we are calculating the know 
values for more than one time so, we need to derive a 
formula out of it and store it in a table as we do in dynamic 
programming
Solve it in bottom up manner, means start from the 
smallest sub problem possible (here it is 0 eggs 0 floors) 
and solve it. Store the result in some temporary storage.
Recursive equation will be same as above. Start solving 
from smallest sub problem and move towards final 
problem. Use the temporary result being stored instead of 
solving the sub problems again
