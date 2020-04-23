class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        if not g or not s: return 0
        
        g.sort()
        s.sort()
        result = 0
        child_id = 0
        
        for cookies in s:
            if child_id >= len(g):
                return result
            if cookies >= g[child_id]:
                result += 1
                child_id += 1
        
        return result
