# 🗺️ Kathmandu Shortest Route Finder

An interactive, high-performance pathfinding application designed to compute and visualize optimal routes across the road network of Kathmandu Valley, Nepal. The project combines a **C++ computational engine** utilizing **Dijkstra’s Algorithm** with client-side **HTML5 visualizers** to render graph nodes, road links, and shortest paths interactively.

---

## 🚀 Features

* **Efficient C++ Pathfinding Core:** Employs Dijkstra’s Algorithm using C++ standard container representations (Adjacency Lists & Priority Queues) to achieve fast $O((V + E) \log V)$ path calculations.
* **Kathmandu Spatial Road Dataset:** Custom tabular graph dataset mapping real-world intersections, landmarks, and road distances across the Kathmandu road network (`Kathmandu_Road_Distance_Data.xlsx`).
* **Interactive UI Visualizer:** Web-based interface (`index.html`) featuring clickable node maps, dynamic path highlight overlays, and step-by-step traversal visualizers.
* **Stand-Alone Web Execution:** Pure front-end visualization layer running entirely in the browser without requiring external database dependencies or web server runtimes.

---

## 📁 Project Structure

```text
Shortest-Route-Finder/
├── Kathmandu_Road_Distance_Data.xlsx  # Primary distance matrix and road network graph data
├── main.cpp                           # C++ Dijkstra pathfinding engine source code
├── index.html                         # Interactive map visualizer (HTML5 interface)
├── visualizer.html                    # Secondary path rendering and graph layout view
├── script.js                          # Web visualizer interaction logic and graph canvas rendering
├── style.css                          # Interface styling and graphical presentation
└── README.md                          # Comprehensive project documentation