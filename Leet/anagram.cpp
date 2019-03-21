class Solution {
public:
    bool isAnagram(string s, string t) {
     int arr[130],arr1[130];
        int i;
        memset(arr,0,sizeof(arr));
        memset(arr1,0,sizeof(arr1));
        for(i=0;i<s.length();i++)
        {
            arr[s[i]]++;
        }
        for(i=0;i<t.length();i++)
        {
            arr1[t[i]]++;
        }
        int tt=0;
        for(i=0;i<130;i++)
        {
            if(arr[i]!=arr1[i])
            {
                tt=1;
                break;
            }
        }
        if(tt==0)
            return true;
        else
            return false;

    }
};
