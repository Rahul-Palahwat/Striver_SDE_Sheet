int findIndexRow(int target , vector<vector<int>>& mat){
    int start = 0,end = mat.size()-1;
    int index=0;
    while(start<=end){
        int mid = (start+end)/2;
        if(mat[mid][0] <= target){
            index = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return index;
}
bool findElement(int row , int target , vector<vector<int>>& mat){
    int start = 0 , end = mat[0].size()-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(mat[row][mid] == target){
            return true;
        }else if(mat[row][mid] > target){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int row = findIndexRow(target , mat);
        // cout<<row<<" row"<<endl;
        return findElement(row , target , mat);
}