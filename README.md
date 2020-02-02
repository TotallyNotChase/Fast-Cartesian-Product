# Fast-Cartesian-Product
An algorithm to calculate any given index of a cartesian product.
Suppose we have 3 sequences - 
* A : `{1, 2, 3}`
* B : `{2, 6, 7, 9}`
* C : `{1, 7}`

Simply call `get_tuple_by_index` and pass in the list/array of sequences (i.e `[A, B, C]` or `{A, B, C}`) and the index of the result you want.
For `C` (the programming language), you'd also need to pass in the **number of sequences** (`3` in this case) and an **array containing the lengths of each sequences** (`{3, 4, 2}` in this case).

For example, if we'd call `get_tuple_by_index` with the **6th index** (starting from 0) of the cartesian product `A x B x C`, we'd get `(1, 9, 1)`
## How it works
*For this demonstration, we'll be using the sequences mentioned above as examples*
* The `list`/`array` of sequences, that we'd like the cartesian product to, in this case `[A, B, C]` or `{A, B, C}` is reverse iterated through.
* In each iteration, the `result tuple` is filled up from backwards.
* In each iteration, the `current element` of the `result tuple` will be the `index % length_of_current_set`th index of the current set.
* Additionally, in each iteration, the `index` is set to `index // length_of_current_set` where `//` signifies **integer division**
  So, in this case, in the first iteration, for `index = 6`, the `current element` will be `C[6 % 2]` or `C[0]` or `1`.
  That will now be added as the **last element** of `result tuple`. It'll now look like -> `(1)`
  
  `index` is now set to `6 // 2` or `3`
  
  
  In the second iteration, the `current element` will be `B[3 % 4]` or `B[3]` or `9`.
  That will now be added as the **second to last element** of `result tuple`. It'll now look like -> `(9, 1)`
  
  `index` is now set to `3 // 4` or `0`
  
  
  In the third iteration, the `current element` will be `A[0 % 3]` or `A[0]` or `1`.
  That will now be added as the **third to last element** (or first element in this case) of `result tuple`. It'll now look like -> `(1, 9, 1)`
