public:
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> chunk;
        strList[idKey] = value;
        while(!strList[curr].empty()){
            chunk.push_back(strList[curr]);
            curr++;
        }
        return chunk;
    }

private:
    string strList[1001];
    int curr = 1;
};
