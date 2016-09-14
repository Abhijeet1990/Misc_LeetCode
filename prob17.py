class Solution:
    
    def __init__(self):
        self.dic={'2':['a','b','c'],'3':['d','e','f'],'4':['g','h','i'],'5':['j','k','l'],'6':['m','n','o'],'7':['p','q','r','s'],'8':['t','u','v'],'9':['w','x','y','z']}
        
    def letterCombinations(self, digits):
       if not digits:
           return []
      
       res=[]
       line=[]
       self.helper(digits,0,res,line)
       
       return res
       
    def helper(self,digits,cur,res,line):
        if len(line)== len(digits):
            
            res.append(''.join([x for x in line]))
            print "%s"%(res)
            return
        
        for l in self.dic[digits[cur]]:
            
            line.append(l)
            self.helper(digits,cur+1,res,line)
            print "%s %s"%(line,cur)
            line.pop()
			
			
"""
digits ="34"

['dg']
['d', 'g'] 1
['dg', 'dh']
['d', 'h'] 1
['dg', 'dh', 'di']
['d', 'i'] 1
['d'] 0
['dg', 'dh', 'di', 'eg']
['e', 'g'] 1
['dg', 'dh', 'di', 'eg', 'eh']
['e', 'h'] 1
['dg', 'dh', 'di', 'eg', 'eh', 'ei']
['e', 'i'] 1
['e'] 0
['dg', 'dh', 'di', 'eg', 'eh', 'ei', 'fg']
['f', 'g'] 1
['dg', 'dh', 'di', 'eg', 'eh', 'ei', 'fg', 'fh']
['f', 'h'] 1
['dg', 'dh', 'di', 'eg', 'eh', 'ei', 'fg', 'fh', 'fi']
['f', 'i'] 1
['f'] 0"""