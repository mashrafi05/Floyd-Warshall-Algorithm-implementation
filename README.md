# Floyd-Warshall-Algorithm-implementation
Floyd-Warshall Algorithm Implementation in C++ for All-Pairs Shortest Path Problem
# Floyd-Warshall Algorithm in C++ (CSE 2221)

This repository contains a C++ implementation of the **Floyd-Warshall Algorithm**, which solves the **All-Pairs Shortest Path (APSP)** problem in a weighted graph. The algorithm is useful for finding the shortest paths between all pairs of vertices in a graph, whether the graph is directed or undirected.

---

## 🧠 What is Floyd-Warshall Algorithm?

The **Floyd-Warshall algorithm** is an efficient way to compute the shortest paths between all pairs of vertices in a weighted graph, including graphs with negative weights (as long as there are no negative weight cycles). The algorithm iteratively improves the solution by considering intermediate vertices between pairs of vertices.

---

## 🔧 Code Description

1. **Input:**
   - Number of vertices `n` and edges `e`.
   - List of edges, each consisting of two vertices `u`, `v` and a weight `w` representing the edge from vertex `u` to vertex `v` with weight `w`.

2. **Steps:**
   - Initialize the distance matrix with:
     - `0` for the diagonal (distance from a node to itself),
     - `INT_MAX` for all other distances (indicating no direct edge).
   - Update the matrix with the input edge weights.
   - Use the **Floyd-Warshall** algorithm to update the matrix with the shortest paths through intermediate vertices.

3. **Output:**
   - The **distance matrix** after running the Floyd-Warshall algorithm, showing the shortest paths between all pairs of vertices.

---

## 📝 Sample Input and Output

**Input:**
