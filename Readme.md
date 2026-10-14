# 🗺️ Kathmandu Shortest Route Finder

An interactive web application that finds and visualizes the shortest route between locations in the Kathmandu Valley road network. The shortest path is computed using **Dijkstra's Algorithm**, and the result is displayed on an interactive map in the browser.

[![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=flat&logo=html5&logoColor=white)](https://developer.mozilla.org/en-US/docs/Web/HTML)
[![CSS3](https://img.shields.io/badge/CSS3-1572B6?style=flat&logo=css3&logoColor=white)](https://developer.mozilla.org/en-US/docs/Web/CSS)
[![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=flat&logo=javascript&logoColor=black)](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

[![GitHub forks](https://img.shields.io/github/forks/neupanepragyan/Shortest-Route-Finder?style=social)](https://github.com/neupanepragyan/Shortest-Route-Finder/fork)
[![GitHub stars](https://img.shields.io/github/stars/neupanepragyan/Shortest-Route-Finder?style=social)](https://github.com/neupanepragyan/Shortest-Route-Finder/stargazers)
[![GitHub issues](https://img.shields.io/github/issues/neupanepragyan/Shortest-Route-Finder)](https://github.com/neupanepragyan/Shortest-Route-Finder/issues)

---

## 📜 Table of Contents

- [About the Project](#about)
- [Features](#features)
- [Tech Stack](#tech-stack)
- [How It Works](#how-it-works)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)
- [License](#license)
- [Author](#author)

---

<a id="about"></a>

## ℹ️ About the Project

An interactive web application that finds and visualizes the shortest route between locations in the Kathmandu Valley road network. This repository accurately models the valley's transit layout using **85 unique nodes (locations)** and **150 interconnecting edges (road segments)** extracted from real-world regional measurements. The shortest path is computed dynamically using **Dijkstra's Algorithm**, and the result is displayed instantly on an interactive map in the browser. 

The project has two parts:

- A **C++ program** (`main.cpp`) that implements Dijkstra's Algorithm.
- A **browser-based visualizer** (`index.html`) that lets users pick a start and a destination, then shows the shortest path and its total distance on a map.

## Data Acquisition & Sources

The core dataset powering this routing engine was compiled by standardizing and merging spatial information from three major administrative sectors: Kathmandu, Bhaktapur, and Lalitpur. Ground-truth distance metrics were cross-referenced and synthesized from:
* The official [Department of Roads (DOR) National Highway Data Portal](https://ssrn.dor.gov.np/national "DOR Highway Portal").
* Spatial mapping references extracted from Google Maps and several secondary online transit tools.

The unified, clean version of this compiled network map is available directly within this repository inside the [Kathmandu Road Distance Data Sheet](Kathmandu_Road_Distance_Data_Thimi.xlsx "Repository Data Sheet File").
---

<a id="features"></a>

## 🚀 Features

- **Dijkstra's Algorithm:** Implemented in C++ using an adjacency matrix.
- **Real Road Network Data:** Nodes and distances represent actual locations and roads in the Kathmandu Valley.
- **Interactive Map:** Select locations by clicking nodes on the map or by using the dropdown menus.
- **Path Highlighting:** The shortest route is highlighted on the map, and the total distance (in km) and the sequence of places are shown in the sidebar.
- **Map Controls:** Zoom with the mouse wheel or the on-screen buttons, drag to pan, and reset the view at any time.
- **Dark and Light Themes:** Switch the map appearance with a single click.
- **No Installation Required:** The web version runs entirely in the browser, with no server or database.

---

<a id="tech-stack"></a>

## 💻 Tech Stack

| Layer | Technology |
|-------|------------|
| Frontend | HTML, CSS, JavaScript (vanilla) |
| Core Logic | C++ |
| Algorithm | Dijkstra's Algorithm |

---

<a id="how-it-works"></a>

## ⚙️ How It Works

1. The road network is represented as a weighted, undirected graph.
2. Dijkstra's Algorithm starts at the selected source node and repeatedly picks the unvisited node with the smallest known distance, using a priority queue.
3. The distances to its neighbors are updated whenever a shorter path is found.
4. Once the destination is reached, the path is rebuilt by following the stored parent nodes backward.

The same graph data used by the C++ program is embedded in `index.html`, so the web version works without running the C++ code.

---

<a id="getting-started"></a>

## 🏁 Getting Started

### Run the Web Application

1. Clone the repository:

   ```bash
   git clone https://github.com/neupanepragyan/Shortest-Route-Finder.git
   cd Shortest-Route-Finder
   ```

2. Open `index.html` in any modern web browser (Chrome, Firefox, Edge, or Safari).

You can also try the live version here: [https://neupanepragyan.github.io/Shortest-Route-Finder/](https://neupanepragyan.github.io/Shortest-Route-Finder/)

### Run the C++ Program (Optional)

A C++ compiler such as `g++` is required.

```bash
g++ -std=c++17 main.cpp -o route_finder
./route_finder
```

On Windows, run `route_finder.exe` instead of `./route_finder`.

---

<a id="usage"></a>

## 🛠️ Usage

1. Open `index.html` in your browser.
2. Choose the **Start** and **Destination** locations from the dropdown menus, or click the nodes directly on the map.
3. Use the **⇅** button to swap the start and destination.
4. Click **Find Shortest Path**.
5. View the total distance (km) and the route in the sidebar. The path is also highlighted on the map.
6. Click **Clear selection** to reset the map and choose new locations.

**Map controls**

| Action | How |
|--------|-----|
| Zoom in / out | Mouse wheel, or the **+** / **−** buttons |
| Pan | Click and drag the map |
| Reset view | **⤾** button |
| Change theme | **☾** / **☀** button |

---

<a id="project-structure"></a>

## 📁 Project Structure

```text
Shortest-Route-Finder/
├── main.cpp      # C++ implementation of Dijkstra's Algorithm
├── index.html    # Web visualizer (HTML, CSS, and JavaScript in one file)
├── LICENSE       # MIT License
└── README.md     # Project documentation
```

---

<a id="future-improvements"></a>

## 🔮Future Improvements

- Add more locations and roads across the valley.
- Show a step-by-step animation of how Dijkstra's Algorithm explores the graph.
- Display estimated travel time in addition to distance.
- Integrate real-time traffic data to dynamically adjust travel time estimates, similar to Google Maps.
- Provide alternative routes alongside the absolute shortest path by introducing other routing algorithms.


---

<a id="contributing"></a>

## 🤝 Contributing

Contributions, suggestions, and bug reports are welcome.

1. **Fork** the repository.
2. Create a new branch for your change:

   ```bash
   git checkout -b feature/your-feature-name
   ```

3. Make your changes and commit them with a clear message:

   ```bash
   git commit -m "Add: short description of your change"
   ```

4. Push the branch to your fork:

   ```bash
   git push origin feature/your-feature-name
   ```

5. Open a **Pull Request** describing what you changed and why.

If you find a bug or have an idea, you can also [open an issue](https://github.com/neupanepragyan/Shortest-Route-Finder/issues).

---

<a id="license"></a>

## ⚖️ License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---

<a id="author"></a>

## 👤 Author

Developed by [Pragyan Neupane](https://github.com/neupanepragyan).

If you found this project useful, consider giving it a ⭐ on GitHub.
