class MedianFinder {
public:
 priority_queue<int> l_max;
    priority_queue<int,vector<int>,greater<int>> r_min;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
     if(l_max.empty() || l_max.top()>num)
       l_max.push(num); 
       else
        r_min.push(num);  
     if(abs((int)l_max.size() - (int)r_min.size())>1){
        r_min.push(l_max.top());
        l_max.pop();
     }
     else if(l_max.size()<r_min.size()){
     l_max.push(r_min.top());
     r_min.pop();
    }
    }
    
    double findMedian() {
      if(l_max.size()==r_min.size()){
       double ans=(l_max.top()+r_min.top())/2.0;
        return ans;
      }
       return l_max.top(); 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */