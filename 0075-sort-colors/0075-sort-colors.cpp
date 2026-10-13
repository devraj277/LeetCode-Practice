class Solution {
public:
    void sortColors(vector<int>& colors) {
    vector <int> frequency (3, 0);
    for(int i=0; i < colors.size(); i++){
        frequency[colors[i]]++;
    }
    colors.clear();
    for(int i=0; i<3;i++){
            for(int j=0; j<frequency[i]; j++){
                colors.push_back(i);
            }
    }
    for(auto it:colors){
        cout<<it<<" ";
    }
    }
};