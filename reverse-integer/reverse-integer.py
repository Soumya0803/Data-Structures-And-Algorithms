class Solution:
    def reverse(self, x: int) -> int:
        if x < 0:
            rev= -1 * int(str(x)[::-1][:-1])
        else:
            rev=int(str(x)[::-1])
            
        return rev if -2**31 <= rev <= 2**31 -1 else 0
        
            
            
            
        
        
    