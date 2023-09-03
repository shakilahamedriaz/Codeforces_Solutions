#include <iostream>
#include <vector>

using namespace std;

char checkWin(vector<string>& board) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }

    return '.';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> board(3);
        for (int i = 0; i < 3; i++) {
            cin >> board[i];
        }

        char winner = checkWin(board);

        if (winner == 'X') {
            cout << "X" << endl;
        } else if (winner == 'O') {
            cout << "O" << endl;
        } else if (winner == '+') {
            cout << "+" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}

