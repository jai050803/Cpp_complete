#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool check(vector<vector<char>>& board, const string& word, int index, int i, int j){
    if(index == word.size()) return true;

    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]){
        return false;
    }

    char temp = board[i][j];
    board[i][j] = '#';

    bool found = check(board, word, index + 1, i + 1, j) ||
                 check(board, word, index + 1, i - 1, j) ||
                 check(board, word, index + 1, i, j + 1) ||
                 check(board, word, index + 1, i, j - 1);

    board[i][j] = temp;

    return found;
}

bool exist(vector<vector<char>>& board, const string& word){
    int m = board.size();
    int n = board[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(check(board, word, 0, i, j)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    bool ans = exist(board, word);

    cout << (ans ? "true" : "false") << endl;

    return 0; 
}