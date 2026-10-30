class Solution {
public:
    void bfs(auto& image,int sr,int sc,int& color,auto& v,int& org){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() ||v[sr][sc])return;
        v[sr][sc]=true;

        if(image[sr][sc]!=org)return;
        image[sr][sc]=color;
        bfs(image,sr+1,sc,color,v,org);
        bfs(image,sr-1,sc,color,v,org);
        bfs(image,sr,sc+1,color,v,org);
        bfs(image,sr,sc-1,color,v,org);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int org=image[sr][sc];
        vector<vector<bool>> v(image.size(),vector<bool> (image[0].size(),false)); 
        bfs(image,sr,sc,color,v,org);
        return image;
    }
};