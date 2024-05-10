#include "graph.h"

int main()
{
    MGraph* G = createMGraph(3);
     insertWeightEdgeMatrix(G, 0, 1, 2);
     insertWeightEdgeMatrix(G, 0, 2, 9);
     insertWeightEdgeMatrix(G,2, 1, 10);
     printMGraph(G, 3);
    
    return 0;
}