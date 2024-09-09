#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][3],int row, int col, int i, int j, vector<vector<bool> > &visited ) {
    if( (( i >= 0 && i < row ) && (j >= 0 && j < col)) && 
        (maze[i][j] == 1) && 
        (visited[i][j] == false)) {
            return true;
        }
        else {
            return false;
        }
}

void solveMaze(int maze[][3], int row, int col, int i, int j, vector<vector<bool> > &visited, vector<string>&path, string output) {
    // BASE CASE
    if(i == row-1 && j == col-1) {
        path.push_back(output);
        return;
    }

    // 1 case solve and baki to rr sambhalega
    // DOWN -> i+1, j
    if(isSafe(maze, row, col, i + 1, j, visited)) {
        visited[i+1][j] = true;
        solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
        // BACKTRACK
        visited[i+1][j] = false;
    }

    // LEFT -> i, j-1
    if(isSafe(maze, row, col, i, j-1, visited)) {
        visited[i][j-1] = true;
        solveMaze(maze, row, col, i, j-1, visited, path, output + 'L');
        // BACKTRACK
        visited[i][j-1] = false;
    }

    // RIGHT ->  i, j+1
    if(isSafe(maze, row, col, i, j+1, visited)) {
        visited[i][j+1] = true;
        solveMaze(maze, row, col, i, j+1, visited, path, output + 'R');
        // BACKTRACK
        visited[i][j+1] = false;
    }

    // UP ->  i - 1, j;
    if(isSafe(maze, row, col, i-1, j, visited)) {
        visited[i-1][j] = true;
        solveMaze(maze, row, col, i-1, j, visited, path, output + 'R');
        // BACKTRACK
        visited[i-1][j] = false;
    }
}


int main() {
    int maze[3][3] = { {1,0,0},
                {1,1,0},
                {1,1,1}};

    if(maze[0][0] == 0) {
        cout<< "No path exists " << endl;
        return 0;
    }

    int row = 3;
    int col = 3;

    vector<vector<bool> > visited(row, vector<bool>(col, false));

    // src ki value ko true mark kar dete h
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output);

    for(auto val: path) {
        cout<< val << " ";
    }
    cout << endl;

    if(path.size() == 0) {
        cout<< "No path exists " << endl;
    }
    return 0;
}



// GFG SOLUTION

// class Solution {
//   public:
//     int dx[4] = {1, 0,0,-1};
//     int dy[4] = {0,-1,1, 0};
//     char direction[4] = {'D', 'L', 'R', 'U'};
    
//     bool isSafe(vector<vector<int>> &mat, int row, int col, int i, int j, vector<vector<bool> > &visited) {
//         if( ((i>= 0 && i< row) && (j >=0 && j < col)) &&
//             (mat[i][j] == 1) && 
//             (visited[i][j] == false)) {
//                 return true;
//             }
//             else {
//                 return false;
//             }
//     }   
    
    
//     void solveMaze(vector<vector<int>> &mat, int row, int col, int i, int j, vector<vector<bool> > &visited, vector<string>&path, string output) {
//         if(i == row-1 && j == col-1) {
//             path.push_back(output);
//             return;
//         }    
        
//         for(int k=0; k<4; k++) {
//             int newx = i + dx[k];
//             int newy = j + dy[k];
//             char dir = direction[k];
            
//             if(isSafe(mat, row, col, newx, newy, visited)) {
//                 visited[newx][newy] = true;
//                 solveMaze(mat, row, col, newx, newy, visited, path, output + dir);
//                 // backtrack
//                 visited[newx][newy] = false;
//             }
//         }
//     }
    
    
//     vector<string> findPath(vector<vector<int>> &mat) {
//         int row = mat.size();
//         int col = mat[0].size();
        
//         vector<vector<bool> > visited(row, vector<bool>(col, false));
//         vector<string> path;
//         string output;
        
        
//         if(mat[0][0] == 0) {
//             return path;
//         }
        
//         visited[0][0] == true;
        
//         solveMaze(mat, row, col, 0, 0, visited, path, output);
        
//         return path;
//     }
// };
