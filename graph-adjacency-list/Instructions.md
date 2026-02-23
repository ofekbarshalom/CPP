## Assignment 1 - Graph Implementation Using an Adjacency List

### Academic Integrity

While working on assignments, you may consult with other students and search for information online. However, copying complete code segments from external sources is strictly forbidden, including from other students, websites, and AI models (such as ChatGPT).

You must report any help you received, whether from other students or from online information, according to the [department academic integrity guidelines](https://www.ariel.ac.il/wp/cs/wp-content/uploads/sites/88/2020/08/Guidelines-for-Academic-Integrity.pdf).
**If you used AI tools, you must include the prompts you entered and the responses you received.**

-----
* **Assignment goal:** Understand the material taught in the first lectures, such as memory management in C++, classes, constructors, destructors, objects, namespaces, passing parameters to functions, and returning objects.
* **Important!** In this assignment, using the standard library is **not allowed** (arrays are allowed). **This means you must implement the data structure(s) needed for the assignment yourself.** All standard containers, including `vector` and `stack`, are *not available* in this assignment.
* **Individual submission only.**

---

## Submission Instructions (Moodle)

In Moodle, submit a **text file (for example, `submission.txt`)** containing 3 lines in the following format:

1. **ID Number** – the student's ID number.
2. **Submission Link** – a link to the GitHub repository containing the project.
3. **Last Commit Details** – the identifier string of the latest commit (`commit hash`).

 - Example of a valid submission file:
```
123456789
https://github.com/example-user/graph-assignment
e3f1c1a
```

---

Graphs are an integral part of computer science. During your studies, you have seen different ways to represent graphs (adjacency matrix, adjacency list, etc.).

In this assignment, you will implement a graph using an **adjacency list** – [Adjacency List](https://en.wikipedia.org/wiki/Adjacency_list).

---

## Assignment Requirements

### Implement the Following Classes
Add the classes in a new namespace called `graph`.

#### Class `Graph`
The graph is initialized with a fixed number of vertices, and this number cannot be changed afterward.
The class should contain the adjacency list and the following functions:

1. `addEdge` – receives three integers: source, destination, and weight (default weight is 1). The function adds an (undirected) edge to the graph.
2. `removeEdge` – receives two integers representing an edge and removes it from the graph. If the edge does not exist, the function should throw an exception.
3. `print_graph` – prints the graph in any reasonable format of your choice.
4. Add relevant constructors/helper functions as needed.

#### Class `Algorithms`
This class should implement various algorithms on an undirected graph, as close as possible to what you learned in Algorithms 1. The class should include the following functions:

1. `bfs` – receives a graph and a source vertex, and returns a graph that is a rooted tree (rooted at the source vertex) produced by a BFS traversal.
2. `dfs` – receives a graph and a starting vertex, and returns a graph (tree or forest) produced by a DFS traversal. (This tree should contain the original vertices and only tree edges.)
3. `dijkstra` – receives a graph and a starting vertex, and returns a weighted shortest-path tree.
4. `prim` – receives a graph, computes the minimum spanning tree, and returns it (i.e., returns a graph representing the tree).
5. `kruskal` – same as the previous item.
- Since STL is not available in this assignment, you will need to implement basic additional data structures for these algorithms: queue and/or priority queue and union-find. “Basic implementation” means these structures only need to be functionally correct; there is no special complexity requirement.

---

#### Additional Requirements

- Make sure the repository is public.
- At the beginning of **every** file, include your email address.
- Write clean, organized, modular code split into files, with sufficient documentation and unit tests for all functions.
- Validate input correctness and throw appropriate exceptions when needed.
- Add a file with the main function `main` that demonstrates usage of the classes and functions you created.
- You may use the following link for reference: [doctest](https://github.com/doctest/doctest), which includes additional usage examples.
- Check for memory leaks using `valgrind`.
- Also include a `README` file with an explanation of the project, class/file organization, and any other relevant information.


#### `Makefile`
Add a `Makefile` to the project that includes the following commands:
- `make Main` – run the demo file.
- `make test` – run unit tests.
- `make valgrind` – check for memory leaks using valgrind.
- `make clean` – delete all irrelevant/generated files after running.


Good luck!
