#include <iostream>
#include <cstring>
#include <string>
#define N 20
using namespace std;
class Stack {
public:
    char arr[N];
    int top;
    Stack() { top = -1; }
    void push(char c) {
        if (top == N - 1)
            cout << "Stack overflow\n";
        else
            arr[++top] = c;
    }
    char pop() {
        if (top == -1)
            return '\0'; // return null char if empty
        else
            return arr[top--];
    }
    char peek() {
        if (top == -1)
            return '\0';
        else
            return arr[top];
    }
   int precedence(char opr) {
        if (opr == '*' || opr == '/')
            return 2;
        if (opr == '+' || opr == '-')
            return 1;
        return 0;
    }
    string InfixToPostfixConversion(string ex);
};
string Stack::InfixToPostfixConversion(string ex) {
    string op_exp = "";
    char ch, ch1;

    for (int i = 0; i < ex.length(); i++) {
        ch = ex[i];
        // If operand, add to result
        if (isalnum(ch))
            op_exp += ch;
        // If '(', push it
        else if (ch == '(')
           push(ch);
        // If ')', pop until '('
        else if (ch == ')') {
            while (peek() != '(' && peek() != '\0')
                op_exp += pop();
            pop(); // remove '('
        }
        // If operator
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            while (precedence(ch) <= precedence(peek()) && peek() != '(' && peek() != '\0')
                op_exp += pop();
            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1)
        op_exp += pop();

    return op_exp;
}
int main() {
    Stack s;
    string ex;
    cout << "\nEnter an expression: ";
    cin >> ex;
    string op_exp = s.InfixToPostfixConversion(ex);
    cout << "\nPostfix Expression is: " << op_exp << endl;
    return 0;
}
