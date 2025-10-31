#include <iostream>
using namespace std;
class WebCrawlerBFS {
    int adj[10][10];
    string pages[10];
    int n;
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
    void BFS(int start) {
        int visited[10] = {0};
        int queue[10];
        int front = 0, rear = -1;
        visited[start] = 1;
        queue[++rear] = start;
        cout << "\nWeb Indexing using Breadth First Search (BFS):\n";
        while (front <= rear) {
            int current = queue[front++];
            cout << "Visited: " << pages[current] << endl;
            for (int i = 0; i < n; i++) {
                if (adj[current][i] == 1 && visited[i] == 0) {
                    queue[++rear] = i;
                    visited[i] = 1;
                }
            }
        }
    }
};
int main() {
    WebCrawlerBFS w;
    w.createGraph();
    w.displayMatrix();
    int start;
    cout << "\nEnter starting page index (0 to n-1): ";
    cin >> start;
    w.BFS(start);
    return 0;
}
