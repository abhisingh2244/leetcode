from typing import List
from collections import Counter

class Solution:
    def makePalindrome(self, n : int, arr : List[str]) -> bool:
        counts = Counter(arr)
        counts.update(map(lambda a: a[::-1], arr))
        return all(map(lambda x: x == 2, counts.values()))


#{ 
 # Driver Code Starts
class StringArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=input().strip().split()#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        arr=StringArray().Input(n)
        
        obj = Solution()
        res = obj.makePalindrome(n, arr)
        
        result_val = "YES" if res else "NO"
        print(result_val)

# } Driver Code Ends