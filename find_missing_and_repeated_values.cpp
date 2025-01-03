class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size()*grid[0].size(); 
        vector<int> v(size+1,0);
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                v[grid[i][j]]++;
            }
        }
        int repeat, missing;
        for(int i=1; i<v.size(); i++){
            if(v[i]==0){
                missing = i;
            }
            if(v[i]>1){
                repeat = i;
            }
        }
        return {repeat,missing};

    }
};
