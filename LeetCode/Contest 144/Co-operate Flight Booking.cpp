class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> res(n+1, 0);
        int start, end, booked;
        for(int i = 0; i < bookings.size(); i++){
            start = bookings[i][0]-1;
            end = bookings[i][1];
            booked = bookings[i][2];
            res[start] += booked;
            res[end] += -booked;
        }
        
        for(int i = 1; i < res.size(); i++){
            res[i] += res[i-1];
        }
        res.pop_back();
        return res;
    }
};