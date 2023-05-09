// Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <pair<int,int>> name;

        name.push_back(make_pair(arr[0],1));
        for (int i=1; i<arr.size(); i++){
            int flag=0;
            for (int j=0; j<name.size(); j++){
                if (arr[i]==name[j].first){
                    name[j].second++;
                    flag = 1;
                    break;
                }
            }
            if (!flag){
                name.push_back(make_pair(arr[i],1));
            }
        }

        for (int i=0; i<name.size(); i++){
            for (int j=i+1; j<name.size(); j++){
                if (name[i].second==name[j].second){
                    return false;
                }
            }
        }


        return true;
    }
};
