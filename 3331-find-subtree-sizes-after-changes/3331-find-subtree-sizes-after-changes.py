class Solution:
    def findSubtreeSizes(self, parent: List[int], s: str) -> List[int]:
        n = len(parent)

        adj = [[] for _ in range(n)]

        for i in range(1, n):
            adj[parent[i]].append(i)

        new_parent = parent[:]
        nearest = [-1] * 26

        def build(node):
            c = ord(s[node]) - ord('a')
            old = nearest[c]

            if old != -1:
                new_parent[node] = old

            nearest[c] = node

            for child in adj[node]:
                build(child)

            nearest[c] = old

        build(0)

        new_adj = [[] for _ in range(n)]

        for i in range(1, n):
            new_adj[new_parent[i]].append(i)

        ans = [1] * n

        def dfs(node):
            size = 1

            for child in new_adj[node]:
                size += dfs(child)

            ans[node] = size
            return size

        dfs(0)

        return ans