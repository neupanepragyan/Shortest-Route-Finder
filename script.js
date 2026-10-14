/* ---------------- DATA (ported 1:1 from the C++ source) ---------------- */
const nodes = [
  { n: "Maitighar", x: 470, y: 350 }, { n: "New Baneshwor", x: 570, y: 320 }, { n: "Thapathali", x: 475, y: 375 },
  { n: "Putalisadak", x: 500, y: 320 }, { n: "Tripureshwor", x: 445, y: 355 }, { n: "Tinkune", x: 620, y: 330 },
  { n: "Old Baneshwor", x: 545, y: 305 }, { n: "Sankhamul", x: 545, y: 375 }, { n: "Minbhawan", x: 560, y: 350 },
  { n: "Shantinagar", x: 545, y: 340 }, { n: "Koteshwor", x: 655, y: 345 }, { n: "Sinamangal", x: 590, y: 290 },
  { n: "Jadibuti", x: 690, y: 340 }, { n: "Balkumari", x: 655, y: 390 }, { n: "Manohora Bridge", x: 650, y: 370 },
  { n: "Pepsicola", x: 665, y: 310 }, { n: "Suryabinayak", x: 810, y: 270 }, { n: "Lokanthali", x: 720, y: 330 },
  { n: "Thimi", x: 760, y: 310 }, { n: "Sallaghari", x: 790, y: 290 }, { n: "Gatthaghar", x: 770, y: 260 },
  { n: "Airport", x: 600, y: 255 }, { n: "Gaushala", x: 540, y: 255 }, { n: "Battisputali", x: 520, y: 280 },
  { n: "Mitrapark", x: 545, y: 225 }, { n: "Chabahil", x: 560, y: 200 }, { n: "Boudha", x: 610, y: 180 },
  { n: "Maharajgunj", x: 430, y: 165 }, { n: "Jorpati", x: 660, y: 160 }, { n: "Gokarneshwor", x: 640, y: 120 },
  { n: "Teaching Hospital", x: 445, y: 195 }, { n: "Baluwatar", x: 460, y: 225 }, { n: "Basundhara", x: 390, y: 170 },
  { n: "Lazimpat", x: 440, y: 255 }, { n: "Bhatbhateni", x: 475, y: 200 }, { n: "Lainchaur", x: 430, y: 285 },
  { n: "Thamel", x: 440, y: 310 }, { n: "Sorhakhutte", x: 400, y: 300 }, { n: "Jamal", x: 520, y: 335 },
  { n: "Keshar Mahal", x: 455, y: 320 }, { n: "Ratnapark", x: 480, y: 340 }, { n: "New Road", x: 475, y: 365 },
  { n: "Bhadrakali", x: 495, y: 365 }, { n: "Basantapur", x: 470, y: 390 }, { n: "Kalimati", x: 395, y: 370 },
  { n: "Teku", x: 420, y: 375 }, { n: "Kupundole", x: 490, y: 390 }, { n: "Jawalakhel", x: 505, y: 410 },
  { n: "Pulchowk", x: 530, y: 400 }, { n: "Lagankhel", x: 555, y: 420 }, { n: "Satdobato", x: 590, y: 440 },
  { n: "Gwarko", x: 630, y: 420 }, { n: "Imadol", x: 670, y: 420 }, { n: "Nakhu", x: 550, y: 460 },
  { n: "Ekantakuna", x: 480, y: 440 }, { n: "Bhaisepati", x: 450, y: 470 }, { n: "Kuleshwor", x: 380, y: 400 },
  { n: "Kalanki", x: 320, y: 405 }, { n: "Balkhu", x: 355, y: 410 }, { n: "Sitapaila", x: 300, y: 370 },
  { n: "Naikap", x: 280, y: 420 }, { n: "Thankot", x: 220, y: 410 }, { n: "Kirtipur", x: 340, y: 440 },
  { n: "Chovar", x: 360, y: 470 }, { n: "Panga", x: 330, y: 470 }, { n: "Satungal", x: 280, y: 450 },
  { n: "Chandragiri", x: 190, y: 440 }, { n: "Swayambhu", x: 330, y: 350 }, { n: "Chhauni", x: 350, y: 375 },
  { n: "Balaju", x: 350, y: 300 }, { n: "Gongabu", x: 390, y: 270 }, { n: "Machhapokhari", x: 370, y: 285 },
  { n: "Samakhushi", x: 420, y: 265 }, { n: "Tokha", x: 410, y: 220 }, { n: "Banasthali", x: 360, y: 250 },
  { n: "Nagarjun", x: 300, y: 320 }, { n: "Tahachal", x: 370, y: 355 }, { n: "Gyaneshwor", x: 500, y: 290 },
  { n: "Anamnagar", x: 525, y: 350 }, { n: "Dillibazar", x: 515, y: 300 }, { n: "Bagbazar", x: 490, y: 300 },
  { n: "Singh Durbar", x: 500, y: 350 }, { n: "Patan Dhoka", x: 515, y: 385 }, { n: "Sankhu", x: 700, y: 90 },
  { n: "Bhaktapur", x: 820, y: 260 }
];

const edges = [
  [0, 1, 1.60], [0, 2, 1.20], [0, 3, 1.30], [0, 4, 1.40], [1, 5, 1.40], [1, 6, 1.10], [1, 7, 1.50], [1, 8, 1.20],
  [1, 9, 1.10], [5, 10, 0.87], [5, 11, 1.20], [5, 1, 1.40], [10, 12, 1.50], [10, 13, 1.70], [10, 14, 0.78],
  [10, 15, 2.40], [12, 16, 5.50], [12, 17, 2.00], [12, 15, 2.10], [17, 18, 1.60], [17, 10, 2.00], [18, 19, 2.00],
  [18, 20, 1.50], [19, 16, 2.00], [11, 21, 0.80], [11, 22, 2.00], [11, 23, 1.30], [21, 22, 2.80], [22, 23, 1.00],
  [22, 25, 1.80], [22, 24, 1.00], [23, 6, 1.60], [23, 77, 2.20], [25, 26, 2.00], [25, 24, 1.20], [25, 27, 3.00],
  [25, 28, 2.00], [26, 28, 1.50], [26, 29, 2.80], [28, 29, 2.00], [27, 30, 0.80], [27, 31, 2.00], [27, 32, 1.50],
  [27, 25, 3.00], [31, 33, 1.60], [31, 30, 1.50], [31, 34, 1.30], [33, 35, 1.30], [33, 36, 1.40], [35, 36, 1.00],
  [35, 38, 1.20], [36, 39, 1.00], [36, 37, 1.40], [39, 40, 1.40], [38, 40, 1.10], [40, 41, 0.70], [40, 42, 0.80],
  [41, 43, 0.70], [43, 44, 2.50], [43, 4, 1.50], [4, 2, 1.20], [4, 44, 2.00], [4, 45, 0.90], [2, 46, 1.40],
  [2, 46, 1.40], [46, 47, 1.70], [47, 48, 0.90], [48, 49, 1.40], [49, 50, 2.30], [50, 51, 2.00], [51, 13, 1.50],
  [13, 10, 1.70], [51, 52, 2.00], [50, 53, 2.00], [47, 54, 2.00], [54, 55, 2.50], [44, 45, 1.30], [44, 56, 1.20],
  [44, 58, 2.00], [56, 57, 2.30], [56, 59, 2.50], [57, 58, 2.00], [57, 60, 2.00], [57, 61, 4.00], [57, 59, 3.00],
  [58, 62, 2.50], [58, 63, 5.00], [62, 64, 1.50], [62, 60, 3.50], [62, 65, 3.00], [61, 66, 2.50], [61, 60, 3.50],
  [59, 67, 2.00], [59, 75, 2.50], [67, 57, 2.80], [67, 68, 1.80], [67, 69, 2.50], [69, 70, 1.50], [69, 67, 2.50],
  [69, 71, 1.00], [70, 72, 1.20], [70, 71, 1.00], [70, 73, 3.00], [72, 33, 2.50], [72, 27, 2.50], [72, 70, 1.20],
  [71, 69, 1.00], [71, 70, 1.00], [71, 74, 2.00], [73, 74, 2.50], [73, 27, 3.50], [74, 69, 2.00], [74, 59, 2.50],
  [68, 76, 1.50], [68, 67, 1.80], [76, 44, 1.80], [76, 45, 1.50], [45, 4, 0.90], [77, 3, 1.20], [77, 79, 1.20],
  [79, 3, 1.00], [79, 0, 1.50], [3, 80, 0.80], [80, 40, 0.90], [80, 79, 1.00], [0, 79, 1.50], [0, 81, 0.80],
  [81, 3, 1.00], [81, 2, 1.00], [1, 9, 1.10], [9, 78, 1.50], [78, 3, 1.30], [78, 79, 1.20], [8, 1, 1.20],
  [8, 9, 1.30], [8, 5, 1.30], [7, 1, 1.50], [7, 2, 2.00], [7, 82, 3.00], [82, 47, 1.00], [82, 48, 1.30],
  [48, 46, 1.20], [55, 53, 2.50], [53, 50, 2.00], [15, 12, 2.10], [15, 11, 3.00], [15, 10, 2.40],
  [29, 83, 5.00], [83, 28, 4.50], [83, 84, 8.00]
];

/* ---------------- GRAPH / DIJKSTRA ---------------- */
const adj = Array.from({ length: nodes.length }, () => []);
edges.forEach(([a, b, w]) => { adj[a].push([b, w]); adj[b].push([a, w]); });

function dijkstra(src, dst) {
  const dist = new Array(nodes.length).fill(Infinity);
  const visited = new Array(nodes.length).fill(false);
  const parent = new Array(nodes.length).fill(-1);
  dist[src] = 0;

  for (let count = 0; count < nodes.length; count++) {
    let u = -1, best = Infinity;
    for (let i = 0; i < nodes.length; i++) {
      if (!visited[i] && dist[i] < best) { best = dist[i]; u = i; }
    }
    if (u === -1) break;
    visited[u] = true;
    for (const [v, w] of adj[u]) {
      if (!visited[v] && dist[u] + w < dist[v]) {
        dist[v] = dist[u] + w;
        parent[v] = u;
      }
    }
  }

  if (dist[dst] === Infinity) return null;
  const path = []; let cur = dst;
  while (cur !== -1) { path.push(cur); cur = parent[cur]; }
  path.reverse();
  return { distance: dist[dst], path };
}

/* ---------------- RENDER MAP ---------------- */
const svg = document.getElementById('map');
const NS = "http://www.w3.org/2000/svg";

const edgeLayer = document.createElementNS(NS, 'g'); edgeLayer.id = 'edgeLayer';
const pathLayer = document.createElementNS(NS, 'g'); pathLayer.id = 'pathLayer';
const nodeLayer = document.createElementNS(NS, 'g'); nodeLayer.id = 'nodeLayer';
svg.appendChild(edgeLayer); svg.appendChild(pathLayer); svg.appendChild(nodeLayer);

edges.forEach(([a, b]) => {
  const line = document.createElementNS(NS, 'line');
  line.setAttribute('class', 'edge');
  line.setAttribute('x1', nodes[a].x); line.setAttribute('y1', nodes[a].y);
  line.setAttribute('x2', nodes[b].x); line.setAttribute('y2', nodes[b].y);
  edgeLayer.appendChild(line);
});

const nodeEls = nodes.map((node, i) => {
  const g = document.createElementNS(NS, 'g');
  g.setAttribute('class', 'node');
  g.setAttribute('data-id', i);

  const circle = document.createElementNS(NS, 'circle');
  circle.setAttribute('cx', node.x);
  circle.setAttribute('cy', node.y);
  g.appendChild(circle);

  const text = document.createElementNS(NS, 'text');
  text.setAttribute('x', node.x + 6);
  text.setAttribute('y', node.y + 2.5);
  text.textContent = node.n;
  g.appendChild(text);

  g.addEventListener('click', (e) => { e.stopPropagation(); handleNodeClick(i); });
  nodeLayer.appendChild(g);
  return g;
});

/* ---------------- SELECTION STATE ---------------- */
let sourceId = null, destId = null;

const sourceSelect = document.getElementById('sourceSelect');
const destSelect = document.getElementById('destSelect');
nodes.forEach((node, i) => {
  const o1 = document.createElement('option'); o1.value = i; o1.textContent = node.n;
  sourceSelect.appendChild(o1);
  const o2 = document.createElement('option'); o2.value = i; o2.textContent = node.n;
  destSelect.appendChild(o2);
});
sourceSelect.selectedIndex = -1;
destSelect.selectedIndex = -1;

function handleNodeClick(i) {
  if (sourceId === null) {
    sourceId = i;
  } else if (destId === null && i !== sourceId) {
    destId = i;
  } else {
    sourceId = i;
    destId = null;
  }
  syncUI();
}

sourceSelect.addEventListener('change', () => { sourceId = +sourceSelect.value; syncUI(false); });
destSelect.addEventListener('change', () => { destId = +destSelect.value; syncUI(false); });

document.getElementById('swapBtn').addEventListener('click', () => {
  [sourceId, destId] = [destId, sourceId];
  syncUI();
});

document.getElementById('resetBtn').addEventListener('click', () => {
  sourceId = null; destId = null;
  document.getElementById('result').classList.remove('show');
  document.getElementById('noPathMsg').style.display = 'none';
  syncUI();
});

function syncUI(updateSelects = true) {
  nodeEls.forEach((g, i) => {
    g.classList.remove('source', 'dest', 'on-path');
    if (i === sourceId) g.classList.add('source');
    if (i === destId) g.classList.add('dest');
  });
  if (updateSelects) {
    sourceSelect.value = sourceId === null ? '' : sourceId;
    destSelect.value = destId === null ? '' : destId;
  }
  document.getElementById('findBtn').disabled = (sourceId === null || destId === null);
  pathLayer.innerHTML = '';
}

document.getElementById('findBtn').addEventListener('click', () => {
  if (sourceId === null || destId === null) return;
  const result = dijkstra(sourceId, destId);
  const resultBox = document.getElementById('result');
  const noPathMsg = document.getElementById('noPathMsg');
  pathLayer.innerHTML = '';
  nodeEls.forEach(g => g.classList.remove('on-path'));

  if (!result) {
    resultBox.classList.remove('show');
    noPathMsg.style.display = 'block';
    noPathMsg.textContent = `No path exists from ${nodes[sourceId].n} to ${nodes[destId].n}.`;
    return;
  }
  noPathMsg.style.display = 'none';
  resultBox.classList.add('show');
  document.getElementById('distText').innerHTML = `${result.distance.toFixed(2)} <span>km</span>`;

  const pathList = document.getElementById('pathList');
  pathList.innerHTML = '';
  result.path.forEach((id, idx) => {
    const div = document.createElement('div');
    div.className = 'path-step';
    const legDist = idx > 0 ? edgeWeightBetween(result.path[idx - 1], id) : null;
    div.innerHTML = `${nodes[id].n}` + (legDist !== null ? `<span class="leg">+ ${legDist.toFixed(2)} km</span>` : '');
    pathList.appendChild(div);

    if (id === sourceId || id === destId) return;
    nodeEls[id].classList.add('on-path');
  });

  for (let k = 0; k < result.path.length - 1; k++) {
    const a = nodes[result.path[k]], b = nodes[result.path[k + 1]];
    const line = document.createElementNS(NS, 'line');
    line.setAttribute('class', 'edge-path');
    line.setAttribute('x1', a.x); line.setAttribute('y1', a.y);
    line.setAttribute('x2', b.x); line.setAttribute('y2', b.y);
    pathLayer.appendChild(line);
  }
});

function edgeWeightBetween(a, b) {
  const found = adj[a].find(([v]) => v === b);
  return found ? found[1] : null;
}

/* ---------------- PAN & ZOOM ---------------- */
const mapWrap = document.getElementById('mapWrap');
let viewBox = { x: 130, y: 10, w: 750, h: 520 };
function applyViewBox() { svg.setAttribute('viewBox', `${viewBox.x} ${viewBox.y} ${viewBox.w} ${viewBox.h}`); }
applyViewBox();

let isDragging = false, dragStart = { x: 0, y: 0 }, vbStart = { x: 0, y: 0 };
mapWrap.addEventListener('mousedown', (e) => {
  isDragging = true; mapWrap.classList.add('dragging');
  dragStart = { x: e.clientX, y: e.clientY };
  vbStart = { x: viewBox.x, y: viewBox.y };
});
window.addEventListener('mousemove', (e) => {
  if (!isDragging) return;
  const scale = viewBox.w / mapWrap.clientWidth;
  viewBox.x = vbStart.x - (e.clientX - dragStart.x) * scale;
  viewBox.y = vbStart.y - (e.clientY - dragStart.y) * scale;
  applyViewBox();
});
window.addEventListener('mouseup', () => { isDragging = false; mapWrap.classList.remove('dragging'); });

mapWrap.addEventListener('wheel', (e) => {
  e.preventDefault();
  const zoomFactor = e.deltaY > 0 ? 1.12 : 0.89;
  zoomAt(e.offsetX, e.offsetY, zoomFactor);
}, { passive: false });

function zoomAt(px, py, factor) {
  const rect = mapWrap.getBoundingClientRect();
  const fx = px / rect.width, fy = py / rect.height;
  const newW = Math.min(2200, Math.max(250, viewBox.w * factor));
  const newH = newW * (520 / 750);
  const cx = viewBox.x + fx * viewBox.w;
  const cy = viewBox.y + fy * viewBox.h;
  viewBox.x = cx - fx * newW;
  viewBox.y = cy - fy * newH;
  viewBox.w = newW; viewBox.h = newH;
  applyViewBox();
}

document.getElementById('zoomIn').addEventListener('click', () => zoomAt(mapWrap.clientWidth / 2, mapWrap.clientHeight / 2, 0.85));
document.getElementById('zoomOut').addEventListener('click', () => zoomAt(mapWrap.clientWidth / 2, mapWrap.clientHeight / 2, 1.18));
document.getElementById('zoomReset').addEventListener('click', () => { viewBox = { x: 130, y: 10, w: 750, h: 520 }; applyViewBox(); });

syncUI();

/* ---------------- THEME TOGGLE ---------------- */
const themeToggle = document.getElementById('themeToggle');
let currentTheme = 'dark';
themeToggle.addEventListener('click', () => {
  currentTheme = currentTheme === 'dark' ? 'light' : 'dark';
  document.documentElement.setAttribute('data-theme', currentTheme);
  themeToggle.textContent = currentTheme === 'dark' ? '☾' : '☀';
});