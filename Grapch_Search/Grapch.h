#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Grapch
{
private:
	int v;
	vector<int> *adj;
	void Traverse(int v, bool visited[]);

public:
	Grapch(int v);
	~Grapch();
	void addEdge(int v, int w);
	void DFS(int v);
};

