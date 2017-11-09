#include <iostream>
#include <tpl_graph.H>
#include <tpl_graph_utils.H>
#include <tpl_find_path.H>
#include "greedy_spiders.H"
#include <string>
# include <iostream>


using namespace std;

int main()
{
  GT graph;
  char n1,n2;
  GT::Node *start,*end;


  build_graph(graph);
  cout << "grafo original" << endl;
  print_graph(graph);

  cout << graph.get_num_nodes() << " nodes\n";
  cout << graph.get_num_arcs() << " arcs\n";
 
 	/*cout << "Nodo adyacente del arco que quiere cortar" << endl;
 	cin >> n1;
 	cout << "Nodo incidente del arco que quiere cortar" << endl;
 	cin >> n2;

 	cout << n1<<"--"<<n2 << endl;*/

 	

 	/*cut_arc(graph,n1,n2);
  cout << graph.get_num_arcs() << " arcs\n";
  cout << "arco cortado" << endl;

 	print_graph(graph);

 	cout << "Nodo adyacente del arco que quiere cortar" << endl;
 	cin >> n1;
 	cout << "Nodo incidente del arco que quiere cortar" << endl;
 	cin >> n2;

 	cout << n1<<"--"<<n2 << endl;

 	cut_arc(graph,n1,n2);
  cout << graph.get_num_arcs() << " arcs\n";
  cout << "arco cortado" << endl;*/

  start = graph.find_node('a');
  end = graph.find_node('g');
  auto path = find_path_breadth_first(graph, start, end);

  for (Path<GT>::Iterator it(path); it.has_curr(); it.next())
  cout << it.get_current_node()->get_info() << " ";
      cout << endl;

size_t Aleph::breadth_first_traversal ( const GT &  g, typename GT::Node *   start,
                                        bool(*)(const GT &, typename GT::Node *, typename GT::Arc *)  visit) 
{
  
}

 	//print_graph(graph);
  return 0;
}