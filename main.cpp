#include <iostream>
#include <climits>
#include <string>
using namespace std;


// Give each place a number
enum Place {

    BALAJU_BYPAS = 0,
    NAGARJUN,
    THULO_KHOLA,
    SITAPAILA,
    BAHIT,
    BHIMDHUNGA,
    DAKSHAINKALI,
    CHHAIMALE,
    MAITIGHAR,
    TINKUNE,
    KOTESHWAR,
    MANOHARA_BRIDGE,
    MANOHARA_RIVER,
    GAUSHALA,
    MITRAPARK,
    CHABAHIL,
    SANKHAPARK,
    MAHARAJGANJ,
    BALAJU_BYPASS_JUNCTION,
    RING_ROAD_BALAJU_BYPASS,
    BALAJU_JUNCTION,
    BANASTHALI,
    SWOYAMBHU,
    KALANKI,
    BALKHU,
    SAMAKHUSHI_CHOWK,
    TOKHA,
    DANDAGAUN,
    GURJEBHANJYANG,
    PEEPALMOD,
    NAGDHUNGA,
    TRIPURESWOR,
    GWARKO,
    LANKURI_BHANJYANG,
    KATHMANDU,
    BAGMATI_RIVER,
    TIKABHAIRAB,
    EKANTAKUNA,
    LUBHU,
    THAIBA,
    KUSANTI,
    SATDOBATO,
    SALLAGHARI,
    SURYA_BINAYAK_HANUMANTE_CULVERT,
    SANGA,

    PLACE_COUNT
};


// Names of the places
string placeName[PLACE_COUNT] = {

    "Balaju Bypas",
    "Nagarjun",
    "Thulo Khola",
    "Sitapaila",
    "Bahit",
    "Bhimdhunga",
    "Dakshainkali",
    "Chhaimale",
    "Maitighar",
    "Tinkune",
    "Koteshwar",
    "Manohara Bridge",
    "Manohara River",
    "Gaushala",
    "Mitrapark",
    "Chabahil",
    "Sankhapark",
    "Maharajganj",
    "Balaju Bypass Junction",
    "Ring Road-Balaju Bypass",
    "Balaju Junction",
    "Banasthali",
    "Swoyambhu",
    "Kalanki",
    "Balkhu",
    "Samakhushi Chowk",
    "Tokha",
    "Dandagaun",
    "Gurjebhanjyang",
    "Peepalmod",
    "Nagdhunga",
    "Tripureswor",
    "Gwarko",
    "Lankuri Bhanjyang",
    "Kathmandu",
    "Bagmati River",
    "Tikabhairab",
    "Ekantakuna",
    "Lubhu",
    "Thaiba",
    "Kusanti",
    "Satdobato",
    "Sallaghari",
    "Surya Binayak Hanumante Culvert",
    "Sanga"
};


class Graph {

private:

    int vertices;

    double adj[PLACE_COUNT][PLACE_COUNT];


public:

    // Constructor
    Graph(int v) {

        vertices = v;

        // Initially, there is no edge between any places
        for (int i = 0; i < vertices; i++) {

            for (int j = 0; j < vertices; j++) {

                adj[i][j] = 0;
            }
        }
    }


    // Add a TWO-WAY edge
    void addEdge(int source, int destination, double weight) {

        adj[source][destination] = weight;
        adj[destination][source] = weight;
    }


    // Dijkstra's Algorithm
    void dijkstra(int source, int destination) {

        double distance[PLACE_COUNT];

        bool visited[PLACE_COUNT];

        int parent[PLACE_COUNT];


        // Initialize arrays
        for (int i = 0; i < vertices; i++) {

            distance[i] = INT_MAX;

            visited[i] = false;

            parent[i] = -1;
        }


        // Distance from source to itself is 0
        distance[source] = 0;


        // Main Dijkstra loop
        for (int count = 0; count < vertices; count++) {

            int u = -1;

            double minimum = INT_MAX;


            // Find the unvisited node
            // having the smallest distance
            for (int i = 0; i < vertices; i++) {

                if (!visited[i] && distance[i] < minimum) {

                    minimum = distance[i];

                    u = i;
                }
            }


            // No reachable node remaining
            if (u == -1)
                break;


            // Mark current node as visited
            visited[u] = true;


            // Check all possible neighboring nodes
            for (int v = 0; v < vertices; v++) {

                // Check if an edge exists
                // and the node is not visited
                if (adj[u][v] != 0 && !visited[v]) {

                    // Relaxation
                    if (distance[u] + adj[u][v] < distance[v]) {

                        distance[v] =
                            distance[u] + adj[u][v];

                        parent[v] = u;
                    }
                }
            }
        }


        // Check if destination is reachable
        if (distance[destination] == INT_MAX) {

            cout << "\nNo path exists from "
                 << placeName[source]
                 << " to "
                 << placeName[destination]
                 << ".\n";

            return;
        }


        // Display shortest distance
        cout << "\nShortest Distance: "
             << distance[destination]
             << " km" << endl;


        // Store the shortest path
        int path[PLACE_COUNT];

        int pathLength = 0;

        int current = destination;


        // Follow parent nodes backwards
        while (current != -1) {

            path[pathLength] = current;

            pathLength++;

            current = parent[current];
        }


        // Display shortest path
        cout << "Shortest Path: ";


        // Print path in reverse
        for (int i = pathLength - 1; i >= 0; i--) {

            cout << placeName[path[i]];

            if (i != 0)
                cout << " -> ";
        }

        cout << endl;
    }
};


int main() {

    // Create graph with all the places
    Graph g(PLACE_COUNT);


    /*
        ADDING ROADS

        All roads are TWO-WAY.

        Therefore addEdge() automatically adds:

        A -> B

        and

        B -> A
    */


    // 1. Balaju Bypas <----> Nagarjun
    g.addEdge(BALAJU_BYPAS, NAGARJUN, 1.59);


    // 2. Nagarjun <----> Thulo Khola
    g.addEdge(NAGARJUN, THULO_KHOLA, 10.12);


    // 3. Sitapaila <----> Bahit
    g.addEdge(SITAPAILA, BAHIT, 2);


    // 4. Bahit <----> Bhimdhunga
    g.addEdge(BAHIT, BHIMDHUNGA, 6);


    // 6. Maitighar <----> Tinkune
    g.addEdge(MAITIGHAR, TINKUNE, 2.74);


    // 7. Tinkune <----> Koteshwar
    g.addEdge(TINKUNE, KOTESHWAR, 0.87);


    // 8. Koteshwar <----> Manohara Bridge
    g.addEdge(KOTESHWAR, MANOHARA_BRIDGE, 0.78);


    // 13. Manohara River <----> Koteshwor
    g.addEdge(MANOHARA_RIVER, KOTESHWAR, 1);


    // 14. Tinkune - Sinamangal - Gaushala
    // Treated as one edge:
    // Tinkune <----> Gaushala
    g.addEdge(TINKUNE, GAUSHALA, 4);


    // 15. Gaushala <----> Mitrapark
    g.addEdge(GAUSHALA, MITRAPARK, 1);


    // 16. Mitrapark <----> Chabahil
    g.addEdge(MITRAPARK, CHABAHIL, 0.5);


    // 17. Chabahil <----> Sankhapark
    g.addEdge(CHABAHIL, SANKHAPARK, 2);


    // 18. Sankhapark <----> Maharajganj
    g.addEdge(SANKHAPARK, MAHARAJGANJ, 1);


    // 19. Maharajganj <----> Balaju Bypass Junction
    g.addEdge(MAHARAJGANJ, BALAJU_BYPASS_JUNCTION, 3.5);


    // 20. Balaju Bypass Junction <---->
    //     Ring Road-Balaju Bypass
    g.addEdge(
        BALAJU_BYPASS_JUNCTION,
        RING_ROAD_BALAJU_BYPASS,
        0.95
    );


    // 21. Balaju Junction - Banasthali - Swoyambhu
    // Treated as one edge:
    // Balaju Junction <----> Swoyambhu
    g.addEdge(BALAJU_JUNCTION, SWOYAMBHU, 2);


    // 22. Swoyambhu <----> Kalanki
    g.addEdge(SWOYAMBHU, KALANKI, 3);


    // 23. Kalanki <----> Balkhu
    g.addEdge(KALANKI, BALKHU, 3);


    // 24. Samakhushi Chowk <----> Tokha
    g.addEdge(SAMAKHUSHI_CHOWK, TOKHA, 6);


    // 25. Tokha <----> Dandagaun
    g.addEdge(TOKHA, DANDAGAUN, 3.5);


    // 26. Dandagaun <----> Gurjebhanjyang
    g.addEdge(DANDAGAUN, GURJEBHANJYANG, 7.5);


    // 27. Peepalmod <----> Nagdhunga
    g.addEdge(PEEPALMOD, NAGDHUNGA, 1.89);


    // 28. Nagdhunga <----> Kalanki
    g.addEdge(NAGDHUNGA, KALANKI, 9.11);


    // 29. Kalanki <----> Tripureswor
    g.addEdge(KALANKI, TRIPURESWOR, 3.46);


    // 30. Gwarko <----> Lankuri Bhanjyang
    g.addEdge(GWARKO, LANKURI_BHANJYANG, 25.09);


    // 32. Bagmati River <----> Tikabhairab
    g.addEdge(BAGMATI_RIVER, TIKABHAIRAB, 32.2);


    // 33. Tikabhairab <----> Ekantakuna
    g.addEdge(TIKABHAIRAB, EKANTAKUNA, 12.49);





    // 35. Balkhu <----> Ekantakuna
    g.addEdge(BALKHU, EKANTAKUNA, 2);


    // 36. Ekantakuna - Kusanti - Satdobato
    // Treated as one edge:
    // Ekantakuna <----> Satdobato
    g.addEdge(EKANTAKUNA, SATDOBATO, 2);


    // 37. Satdobato <----> Gwarko
    g.addEdge(SATDOBATO, GWARKO, 1.5);


    // 38. Gwarko <----> Manohara River
    g.addEdge(GWARKO, MANOHARA_RIVER, 1.5);


    // 39. Manohara Bridge <----> Sallaghari
    g.addEdge(MANOHARA_BRIDGE, SALLAGHARI, 5.34);


    // 40. Sallaghari <---->
    //     Surya Binayak Hanumante Culvert
    g.addEdge(
        SALLAGHARI,
        SURYA_BINAYAK_HANUMANTE_CULVERT,
        2.06
    );


    // 41. Surya Binayak Hanumante Culvert <----> Sanga
    g.addEdge(
        SURYA_BINAYAK_HANUMANTE_CULVERT,
        SANGA,
        6.72
    );


    // Display available places
    cout << "Available Places:\n\n";

    for (int i = 0; i < PLACE_COUNT; i++) {

        cout << i << ". "
             << placeName[i]
             << endl;
    }


    // Get source and destination
    int source;
    int destination;


    cout << "\nEnter source node number: ";
    cin >> source;


    cout << "Enter destination node number: ";
    cin >> destination;


    // Find shortest path
    g.dijkstra(source, destination);


    return 0;
}