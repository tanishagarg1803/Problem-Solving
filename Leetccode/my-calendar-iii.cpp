// Problem Link: https://leetcode.com/problems/my-calendar-iii/

class MyCalendarThree {
public:
    map<int,int> m;
    int maxc=0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int c=0;
        for(auto it=m.begin();it!=m.end();it++){
            c+=it->second;
            maxc=max(c,maxc);
        }
        return maxc;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
