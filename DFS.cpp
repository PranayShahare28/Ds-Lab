#include <iostream>
using namespace std;
class WebCrawlerDFS {
    int adj[10][10];
    string pages[10];
    int n;
    int visited[10];
public:
    void createGraph() {
        cout << "Enter number of web pages: ";
        cin >> n;
        cout << "Enter names of web pages:\n";
        for (int i = 0; i < n; i++) {
            cin >> pages[i];
        }
        cout << "\nEnter adjacency matrix (1 for link, 0 for no link):\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> adj[i][j];
            }
        }
        for (int i = 0; i < n; i++)
            visited[i] = 0;
    }
    void displayMatrix() {
        cout << "\nAdjacency Matrix:\n   ";
        for (int i = 0; i < n; i++)
            cout << pages[i] << " ";
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << pages[i] << " ";
            for (int j = 0; j < n; j++) {
                cout << " " << adj[i][j];
            }
            cout << endl;
        }
    }
    void DFS(int v) {
        cout << "Visited: " << pages[v] << endl;
        visited[v] = 1;

        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                DFS(i);
            }
        }
    }
};
int main() {
    WebCrawlerDFS w;
    w.createGraph();
    w.displayMatrix();
    int start;
    cout << "\nEnter starting page index (0 to n-1): ";
    cin >> start;
    cout << "\nWeb Indexing using Depth First Search (DFS):\n";
    w.DFS(start);
    return 0;
}
