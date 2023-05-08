class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;

        int startingRow = 0;
        int endingRow = m-1;
        int startingColumn = 0;
        int endingColumn = n-1;

        int count = 0;
        while (count < total_elements) {
            // print startingRow
            for (size_t i = startingRow; i <= endingColumn && count < total_elements; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // print endingCol
            for (size_t i = startingRow; i < endingRow && count < total_elements; i++)
            {
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;

            // print endingRow
            for (size_t i = endingColumn; i >= startingColumn && count < total_elements; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingColumn--;
            

            // print startingCol
            for (size_t i = endingRow; i >= startingRow && count < total_elements; i--)
            {
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans;
    }
};