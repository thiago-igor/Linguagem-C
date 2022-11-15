// Grafos - Lista de adjacência

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void displayAdjList(list<int> adj_list[], int v) {
   for(int i = 0; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}
void add_edge(list<int> adj_list[], int u, int v) {    //adiciona v na lista u, e u na lista v
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
int main() {
   int v = 6;//existem 8 vértices no gráfico
   //cria um array de listas cujo tamanho é 6
   list<int> adj_list[v];
    add_edge(adj_list, 1, 5);
	add_edge(adj_list, 1, 4);
	add_edge(adj_list, 1, 2);
	add_edge(adj_list, 2, 4);
	add_edge(adj_list, 3, 4);
	add_edge(adj_list, 5, 4);
   displayAdjList(adj_list, v);
}