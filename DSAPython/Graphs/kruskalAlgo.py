import heapq

class Graph :
	def __init__(self,n):
        self.n = n
        self.adj = [[] for _ in range(n)]

    def addEdge(self,u,v,w):
        self.adj[u].append((v,w))
        self.adj[v].append((u,w))

    def mst(self):
        mstSum = 0
        vis = [False] * self.n
        pq = []
        heapq.heappush(pq,(0,0))

        while pq :
            edgeWt, currNode = heapq.heappop(pq)

            if vis[currNode] : continue

            vis[currNode] = True
            mstSum += edgeWt

            for nbr, wt in adj[currNode]:
                if not vis[nbr] : heapq.heappush(pq,(wt,nbr))

        return mstSum

    def __str__(self):
        return str(self.adj)