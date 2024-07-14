class Solution:
    def getSmallestString(self, s: str) -> str:
        
        n = len(s)
        x = list(s)
        
        for i in range(n - 1):
     
            if (int(x[i]) % 2 == int(x[i + 1]) % 2):
               
                if x[i] > x[i + 1]:
                    x[i], x[i + 1] = x[i + 1], x[i]
                    break
        
        return "".join(x)
            

