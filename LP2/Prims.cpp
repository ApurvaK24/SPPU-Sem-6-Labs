#include <iostream>
using namespace std;
#define INF 9999999
class Graph
{
    int v;
    int **Matrix;

public:
    void createGraph()
    {
        cout << "Enter the number of vertices" << endl;
        cin >> v;
        Matrix = new int *[v];
        for (int i = 1; i <= v; i++)
        {
            Matrix[i] = new int[v];
        }
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                cout << "Enter the cost between" << i << " and " << j << endl;
                cin >> Matrix[i][j];
            }
        }
    }

    void displayGraph()
    {
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {

                cout << Matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void prims()
    {
        int no_edges = 0;
        int selected[v + 1] = {0};
        selected[1] = true;
        int x; //  row number
        int y; //  col number
        int sum = 0;
        // print for edge and weight
        cout << "Edge"
             << " : "
             << "Weight";
        cout << endl;
        while (no_edges < v - 1)
        {
            int min = INF;
            x = 0;
            y = 0;

            for (int i = 1; i <= v; i++)
            {
                if (selected[i])
                {
                    for (int j = 1; j <= v; j++)
                    {
                        if (!selected[j] && Matrix[i][j])
                        { // not in selected and there is an edge
                            if (min > Matrix[i][j])
                            {
                                min = Matrix[i][j];
                                x = i;
                                y = j;
                            }
                        }
                    }
                }
            }
            cout << x << " - " << y << " :  " << Matrix[x][y];
            cout << endl;
            selected[y] = true;
            no_edges++;
            sum = sum + Matrix[x][y];
        }
        cout << "MINIMUM COST OF SPANNING TREE : " << sum << endl;
    }
};
int main()
{
    Graph g;
    g.createGraph();
    g.displayGraph();
    g.prims();
}