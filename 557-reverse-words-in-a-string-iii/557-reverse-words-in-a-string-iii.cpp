class Solution {
public:
    string reverseWords(string s) {
     
        int m = 0;
    
    for(int i = 0; i<s.size(); i++)
    {
        int z;
        
        if(s[i]==' ')
        {
            z = i-1;
            while(m<z)
            {
                swap(s[m++],s[z--]);
            }
            
            m = i+1;
            
        }
        
        if(i==s.size()-1)
        {
            z = i;
            while(m<z)
            {
                swap(s[m++],s[z--]);
            }
            
        }
    }
    return s;
}
};