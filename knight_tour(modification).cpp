class Solution 
{
    public:
  
	int Knight_steps_to_reach_target(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    queue<pair<pair<int,int>,int>> q;
	    vector<vector<int>> visited(N+1,vector<int> (N+1,0));
	    
	    q.push({{KnightPos[0],KnightPos[1]},0});
	    visited[KnightPos[0]][KnightPos[1]]=1;
	    
	    int lenrow[]= {-1,-2,-2,-1,1,1,2,2};                 
	    int lencol[]= {-2,-1,1,2,-2,2,-1,1};                 
	    
	    while(!q.empty())
	    {
	        int x = q.front().first.first;
	        int y = q.front().first.second;
	        int steps=q.front().second;
	        q.pop();
	        if(x==TargetPos[0] && y==TargetPos[1])
	                return steps;
	        for(int i=0;i<8;i++)
	        {
	            int newx= x+lenrow[i];
	            int newy= y+lencol[i];
	            
	            
	            if(newx>0 &&newx<N+1 &&newy >0 && newy<N+1 && visited[newx][newy]==0)
	            {
	                q.push({{newx,newy},steps+1});
	                visited[newx][newy]=1;
	            }
	            
	        }
	        
	    }
	}
};