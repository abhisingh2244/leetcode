class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        queue<int> q;
        int n = rooms.size();
        vector<bool> vis(n,false);
        q.push(0);  // 1

        while(!q.empty()){
            
            int temp = q.front();     // 2
            q.pop();                 
            
            if(vis[temp] == true) continue; // 3
            vis[temp] = true;
            
            for(auto room : rooms[temp]){   // 4
                q.push(room);
            }

        }
        
        for(int i = 0; i < n; i++){         // 5
            if(vis[i]==false) return false;
        }
        return true;

    }
};