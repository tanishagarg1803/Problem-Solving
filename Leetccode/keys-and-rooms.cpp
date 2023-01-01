// Problem Link: https://leetcode.com/problems/keys-and-rooms/description/

class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<bool>& visited, int i){
        visited[i]=true;
        for(auto x: rooms[i]){  
            if(!visited[x])
                dfs(rooms, visited, x);
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, visited, 0);
        for(auto x: visited){
            if(x==false) return false;
        }
        return true;
    }
};
