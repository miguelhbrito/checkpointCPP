class MovingAverage {
public:
    int k;
    double sum = 0;
    deque<int> elements;
    MovingAverage(int size) {
        k = size;
    }    
    double next(int val) {
        elements.push_back(val);
        sum += val;
        if(elements.size()>k){
            sum -= elements.front();
            elements.pop_front();
        }
        int sz = min((int)elements.size(),k);
        return sum/sz;
    }
};
