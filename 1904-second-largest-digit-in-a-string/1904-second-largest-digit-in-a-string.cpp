class Solution {
public:
    int secondHighest(string s) {
        int count=0;
        int i;
        for(i=9;i>=0;i--)
        {
            string ch=to_string(i);
            if(s.find(ch)!=-1)
            {
                count++;
            }
            if(count==2)
            {
                break;
                
            }
        }
        if(count==2)
        {
            return i;
        }
       else
        {
            return -1;
        }
    }
};