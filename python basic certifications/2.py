import math
import os
import random
import re
import sys


class Multiset(object):
    def __init__(self):
        # initializes an empty multiset
        self.dict = {}
        pass

    def add(self, val):
        # adds one occurrence of val from the multiset, if any
        if val in self.dict:
            self.dict[val] += 1
        else:
            self.dict[val] = 1
        pass

    def remove(self, val):
        # removes one occurrence of val from the multiset, if any
        if val in self.dict:
            self.dict[val] -= 1
            if self.dict[val] == 0:
                del self.dict[val]
        pass
    
    def __contains__(self, val):
        # returns True when val is in the multiset, else returns False
        return val in self.dict
    
    def __len__(self):
        # returns the number of elements in the multiset
        return sum(self.dict.values())