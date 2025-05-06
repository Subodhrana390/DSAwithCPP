#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <list>
#include <climits>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> dist(vertices,INT_MAX);
    set<pair<int, int>> st;
    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        st.erase(st.begin());

        for (auto neigbhour : adj[topNode])
        {
            if (nodeDistance + neigbhour.second < dist[neigbhour.first])
            {
                auto record = st.find(make_pair(dist[neigbhour.first], neigbhour.first));
                if (record != st.end())
                {
                    st.erase(record);
                }

                dist[neigbhour.first] = nodeDistance + neigbhour.second;
                st.insert(make_pair(dist[neigbhour.first], neigbhour.first));
            }
        }
    }
    return dist;
}

int main()
{
    vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 1}, {2, 1, 2}, {1, 3, 1}, {2, 3, 5}};
    int vertices = 4;
    int source = 0;

    vector<int> result = dijkstra(edges, vertices, edges.size(), source);
    for (int dist : result)
    {
        cout << dist << " ";
    }
    return 0;
}