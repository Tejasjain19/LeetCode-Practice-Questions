class CustomStack {
public:
    vector<int> arr;
    int i=0;
    CustomStack(int maxSize) {
        arr.resize(maxSize);
        return ;
    }
    
    void push(int x) {
        if(i==arr.size()){
            return;
        }
        arr[i] = x;
        i++;
        return;
    }
    
    int pop() {
        i--;
        if(i<0){
            i=0;
            return -1;
        }
        return arr[i];
    }
    
    void increment(int k, int val) {
        for(int i=0;i<(min((int)arr.size(),k));i++){
            arr[i] += val;
        }
        return;
    }
};