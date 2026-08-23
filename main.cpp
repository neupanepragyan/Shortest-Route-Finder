#include <iostream>
#include <climits>
#include <string>
using namespace std;


// Give each place a number
enum Place {

    MAITIGHAR = 0,
    NEW_BANESHWOR,
    THAPATHALI,
    PUTALISADAK,
    TRIPURESHWOR,
    TINKUNE,
    OLD_BANESHWOR,
    SANKHAMUL,
    MINBHAWAN,
    SHANTINAGAR,
    KOTESHWOR,
    SINAMANGAL,
    JADIBUTI,
    BALKUMARI,
    MANOHORA_BRIDGE,
    PEPSICOLA,
    SURYABINAYAK,
    LOKANTHALI,
    THIMI,
    SALLAGHARI,
    GATTHAGHAR,
    AIRPORT,
    GAUSHALA,
    BATTISPUTALI,
    MITRAPARK,
    CHABAHIL,
    BOUDHA,
    MAHARAJGUNJ,
    JORPATI,
    GOKARNESHWOR,
    TEACHING_HOSPITAL,
    BALUWATAR,
    BASUNDHARA,
    LAZIMPAT,
    BHATBHATENI,
    LAINCHAUR,
    THAMEL,
    JAMAL,
    KESHER_MAHAL,
    RATNAPARK,
    NEW_ROAD,
    BHADRAKALI,
    BASANTAPUR,
    KALIMATI,
    TEKU,
    KUPUNDOLE,
    JAWALAKHEL,
    PULCHOWK,
    LAGANKHEL,
    SATDOBATO,
    GWARKO,
    IMAADOL,
    NAKHU,
    EKANTAKUNA,
    BHAISEPATI,
    KULESHWOR,
    KALANKI,
    BALKHU,
    SITAPAILA,
    NAIKAP,
    THANKOT,
    KIRTIPUR,
    CHOVAR,
    PANGA,
    SATUNGAL,
    CHANDRAGIRI,
    SWAYAMBHU,
    CHHAUNI,
    BALAJU,
    GONGABU,
    MACHHAPOKHARI,
    SAMAKHUSHI,
    TOKHA,
    BANASTHALI,
    NAGARJUN,
    TAHACHAL,
    GYANESHWOR,
    DILLIBAZAR,
    BAGBAZAR,
    SINGH_DURBAR,
    PATAN_DHOKA,
    SANKHU,
    BHAKTAPUR,

    PLACE_COUNT
};


// Names of the places
string placeName[PLACE_COUNT] = {

    "Maitighar",
    "New Baneshwor",
    "Thapathali",
    "Putalisadak",
    "Tripureshwor",
    "Tinkune",
    "Old Baneshwor",
    "Sankhamul",
    "Minbhawan",
    "Shantinagar",
    "Koteshwor",
    "Sinamangal",
    "Jadibuti",
    "Balkumari",
    "Manohora Bridge",
    "Pepsicola",
    "Suryabinayak",
    "Lokanthali",
    "Thimi",
    "Sallaghari",
    "Gatthaghar",
    "Airport",
    "Gaushala",
    "Battisputali",
    "Mitrapark",
    "Chabahil",
    "Boudha",
    "Maharajgunj",
    "Jorpati",
    "Gokarneshwor",
    "Teaching Hospital",
    "Baluwatar",
    "Basundhara",
    "Lazimpat",
    "Bhatbhateni",
    "Lainchaur",
    "Thamel",
    "Jamal",
    "Kesher Mahal",
    "Ratnapark",
    "New Road",
    "Bhadrakali",
    "Basantapur",
    "Kalimati",
    "Teku",
    "Kupundole",
    "Jawalakhel",
    "Pulchowk",
    "Lagankhel",
    "Satdobato",
    "Gwarko",
    "Imadol",
    "Nakhu",
    "Ekantakuna",
    "Bhaisepati",
    "Kuleshwor",
    "Kalanki",
    "Balkhu",
    "Sitapaila",
    "Naikap",
    "Thankot",
    "Kirtipur",
    "Chovar",
    "Panga",
    "Satungal",
    "Chandragiri",
    "Swayambhu",
    "Chhauni",
    "Balaju",
    "Gongabu",
    "Machhapokhari",
    "Samakhushi",
    "Tokha",
    "Banasthali",
    "Nagarjun",
    "Tahachal",
    "Gyaneshwor",
    "Dillibazar",
    "Bagbazar",
    "Singh Durbar",
    "Patan Dhoka",
    "Sankhu",
    "Bhaktapur"
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

        Every road is TWO-WAY.

        Therefore addEdge() automatically adds:

        A -> B

        and

        B -> A
    */


    // 1
    g.addEdge(MAITIGHAR, NEW_BANESHWOR, 1.60);

    // 2
    g.addEdge(MAITIGHAR, THAPATHALI, 1.20);

    // 3
    g.addEdge(MAITIGHAR, PUTALISADAK, 1.30);

    // 4
    g.addEdge(MAITIGHAR, TRIPURESHWOR, 1.40);

    // 5
    g.addEdge(NEW_BANESHWOR, TINKUNE, 1.40);

    // 6
    g.addEdge(NEW_BANESHWOR, OLD_BANESHWOR, 1.10);

    // 7
    g.addEdge(NEW_BANESHWOR, SANKHAMUL, 1.50);

    // 8
    g.addEdge(NEW_BANESHWOR, MINBHAWAN, 1.20);

    // 9
    g.addEdge(NEW_BANESHWOR, SHANTINAGAR, 1.10);

    // 10
    g.addEdge(TINKUNE, KOTESHWOR, 0.87);

    // 11
    g.addEdge(TINKUNE, SINAMANGAL, 1.20);

    // 12
    g.addEdge(TINKUNE, NEW_BANESHWOR, 1.40);

    // 13
    g.addEdge(KOTESHWOR, JADIBUTI, 1.50);

    // 14
    g.addEdge(KOTESHWOR, BALKUMARI, 1.70);

    // 15
    g.addEdge(KOTESHWOR, MANOHORA_BRIDGE, 0.78);

    // 16
    g.addEdge(KOTESHWOR, PEPSICOLA, 2.40);

    // 17
    g.addEdge(JADIBUTI, SURYABINAYAK, 5.50);

    // 18
    g.addEdge(JADIBUTI, LOKANTHALI, 2.00);

    // 19
    g.addEdge(JADIBUTI, PEPSICOLA, 2.10);

    // 20
    g.addEdge(LOKANTHALI, THIMI, 1.60);

    // 21
    g.addEdge(LOKANTHALI, KOTESHWOR, 2.00);

    // 22
    g.addEdge(THIMI, SALLAGHARI, 2.00);

    // 23
    g.addEdge(THIMI, GATTHAGHAR, 1.50);

    // 24
    g.addEdge(SALLAGHARI, SURYABINAYAK, 2.00);

    // 25
    g.addEdge(SINAMANGAL, AIRPORT, 0.80);

    // 26
    g.addEdge(SINAMANGAL, GAUSHALA, 2.00);

    // 27
    g.addEdge(SINAMANGAL, BATTISPUTALI, 1.30);

    // 28
    g.addEdge(AIRPORT, GAUSHALA, 2.80);

    // 29
    g.addEdge(GAUSHALA, BATTISPUTALI, 1.00);

    // 30
    g.addEdge(GAUSHALA, CHABAHIL, 1.80);

    // 31
    g.addEdge(GAUSHALA, MITRAPARK, 1.00);

    // 32
    g.addEdge(BATTISPUTALI, OLD_BANESHWOR, 1.60);

    // 33
    g.addEdge(BATTISPUTALI, GYANESHWOR, 2.20);

    // 34
    g.addEdge(CHABAHIL, BOUDHA, 2.00);

    // 35
    g.addEdge(CHABAHIL, MITRAPARK, 1.20);

    // 36
    g.addEdge(CHABAHIL, MAHARAJGUNJ, 3.00);

    // 37
    g.addEdge(CHABAHIL, JORPATI, 2.00);

    // 38
    g.addEdge(BOUDHA, JORPATI, 1.50);

    // 39
    g.addEdge(BOUDHA, GOKARNESHWOR, 2.80);

    // 40
    g.addEdge(JORPATI, GOKARNESHWOR, 2.00);

    // 41
    g.addEdge(MAHARAJGUNJ, TEACHING_HOSPITAL, 0.80);

    // 42
    g.addEdge(MAHARAJGUNJ, BALUWATAR, 2.00);

    // 43
    g.addEdge(MAHARAJGUNJ, BASUNDHARA, 1.50);

    // 44
    g.addEdge(MAHARAJGUNJ, CHABAHIL, 3.00);

    // 45
    g.addEdge(BALUWATAR, LAZIMPAT, 1.60);

    // 46
    g.addEdge(BALUWATAR, TEACHING_HOSPITAL, 1.50);

    // 47
    g.addEdge(BALUWATAR, BHATBHATENI, 1.30);

    // 48
    g.addEdge(LAZIMPAT, LAINCHAUR, 1.30);

    // 49
    g.addEdge(LAZIMPAT, THAMEL, 1.40);

    // 50
    g.addEdge(LAINCHAUR, THAMEL, 1.00);

    // 51
    g.addEdge(LAINCHAUR, JAMAL, 1.20);

    // 52
    g.addEdge(THAMEL, KESHER_MAHAL, 1.00);

    // 53
    g.addEdge(THAMEL, SORHAKHUTTE, 1.40);

    // 54
    g.addEdge(KESHER_MAHAL, RATNAPARK, 1.40);

    // 55
    g.addEdge(JAMAL, RATNAPARK, 1.10);

    // 56
    g.addEdge(RATNAPARK, NEW_ROAD, 0.70);

    // 57
    g.addEdge(RATNAPARK, BHADRAKALI, 0.80);

    // 58
    g.addEdge(NEW_ROAD, BASANTAPUR, 0.70);

    // 59
    g.addEdge(BASANTAPUR, KALIMATI, 2.50);

    // 60
    g.addEdge(BASANTAPUR, TRIPURESHWOR, 1.50);

    // 61
    g.addEdge(TRIPURESHWOR, THAPATHALI, 1.20);

    // 62
    g.addEdge(TRIPURESHWOR, KALIMATI, 2.00);

    // 63
    g.addEdge(TRIPURESHWOR, TEKU, 0.90);

    // 64
    g.addEdge(THAPATHALI, KUPUNDOLE, 1.40);

    // 65
    g.addEdge(THAPATHALI, KUPUNDOLE, 1.40);

    // 66
    g.addEdge(KUPUNDOLE, JAWALAKHEL, 1.70);

    // 67
    g.addEdge(JAWALAKHEL, PULCHOWK, 0.90);

    // 68
    g.addEdge(PULCHOWK, LAGANKHEL, 1.40);

    // 69
    g.addEdge(LAGANKHEL, SATDOBATO, 2.30);

    // 70
    g.addEdge(SATDOBATO, GWARKO, 2.00);

    // 71
    g.addEdge(GWARKO, BALKUMARI, 1.50);

    // 72
    g.addEdge(BALKUMARI, KOTESHWOR, 1.70);

    // 73
    g.addEdge(GWARKO, IMAADOL, 2.00);

    // 74
    g.addEdge(SATDOBATO, NAKHU, 2.00);

    // 75
    g.addEdge(JAWALAKHEL, EKANTAKUNA, 2.00);

    // 76
    g.addEdge(EKANTAKUNA, BHAISEPATI, 2.50);

    // 77
    g.addEdge(KALIMATI, TEKU, 1.30);

    // 78
    g.addEdge(KALIMATI, KULESHWOR, 1.20);

    // 79
    g.addEdge(KALIMATI, BALKHU, 2.00);

    // 80
    g.addEdge(KULESHWOR, KALANKI, 2.30);

    // 81
    g.addEdge(KULESHWOR, SITAPAILA, 2.50);

    // 82
    g.addEdge(KALANKI, BALKHU, 2.00);

    // 83
    g.addEdge(KALANKI, NAIKAP, 2.00);

    // 84
    g.addEdge(KALANKI, THANKOT, 4.00);

    // 85
    g.addEdge(KALANKI, SITAPAILA, 3.00);

    // 86
    g.addEdge(BALKHU, KIRTIPUR, 2.50);

    // 87
    g.addEdge(BALKHU, CHOVAR, 5.00);

    // 88
    g.addEdge(KIRTIPUR, PANGA, 1.50);

    // 89
    g.addEdge(KIRTIPUR, NAIKAP, 3.50);

    // 90
    g.addEdge(KIRTIPUR, SATUNGAL, 3.00);

    // 91
    g.addEdge(THANKOT, CHANDRAGIRI, 2.50);

    // 92
    g.addEdge(THANKOT, NAIKAP, 3.50);

    // 93
    g.addEdge(SITAPAILA, SWAYAMBHU, 2.00);

    // 94
    g.addEdge(SITAPAILA, NAGARJUN, 2.50);

    // 95
    g.addEdge(SWAYAMBHU, KALANKI, 2.80);

    // 96
    g.addEdge(SWAYAMBHU, CHHAUNI, 1.80);

    // 97
    g.addEdge(SWAYAMBHU, BALAJU, 2.50);

    // 98
    g.addEdge(BALAJU, GONGABU, 1.50);

    // 99
    g.addEdge(BALAJU, SWAYAMBHU, 2.50);

    // 100
    g.addEdge(BALAJU, MACHHAPOKHARI, 1.00);

    // 101
    g.addEdge(GONGABU, SAMAKHUSHI, 1.20);

    // 102
    g.addEdge(GONGABU, MACHHAPOKHARI, 1.00);

    // 103
    g.addEdge(GONGABU, TOKHA, 3.00);

    // 104
    g.addEdge(SAMAKHUSHI, LAZIMPAT, 2.50);

    // 105
    g.addEdge(SAMAKHUSHI, MAHARAJGUNJ, 2.50);

    // 106
    g.addEdge(SAMAKHUSHI, GONGABU, 1.20);

    // 107
    g.addEdge(MACHHAPOKHARI, BALAJU, 1.00);

    // 108
    g.addEdge(MACHHAPOKHARI, GONGABU, 1.00);

    // 109
    g.addEdge(MACHHAPOKHARI, BANASTHALI, 2.00);

    // 110
    g.addEdge(TOKHA, BANASTHALI, 2.50);

    // 111
    g.addEdge(TOKHA, MAHARAJGUNJ, 3.50);

    // 112
    g.addEdge(BANASTHALI, BALAJU, 2.00);

    // 113
    g.addEdge(BANASTHALI, SITAPAILA, 2.50);

    // 114
    g.addEdge(CHHAUNI, TAHACHAL, 1.50);

    // 115
    g.addEdge(CHHAUNI, SWAYAMBHU, 1.80);

    // 116
    g.addEdge(TAHACHAL, KALIMATI, 1.80);

    // 117
    g.addEdge(TAHACHAL, TEKU, 1.50);

    // 118
    g.addEdge(TEKU, TRIPURESHWOR, 0.90);

    // 119
    g.addEdge(GYANESHWOR, PUTALISADAK, 1.20);

    // 120
    g.addEdge(GYANESHWOR, DILLIBAZAR, 1.20);

    // 121
    g.addEdge(DILLIBAZAR, PUTALISADAK, 1.00);

    // 122
    g.addEdge(DILLIBAZAR, MAITIGHAR, 1.50);

    // 123
    g.addEdge(PUTALISADAK, BAGBAZAR, 0.80);

    // 124
    g.addEdge(BAGBAZAR, RATNAPARK, 0.90);

    // 125
    g.addEdge(BAGBAZAR, DILLIBAZAR, 1.00);

    // 126
    g.addEdge(MAITIGHAR, DILLIBAZAR, 1.50);

    // 127
    g.addEdge(MAITIGHAR, SINGH_DURBAR, 0.80);

    // 128
    g.addEdge(SINGH_DURBAR, PUTALISADAK, 1.00);

    // 129
    g.addEdge(SINGH_DURBAR, THAPATHALI, 1.00);

    // 130
    g.addEdge(NEW_BANESHWOR, SHANTINAGAR, 1.10);

    // 131
    g.addEdge(SHANTINAGAR, ANAMNAGAR, 1.50);

    // 132
    g.addEdge(ANAMNAGAR, PUTALISADAK, 1.30);

    // 133
    g.addEdge(ANAMNAGAR, DILLIBAZAR, 1.20);

    // 134
    g.addEdge(MINBHAWAN, NEW_BANESHWOR, 1.20);

    // 135
    g.addEdge(MINBHAWAN, SHANTINAGAR, 1.30);

    // 136
    g.addEdge(MINBHAWAN, TINKUNE, 1.30);

    // 137
    g.addEdge(SANKHAMUL, NEW_BANESHWOR, 1.50);

    // 138
    g.addEdge(SANKHAMUL, THAPATHALI, 2.00);

    // 139
    g.addEdge(SANKHAMUL, PATAN_DHOKA, 3.00);

    // 140
    g.addEdge(PATAN_DHOKA, JAWALAKHEL, 1.00);

    // 141
    g.addEdge(PATAN_DHOKA, PULCHOWK, 1.30);

    // 142
    g.addEdge(PULCHOWK, KUPUNDOLE, 1.20);

    // 143
    g.addEdge(BHAISEPATI, NAKHU, 2.50);

    // 144
    g.addEdge(NAKHU, SATDOBATO, 2.00);

    // 145
    g.addEdge(PEPSICOLA, JADIBUTI, 2.10);

    // 146
    g.addEdge(PEPSICOLA, SINAMANGAL, 3.00);

    // 147
    g.addEdge(PEPSICOLA, KOTESHWOR, 2.40);

    // 148
    g.addEdge(GOKARNESHWOR, SANKHU, 5.00);

    // 149
    g.addEdge(SANKHU, JORPATI, 4.50);

    // 150
    g.addEdge(SANKHU, BHAKTAPUR, 8.00);


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