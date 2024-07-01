//435. Non-overlapping Intervals

class Solution {
public:
int eraseOverlapIntervals(vector<vector<int> >& intervals) {

    sort(intervals.begin(), intervals.end());
    int count = 0;
    int end = intervals[0][1];//end is assigned the last value of current interval which is then checked with first value of next interval
    for(int i = 1; i < intervals.size(); i++)
    {
       if(intervals[i][0] < end)
       {
           count++;
           end = min(end, intervals[i][1]);
       }
        else
            end = intervals[i][1];
    }
    
    return count;
}
};