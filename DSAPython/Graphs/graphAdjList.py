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

    def __str__(self):
        return str(self.mat)
    
if __name__ == '__main__':
    g = Graph(5)
    g.addEdge(0,1)
    g.addEdge(1,3)
    g.addEdge(2,4)
    print(g)
    g.removeEdge(1,2)
    print(g)
    g.removeEdge(1,3)
    print(g)