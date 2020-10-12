module FastCP
  (
    getNthTuple
  ) where

{-
Recursively go through all the sets and extract the (n `mod` length rev) element

Modify n to be (n `div` length rev) each recursion
-}
getNthTuple' :: Int -> [[a]] -> [a]
getNthTuple' _ [] = []
getNthTuple' n (rev:revs) = rev !! currIndx : getNthTuple' newN revs
    where 
        lenrev = length rev
        currIndx = n `mod` lenrev
        newN = n `div` lenrev

{-
Invoke getNthTuple' and pass in a reversed list of sets, as well as the index

Reverse the final result and return it
-}
getNthTuple :: Int -> [[a]] -> [a]
getNthTuple = (reverse .) . (. reverse) . getNthTuple'
