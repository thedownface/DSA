    
    #Function to check if two strings are rotations of each other or not.
    def areRotations(self,s1,s2):
        l=0
        r=len(s1)
        if len(s1)!=len(s2):
            return False
        else:
        
            while(l<r):
                if s1[l:]+s1[:l]==s2:
                    return True
                    break
                l+=1
        return False
                
