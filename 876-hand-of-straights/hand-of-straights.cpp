class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      int n=hand.size();
      if(n%groupSize!=0)return false;
      map<int,int>freq;
      for(int i=0;i<n;i++)
      {
        freq[hand[i]]++;
      }
      for(auto it:freq)
      {
        if(it.second>0)
        {
            int cnt=it.second;
            for(int i=0;i<groupSize;i++)
            {
                if(freq[it.first+i]<cnt)
                {
                    return false;
                }
                freq[it.first+i]-=cnt;
            }
        }
      }
      return true;
    }
};