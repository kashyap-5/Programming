Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.
  
   int lcsans(int x, int y, string s1, string s2,int t[][1000])
    {
       
        if(x == 0 || y == 0){
            return 0;
        }
        if(t[x][y] != -1)return  t[x][y];
        
        if(s1[x-1] == s2[y-1]){
            return t[x][y] = 1 + lcsans(x-1,y-1,s1,s2,t);
        }
        else{
            return t[x][y] = max(lcsans(x-1,y,s1,s2,t),lcsans(x,y-1,s1,s2,t));
        }
        return t[x][y];
    }
    
    
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
       int t[1000][1000];
       memset(t,-1,sizeof(t));
       return lcsans(x,y,s1,s2,t);

    }
