//BFS

// vector < int >adj[maxx];
// bool color[maxx];
// int level[maxx];
void bfs (int src)
{
  queue < int >q;
  q.push (src);
  color[src] = true;
  level[src] = 0;
  while (!q.empty ())
    {
      int curr = q.front ();
      q.pop ();
    for (auto child:adj[curr])
    {
      if (color[child] == 0)
        {
          q.push (child);
          level[child] = level[curr] + 1;   // current node
          color[child] = 1;
        }
    }
    }
}