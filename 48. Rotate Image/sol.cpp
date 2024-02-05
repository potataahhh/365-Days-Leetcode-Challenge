// Brute force

vector<vector<int>> rotate(vector<vector<int>> &matrix){
	int n = matrix.size();

	vector<vector<int>> res(n,vector<int>(n,0));

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res[j][n-1-i] = matrix[i][j];
		}
	}
	return res;
}

// Optimal approach

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
