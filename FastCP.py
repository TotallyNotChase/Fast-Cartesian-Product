from itertools import product
from random import randint

def get_tuple_by_index(setlist, index):
    CPtuple = ()
    for current_set in reversed(setlist):
        element = current_set[index % len(current_set)]
        CPtuple = (element, ) + CPtuple
        index = index // len(current_set)
    return CPtuple

if __name__ == "__main__":
    firstset = [randint(0, 1000) for i in range(50)]
    secondset = [randint(0, 1000) for i in range(50)]
    thirdset = [randint(0, 1000) for i in range(50)]
    originalCP = list(product(firstset, secondset, thirdset))
    setlist = [firstset, secondset, thirdset]
    for i in range(0, 1000):
        assert(originalCP[i] == get_tuple_by_index(setlist, i))
