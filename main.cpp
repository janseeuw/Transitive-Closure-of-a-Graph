int main(int argc, char *argv[]) {
	/* Let us create the following weighted graph
	 
	 (0)------->(3)
 	  |         /|\
	  |          |
	  |          |
	 \|/         |
	 (1)------->(2)
	 
	 */
	
	static const int n = 4;
    int graph[n][n] = { {1, 1, 0, 1}, {0, 1, 1, 0}, {0, 0, 1, 1}, {0, 0, 0, 1} };
	
  for (int k = 0; k < n; k++)
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		    printf ("%d ", graph[i][j]);
		printf("\n");
	}
	
	return 0;
}