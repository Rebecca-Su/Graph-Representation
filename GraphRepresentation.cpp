
#include <iostream>
#include <list>

using namespace std;
int main();

int main() {
	int n_nodes, n_edges, node_1, node_2;
	bool edge_Found{false};
	
	cin >> n_nodes >> n_edges;	
	
	list<int> A[n_nodes];
	
	for(int i = 0; i < n_edges; i++)
	{
	    cin >> node_1 >> node_2;
	    A[node_1 - 1].push_front(node_2);
	    A[node_2 - 1].push_front(node_1);
	}
	
	while(!cin.eof())
	{
	    cin >> node_1 >> node_2;
	    cout << node_1 << " " << node_2 << endl;
            
        for(int n : A[node_1 - 1])
            if(n == node_2)
            {
                edge_Found = true;
                break;
            }
        
        if(edge_Found)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
	}
    // }
	return 0;
}
