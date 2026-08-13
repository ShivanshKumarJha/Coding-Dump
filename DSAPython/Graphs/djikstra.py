import heapq

class Graph :
	def __init__(self,n):
        self.n = n
        self.adj = [[] for _ in range(n)]

    def addEdge(self,u,v,w):
        self.adj[u].append((v,w))
        self.adj[v].append((u,w))

    def djikstra(self, src):
    	pq = [(0, src)]
    	dist = [float('inf')] * self.n
    	dist[src] = 0

    	while pq:
    		currDis, currNode = heapq.heappop(pq)

    		for v, currWt in self.adj[currNode]:
    			if dist[v] > currDis + currWt :
    				dist[v] = currDis + currWt
    				heapq.heappush(pq,(dist[v],v))

    	return dist

    def __str__(self):
        return str(self.adj)