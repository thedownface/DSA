
class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        a=S.split('.')
        ans=""
        b=a[::-1]
        for word in b:
            ans+=word+'.'
        return ans[:-1]
            
