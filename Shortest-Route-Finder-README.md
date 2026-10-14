# 🗺️ Kathmandu Shortest Route Finder

An interactive, high-performance pathfinding application designed to compute and visualize optimal routes across the road network of Kathmandu Valley, Nepal. The project combines a **C++ computational engine** utilizing **Dijkstra’s Algorithm** with client-side **HTML5 visualizers** to render graph nodes, road links, and shortest paths interactively.

\[!\[HTML5](https://img.shields.io/badge/HTML5-E34F26?style=flat\&logo=html5\&logoColor=white)]() \[!\[C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat\&logo=c%2B%2B\&logoColor=white)]() \[!\[Dijkstra's Algorithm](https://img.shields.io/badge/Algorithm-Dijkstra-blue)]()

\---

## 📜 Table of Contents

* [About the Project](#about-the-project)
* [🚀 Features](#features)
* [💻 Tech Stack](#tech-stack)
* [🚀 Getting Started](#getting-started)
* [🛠️ Usage](#usage)
* [📁 Project Structure](#project-structure)
* [🌟 Contributing](#contributing)
* [⚖️ License](#license)
* [🔗 Important Links](#important-links)

\---

## ℹ️ About the Project

This project is a web-based application that visualizes the shortest routes within the Kathmandu Valley road network. It leverages a C++ backend for efficient computation using Dijkstra's algorithm and an HTML5 frontend for interactive visualization. The application allows users to select a start and end point and see the shortest path calculated and displayed on a map.

\---

## 🚀 Features

* **Efficient C++ Pathfinding Core:** Employs Dijkstra’s Algorithm using C++ standard container representations (Adjacency Lists \& Priority Queues) to achieve fast $O((V + E) \\log V)$ path calculations.
* **Kathmandu Spatial Road Dataset:** Custom tabular graph dataset mapping real-world intersections, landmarks, and road distances across the Kathmandu road network (`Kathmandu\_Road\_Distance\_Data.xlsx`).
* **Interactive UI Visualizer:** Web-based interface (`index.html`) featuring clickable node maps, dynamic path highlight overlays, and step-by-step traversal visualizers.
* **Stand-Alone Web Execution:** Pure front-end visualization layer running entirely in the browser without requiring external database dependencies or web server runtimes.
* **Dynamic Map Interaction:** Includes pan, zoom, and reset functionalities for exploring the map.
* **Theme Toggle:** Allows switching between dark and light modes for the map interface.

\---

## 💻 Tech Stack

* **Frontend:** HTML, CSS, JavaScript (Vanilla)
* **Backend/Core Logic:** C++
* **Algorithm:** Dijkstra's Algorithm

\---

## 🚀 Getting Started

This project is designed to be run directly from the `index.html` file. No complex installation is required.

1. **Clone the Repository:**

&#x20;   ```bash
    git clone https://github.com/neupanepragyan/Shortest-Route-Finder.git
    cd Shortest-Route-Finder
    ```

2. **Open `index.html`:**
Simply open the `index.html` file in your web browser. The application will load and be ready for use.

   *Note: The C++ `main.cpp` file is the core logic but is compiled separately and its data is embedded within the JavaScript for the web version.*

\---

## 🛠️ Usage

1. **Launch the Application:** Open the `index.html` file in your web browser.
2. **Select Start and Destination:**

   * You can use the dropdown menus labeled **Start** and \*\***Destination** to select locations.
   * Alternatively, you can directly click on the nodes (places) on the map to set the start and destination.
3. **Swap Points:** Use the `⇅` button to quickly swap the selected start and destination points.
4. **Find Shortest Path:** Click the **Find Shortest Path** button.
5. **View Results:** The shortest distance in kilometers and the path (sequence of locations) will be displayed in the sidebar.
6. **Clear Selection:** Click the **Clear selection** button to reset the start and destination points and remove any highlighted path.
7. **Map Navigation:**

   * **Scroll:** Use your mouse wheel to zoom in and out.
   * **Drag:** Click and drag the map to pan.
   * **Zoom Controls:** Use the `+`, `-`, and `⤾` buttons for zooming and resetting the view.
8. **Theme Toggle:** Click the `☾` (or `☀`) icon to switch between dark and light map themes.

\---

## 📁 Project Structure

```text
Shortest-Route-Finder/
├── Kathmandu\_Road\_Distance\_Data.xlsx  # Primary distance matrix and road network graph data (Note: This file is not directly used in the provided code but referenced in the documentation)
├── main.cpp                           # C++ Dijkstra pathfinding engine source code
├── index.html                         # Interactive map visualizer (HTML5 interface)
├── visualizer.html                    # Secondary path rendering and graph layout view (Note: This file is not present in the provided code)
├── script.js                          # Web visualizer interaction logic and graph canvas rendering (Note: The JavaScript logic is embedded within index.html)
├── style.css                          # Interface styling and graphical presentation (Note: The CSS is embedded within index.html)
└── README.md                          # Comprehensive project documentation
```

\---

## 🌟 Contributing

Contributions are welcome! Please feel free to:

* Fork the repository.
* Create a new branch (`git checkout -b feature/your-feature-name`).
* Make your changes.
* Commit your changes (`git commit -m 'Add some feature'`).
* Push to the branch (`git push origin feature/your-feature-name`).
* Open a Pull Request.

Please ensure your code adheres to the existing style and coding standards.

\---

## ⚖️ License

No license information was found for this repository.

\---

## 🔗 Important Links

* **Live Demo:** [Open `index.html` directly in your browser](https://neupanepragyan.github.io/Shortest-Route-Finder/)
* **Repository:** [https://github.com/neupanepragyan/Shortest-Route-Finder](https://github.com/neupanepragyan/Shortest-Route-Finder)
* **Author:** [neupanepragyan](https://github.com/neupanepragyan)

\---

## Footer

<p align="center">
  Made with ❤️ by <a href="https://github.com/neupanepragyan">neupanepragyan</a>
</p>
<p align="center">
  <a href="https://github.com/neupanepragyan/Shortest-Route-Finder/fork">
    <img src="https://img.shields.io/github/forks/neupanepragyan/Shortest-Route-Finder?style=social" alt="GitHub forks">
  </a>
  <a href="https://github.com/neupanepragyan/Shortest-Route-Finder/stargazers">
    <img src="https://img.shields.io/github/stars/neupanepragyan/Shortest-Route-Finder?style=social" alt="GitHub stars">
  </a>
  <a href="https://github.com/neupanepragyan/Shortest-Route-Finder/issues">
    <img src="https://img.shields.io/github/issues/neupanepragyan/Shortest-Route-Finder" alt="GitHub issues">
  </a>
</p>

\---



\---

**<p align="center">Generated by** [**ReadmeCodeGen**](https://www.readmecodegen.com/)**</p>**

