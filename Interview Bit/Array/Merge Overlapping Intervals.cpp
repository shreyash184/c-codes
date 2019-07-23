/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool comp(Interval a, Interval b){
    return a.start < b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval>v;
    stack<Interval>s;
    sort(A.begin(), A.end(), comp);
    s.push(A[0]);
    int n = A.size();
    for(int i=0;i<n;i++){
        Interval top = s.top();
        if(top.end < A[i].start){
            s.push(A[i]);
        }else if(top.end < A[i].end){
            top.end = A[i].end;
            s.pop();
            s.push(top);
        }
    }
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    reverse(begin(v), end(v));
    return v;
}
