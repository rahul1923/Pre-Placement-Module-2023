class Solution:
    def findJudge(self, N, trust):
        if not trust and N == 1:
            return 1
        cands = [0] * (N+1)
        for elem1, elem2 in trust:
            cands[elem2] += 1
            cands[elem1] -= 1
            
        return cands.index(N-1) if N-1 in cands else -1