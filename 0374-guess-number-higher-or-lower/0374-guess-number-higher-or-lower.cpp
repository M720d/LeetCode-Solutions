class Solution {
public:
    int guessNumber(int n) {
        int left{1}, right{n}, middle{n/2};

        while (left<=right) {
            int soln = guess(middle);
            if (!soln) return middle;
            left = soln<0 ? left:middle+1;
            right = soln<0 ? middle-1:right;
            middle = left+(right-left)/2;
        }

        return -1;
    }
};