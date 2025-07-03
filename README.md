# sortlib
A collection of sorting algorithms, as an exercise in coding.
### Bubble Sort
Iterate through the array, comparing each element to the next element. If the first compared element is larger than the second,  swap them. After going through all elements, start over. The sort ends when a full iteration is made without swapping any elements.
### Selection Sort
Keep the smallest element found while going through the array. After a full iteration, place the smallest element at the start of the array, then run selection sort again, excluding the first element. The sort ends when the size of the array reaches 1.
### Bogo Sort
A joke sorting algorithm. Shuffles the array, then checks if it's sorted. If not, shuffles again. Comparable to sorting a deck by throwing the cards in the air and picking them from the floor at random.