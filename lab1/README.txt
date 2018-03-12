Both requirements of my lab compile. My lab 1 met the first requirement completely and met the second requirement somewhat. My 
first requirement mySort.c code compiles fine. However, in the second requirement, although my
sortMain.c does compile, it runs into some problems. The first case of displaying the test data if 
the argc is 1, displays the right output. Somehow, for the second case of testing a jumpbled list of numbers,
my program does nothing. Lastly, for the case of strings, does nothing as well. I tried for many hours to figure out why this is happeneing even though I converted my strings to integers, I ran into 
many errors. 

As for the question asked, 

The better sort function would be implemented by storing the first and last variables in temporary variables. Then 
use the insertion sort to compare each element in the array with the temporary variables. Then do as the 
insertion sort will do to arrange all the elements in ascending order.