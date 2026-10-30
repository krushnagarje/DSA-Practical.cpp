#include <iostream>
using namespace std;

int G[20][20], visited[20], n;

void DFS(int i)
{
    int j;
    cout << i << "";
    visited[i] = 1;

    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
    }
}

int main()
{
    int i, j;

    cout << "\n Enter the number of vertices:";
    cin >> n;

    cout << "\n Enter adjacency matrix of the graph:\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> G[i][j];
        }
    }

    for (i = 0; i < n; i++)
        visited[i] = 0;

    cout << "\n DFS traversal is\n";
    DFS(0);

    return 0;
}


/*D:\Krushna205>cd "d:\Krushna205\" && g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile && "d:\Krushna205\"tempCodeRunnerFile

 Enter the number of vertices:5

 Enter adjacency matrix of the graph:
0 1 1 0 0
1 0 0 1 0
1 0 0 1 1
0 1 1 0 1
0 0 1 1 0

 DFS traversal is
01324
d:\Krushna205>*/
