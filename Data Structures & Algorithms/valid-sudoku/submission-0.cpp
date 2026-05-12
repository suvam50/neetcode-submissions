class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      unordered_map<int,set<char>>rows;
      unordered_map<int,set<char>>cols;
      unordered_map<int,set<char>>blocks;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char c=board[i][j];
                if(c=='.') continue;
                if(rows[i].count(c)||cols[j].count(c)||blocks[(i/3)*3+j/3].count(c)) return false;
                rows[i].insert(c);
                cols[j].insert(c);
                blocks[(i/3)*3+j/3].insert(c);
            }
        }
        return true;

    }
};
