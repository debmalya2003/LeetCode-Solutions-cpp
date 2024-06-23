//367. Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        return num == pow(floor(sqrt(num)), 2);//takes square root
                                               //then the floor function ensures square root value is rounded to largest integer less than or equal to num
                                               //pow squares the result
    }
};