class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizz;
        
        int i;
        
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0)
                fizz.push_back("FizzBuzz");
            
            else if(i%3==0 && i%5!=0)
                fizz.push_back("Fizz");
            
            else if(i%3!=0 && i%5==0)
                fizz.push_back("Buzz");
            
            else {
                string str = to_string(i);
                fizz.push_back(str);
            }        
        }
        return fizz;
    }
};