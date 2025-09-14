#include <iostream>
using namespace std;
class Node {
public:
    string task;
    int priority;
    int time;
    Node* next;
    Node(string m, int p, int t) {
        task = m;
        priority = p;
        time = t;
        next = NULL;
    }
    void display() {
        cout << task << " (P:" << priority << ", T:" << time << ") --> ";
    }
};

int main() {
    Node* header = NULL;
    Node* temp = NULL;
    int n, p, t;
    string m;

    cout << "How many tasks you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter task name: ";
        cin >> m;
        cout << "Enter priority: ";
        cin >> p;
        cout << "Enter execution time: ";
        cin >> t;

        temp = new Node(m, p, t);

        if (header == NULL) {
            header = temp;
        }
        else {
            // Insert according to priority
            if (temp->priority > header->priority) {
                temp->next = header;
                header = temp;
            }
            else {
                Node* prev = header;
                Node* curr = header->next;

                while (curr != NULL && curr->priority >= temp->priority) {
                    prev = curr;
                    curr = curr->next;
                }

                prev->next = temp;
                temp->next = curr;
            }
        }
    }

    cout << "\nFinal Task List:\n";
    temp = header;
    while (temp != NULL) {
        temp->display();
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
