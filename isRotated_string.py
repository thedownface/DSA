    def isRotated(self,str1,str2):
        str3=str1[2:]+str1[:2]
        str4=str1[-2:]+str1[:-2]
        if str3==str2 or str4==str2:
            return 1
        else:
            return 0
        
