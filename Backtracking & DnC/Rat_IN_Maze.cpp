#include <iostream>
#include <vector>
using namespace std;

// A function that will handle all the below mention possiabilities

// 1=> path should not closed
// 2=> not out of bound
// 3=> check pos not  visited

bool isSafe(int srcX, int srcY, int newX, int newY, int maze[][4], int row, int col, vector<vector<bool>> &visited)
{
    if (
        // 1=> path should not closed
        (newX >= 0 && newY < row) &&
        (newX >= 0 && newY < col) &&

        // 2=> not out of bound
        maze[newX][newY] == 1 &&

        // check pos not  visited
        visited[newX][newY] == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printAllPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool>> &visited)
{
    //  Base case
    //   Destination coordinate are [row - 1] [col -1]
    if (srcX == row - 1 && srcY == col - 1)
    {
        // reached destination
        cout << output << endl;
        return;
    }

    // 1 case solve karo baaki recursion sambhal lega

   
    // UP
    int newX =srcX-1;
    int newY = srcY;
    if (isSafe(srcX,srcY,newX,newY,maze,row,col,visited))
    {
        // mark visited
        visited[newX][newY]=true;

        // Call the recursion
        output.push_back('U');
        printAllPath(maze,row,col,newX,newY,output,visited);

        // Backtracking
        output.pop_back();
        visited[newX][newY] = false;

    }

    // RIGHT
    newX =srcX;
    newY = srcY+1;
    if (isSafe(srcX,srcY,newX,newY,maze,row,col,visited))
    {
        // mark visited
        visited[newX][newY]=true;

        // Call the recursion
        output.push_back('R');
        printAllPath(maze,row,col,newX,newY,output,visited);

        // Backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }

    // DOWN
    newX =srcX+1;
    newY = srcY;
    if (isSafe(srcX,srcY,newX,newY,maze,row,col,visited))
    {
        // mark visited
        visited[newX][newY]=true;

        // Call the recursion
        output.push_back('D');
        printAllPath(maze,row,col,newX,newY,output,visited);
        
        // Backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
    // LEFT
    newX =srcX;
    newY = srcY-1;
    if (isSafe(srcX,srcY,newX,newY,maze,row,col,visited))
    {
        // mark visited
        visited[newX][newY]=true;

        // Call the recursion
        output.push_back('L');
        printAllPath(maze,row,col,newX,newY,output,visited);
        
        // Backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
}

int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}};

    int row = 4;
    int col = 4;

    int srcX = 0;
    int srcY = 0;
    string output = "";

    // create visited 2D array
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0)
    {
        // src position is closed , that means RAT can not move
        cout << "No path exists" << endl;
        return 0;
    }
    else
    {
        visited[srcX][srcY] = true;
        printAllPath(maze, row, col, srcX, srcY, output, visited);
    }
}