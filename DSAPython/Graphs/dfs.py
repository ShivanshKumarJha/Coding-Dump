class Graph:
    def __init__(self,nVertices):
        self.nVertices = nVertices
        self.mat = [[] for _ in range(nVertices)]

    def addEdge(self,u,v):
        self.mat[u].append(v)
        self.mat[v].append(u)

    def removeEdge(self,u,v):
        if u in self.mat[v]:
            self.mat[u].remove(v)
            self.mat[v].remove(u)
        else : return

    def __dfsHelper(self,node,vis):
        print(node,end=" ")
        vis[node] = 1

        for nbr in self.mat[node]:
            if vis[nbr] == 0 : self.__dfsHelper(nbr,vis)

    def dfs(self):
        vis = [0] * (self.nVertices)
        for i in range(self.nVertices):
            if vis[i] == 0 : self.__dfsHelper(i,vis)

    def __str__(self):
        return str(self.mat)
    

if __name__ == '__main__':
    g = Graph(7)
    g.addEdge(0,1)
    g.addEdge(1,3)
    g.addEdge(2,4)
    print(g)
    g.removeEdge(1,2)
    print(g)
    g.removeEdge(1,3)
    print(g)
    g.addEdge(2,4)
    g.addEdge(5,6)
    g.dfs()