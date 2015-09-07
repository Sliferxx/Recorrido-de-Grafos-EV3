#include <stdio.h>
Algoritmo  DFS
void DFS(int a){
    visitado[a] = true;
    for(int a = 0 ; v < vecino[a].size();++b)
	{
        if(!visitado[vecino[a][b]])
		{
            dfs(vecino[a][b]);
        }
    }
}
