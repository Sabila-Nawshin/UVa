#include <cstdio>
#include <iostream>
#include <climits>
#include <vector>
#include <list>
using namespace std;
int R, C;
int graph[1000][1000];

int BFS(int sourceX, int sourceY, int destX, int destY)
{
    int dis[R][C];

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++) {
            dis[i][j] = INT_MAX;
        }
    }

    dis[sourceX][sourceY] = 0;

    // Create a queue for BFS
    list< pair<int,int> > queue;

    // Mark the current node as visited and enqueue it
    queue.push_back(make_pair(sourceX,sourceY));


    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        pair<int, int> s = queue.front();
        queue.pop_front();

        if (s.first == destX && s.second == destY)
        {
            return dis[destX][destY];
        }
        if (s.first - 1 >= 0 && !graph[s.first - 1][s.second] && dis[s.first - 1][s.second] == INT_MAX)
        {
                dis[s.first - 1][s.second] = dis[s.first][s.second] + 1;
                queue.push_back(make_pair(s.first - 1, s.second));
        }
        if(s.first + 1 < R && !graph[s.first + 1][s.second] && dis[s.first + 1][s.second] == INT_MAX)
        {
                dis[s.first + 1][s.second] = dis[s.first][s.second] + 1;
                queue.push_back(make_pair(s.first + 1, s.second));
        }
        if(s.second + 1 < C && !graph[s.first][s.second + 1] && dis[s.first][s.second + 1] == INT_MAX)
        {
                dis[s.first][s.second + 1] = dis[s.first][s.second] + 1;
                queue.push_back(make_pair(s.first, s.second + 1));
        }
        if(s.second - 1 >= 0 && !graph[s.first][s.second - 1] && dis[s.first][s.second - 1 ] == INT_MAX)
        {
                dis[s.first][s.second - 1] = dis[s.first][s.second] + 1;
                queue.push_back(make_pair(s.first, s.second - 1));
        }
    }

    return dis[destX][destY];
}

int main() {
    //freopen("input.txt", "r", stdin);

    while (true){
        cin >> R >> C;
        if (!R && !C) break;

        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++) {
                graph[i][j] = 0;
            }
        }

        int rowNo, row, colNum, col, sourceX, sourceY, destX, destY;
        cin >> rowNo;

        for (int i = 0; i < rowNo; i++) {
            cin >> row;
            cin >> colNum;
            for (int j = 0; j < colNum; j++) {
                cin >> col;
                graph [row][col] = 1;
            }
        }

        /* graph printing for debugging purpose

        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++)
                cout << graph[i][j] << " ";
            cout << endl;
        }

        */

        cin >> sourceX >> sourceY;
        cin >> destX >> destY;

        int dis = BFS(sourceX, sourceY, destX, destY);
        cout << dis << endl;
    }
    return 0;
}
