class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        stack = []
        res = []
        def backtrack(openN, closeN):
            if openN == closeN == n:
                res.append("".join(stack))
            if openN < n:
                stack.append("(")
                backtrack(openN+1, closeN)
                stack.pop()
            if closeN < openN:
                stack.append(")")
                backtrack(openN, closeN+1)
                stack.pop()
        backtrack(0, 0)
        return res

so = Solution()
ans = so.generateParenthesis(3)
print(ans)
