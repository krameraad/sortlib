# sortlib
A collection of sorting algorithms, as an exercise in coding.
## Included sorts
### Bubble Sort
Iterate through the array, comparing each element to the next element. If the first compared element is larger than the second, swap them. After going through all elements, start over. The sort ends when a full iteration is made without swapping any elements.
### Cocktail Sort
Variant of bubble sort. After one loop going through the array, go backwards through the array, efficiently pushing low numbers at the end towards the beginning. Then, go forwards again, swapping from forwards and backwards until the array is sorted.
### Comb Sort
Variant of bubble sort. Whereas bubble sort compares and swaps elements that are right next to eachother, comb sort starts off swapping elements far away from eachother. After each loop, the distance is divided by 1.3 until it reaches 1 again, like bubble sort.
### Selection Sort
Keep the smallest element found while going through the array. After a full iteration, place the smallest element at the start of the array, then run selection sort again, excluding the first element. The sort ends when the size of the array reaches 1.
### Bogo Sort
A joke sorting algorithm. Shuffles the array, then checks if it's sorted. If not, shuffles again. Comparable to sorting a deck by throwing the cards in the air and picking them from the floor at random.