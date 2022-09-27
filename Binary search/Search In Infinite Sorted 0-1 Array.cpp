Problem Description : https://www.codingninjas.com/codestudio/problems/search-in-infinite-sorted-0-1-array_696193?leftPanelTab=0

/************************************************************

    Use get function that returns the value at index i
    in the infinite sorted binary array.

    get(i)
    {
       
    }
    

************************************************************/

long long firstOne()
{
    // Write your code here.
    long long start = 0;
    long long end = 1;
    long long res = -1;
    
    while(get(end) < 1){
        start = end;
        end = end * 2;
    }
    while(start <= end){
        long long mid = start + (end-start)/2;
        
        if(get(mid) == 1){
            res = mid;
            end = mid-1;
        }
        else{
            start = mid + 1 ;
        }
    }
    return res;
}
