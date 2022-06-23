class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {     
	
    vector<int> ans;
    int i, top = 0, bottom = m.size()-1, left = 0, right = m[0].size()-1; 
    int direction = 0; 

    while(top <= bottom && left <= right){

        
        if (direction == 0){
            for(i = left; i <= right; i++){
                ans.push_back(m[top][i]);
            }
            top++; 
        }

        
        else if(direction == 1){
            for (i = top; i <= bottom; i++){
                ans.push_back(m[i][right]);
            }
            right--; 
        }

        
        else if (direction == 2){
            for (i = right; i >= left; i--){
                ans.push_back(m[bottom][i]);
            }
            bottom--; 
        }

        
        else if (direction == 3){
            for (i = bottom; i >= top; i--){
                ans.push_back(m[i][left]);
            }
            left++; 
        }
        direction = (direction + 1) % 4; 
    }
    return ans;      
  }
};
