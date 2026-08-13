class DisjointSet:
	def __init__(self,n):
		self.rank = [0] * n
		self.parent = list(range(n))
		self.size = [1] * n

	def findUPar(self, node):
		if self.parent[node] != node : self.parent[node] = self.findUPar(self.parent[node])
		return self.parent[node]

	def unionByRank(self, u, v):
		ulp_u = self.findUPar(u)
		ulp_v = self.findUPar(v)
		if ulp_u == ulp_v : return 

		if self.rank[ulp_u] < self.rank[ulp_v] : 
			self.parent[ulp_u] = ulp_v
		elif self.rank[ulp_v] < self.rank[ulp_u] : 
			self.parent[ulp_v] = ulp_u
		else : 
			self.parent[ulp_v] = ulp_u
			self.rank[ulp_u] += 1

	def unionBySize(self, u, v):
		ulp_u = self.findUPar(u)
		ulp_v = self.findUPar(v)
		if ulp_u == ulp_v : return 

		if self.size[ulp_u] < self.size[ulp_v] : 
			self.parent[ulp_u] = ulp_v
			self.size[ulp_v] += self.size[ulp_u]

		else :
			self.parent[ulp_v] = ulp_u
			self.size[ulp_u] += self.size[ulp_v]
