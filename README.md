# Fast-Cartesian-Product
An algorithm to calculate any given index of a cartesian product.
Suppose we have 3 sets - 
* A : `{1, 2, 3}`
* B : `{2, 6, 7, 9}`
* C : `{1, 7}`

Simply call `get_tuple_by_index` and pass in the list/array of sets (i.e `[A, B, C]` or `{A, B, C}`) and the index of the result you want.
For `C`, you'd also need to pass in the **number of sets** (`3` in this case) and an **array containing the lengths of each sets** (`{3, 4, 2}` in this case).

For example, if we'd call `get_tuple_by_index` with the **6th index** (starting from 0) of the cartesian product `A x B x C`, we'd get `(1, 9, 1)`
