class OrderedStream {
public:
    OrderedStream(int n) {
        for (int i =0; i < n; ++i) res.push_back("");
        ptr = 0;
    }
    
    vector<string> insert(int id, string value) {
        id--;
        res[id] = value;
        vector<string> t;
        if (id == ptr) {
            for (int i = id; i < res.size(); ++i) {
                if (res[i] == "") break;
                t.push_back(res[i]);
                ptr = i;
            }
            ptr++;
        }
        return t;
    }
private:
    vector<string> res;
    int ptr;
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */