public:
    OrderedStream(int n) {
        curr = 1;
        strList.resize(n+2);
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
    vector<string> strList;
    int curr;