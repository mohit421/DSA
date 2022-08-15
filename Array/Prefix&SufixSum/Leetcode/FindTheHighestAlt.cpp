//                                                  Date:- 30 July, 2022




//  Find the highest altitude:-  ---> TC:- O(N)    and SC:- O(N)



/*
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    vector<int>highAlt;
    int sum = 0;
    for(int i=1;i<gain.size()+1;i++){
        sum += gain[i-1];
        highAlt.push_back(sum);
    }
    int maxAlt = max_element(begin(highAlt),end(highAlt))- begin(highAlt);
    return max(0,highAlt[maxAlt]);
    }
};


*/

// Using Stl function partial_sum()  ---> TC:- O(N)+O(logN) --> O(N)
/*

partial_sum() time Complexity:-  O(logN)
max_element()  time complexity:- O(N)

so overall time complexity:- O(N)   and SC:- O(1)

*/


/*
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    partial_sum(begin(gain),end(gain),begin(gain));
    int maxAlt = max_element(begin(gain),end(gain))- begin(gain);
    return max(0,gain[maxAlt]);
    }
};





//                                                  Discussion SOlution


/*


//TC: O(n), SC: O(1)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0;
        int curr_alt=0;
        for(int i=0;i<gain.size();i++){
            curr_alt+=gain[i]; 
            max_alt=max(curr_alt, max_alt);
        }
        return max_alt;
    }
};



*/



/*

//TC: O(n), SC: O(1)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int count = 0;
        
        for (int s : gain) {
            count += s;
            result = max(result, count);
        }
        
        return result;
    }
};