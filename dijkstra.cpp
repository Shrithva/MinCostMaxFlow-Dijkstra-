#include <stdio.h>
int main()
{
    int n, m;
    while( scanf( " %d %d\n", &n, &m ) == 2 )
    {
        memset( deg, 0, sizeof( deg ) );
        while( m-- )
        {
            int u, v, w;
            scanf( " %d %d %d", &u, &v, &w );
            graph[u][v] = graph[v][u] = w;
            adj[u][deg[u]++] = v;
            adj[v][deg[v]++] = u;
        }    
        
        int ans = dijkstra( n, 0, n - 1 );
        
        printf( "%d\n", ans );
    }
    return 0;
}