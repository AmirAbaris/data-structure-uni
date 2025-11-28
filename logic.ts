// i am more comfortable with javascript than typescript for hash logics and map

const map = new Map<string, number>();

const items = [
  { name: "apple", price: 10 },
  { name: "banana", price: 20 },
  { name: "cherry", price: 30 },
];

for (const item of items) {
  map.set(item.name, item.price);
}

console.log(map.get("apple"));

// search example
for (const item of items) {
  if (map.get(item.name) === 10) {
    console.log(item.name);
  }
}

// graph is a collection of nodes and edges
class Graph {
  adjList: Map<number, number[]>;

  constructor() {
    this.adjList = new Map();
  }

  addVertex(vertex: number) {
    this.adjList.set(vertex, []);
  }

  addEdge(vertex1: number, vertex2: number) {
    this.adjList.get(vertex1)?.push(vertex2);
  }
}

// BFS algorithm is a graph traversal algorithm that visits all the nodes of a graph level by level
function bfs(graph: Graph, start: number) {
  const visited = new Set<number>();
  const queue: number[] = [start];
  visited.add(start);
  while (queue.length > 0) {
    const current = queue.shift();
    console.log(current);
  }
}

// DFS algorithm is a graph traversal algorithm that visits all the nodes of a graph depth by depth
function dfs(graph: Graph, start: number) {
  const visited = new Set<number>();
  const stack: number[] = [start];
  visited.add(start);
  while (stack.length > 0) {
    const current = stack.pop();
    console.log(current);
  }
}

