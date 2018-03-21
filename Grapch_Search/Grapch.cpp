#include "Grapch.h"



void Grapch::Traverse(int v, bool visited[])
{
	visited[v] = true;
	cout << v << " ";

	vector<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (!visited[*i])
		{
			Traverse(*i, visited);
		}
	}
}

Grapch::Grapch(int v)
{
	this->v = v;
	adj = new vector<int>[v];
}


Grapch::~Grapch()
{
	delete adj;
}

void Grapch::addEdge(int v, int w)
{
	adj[v].push_back[w];
}

void Grapch::DFS(int v)
{
	bool *visited = new bool[v];

	for (int i(0); i < v; ++i)
		visited[i] = false;

	Traverse(v, visited);
}
