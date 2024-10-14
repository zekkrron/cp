vector<int> z(string &str){
        int length = str.size();
        vector<int> zv(length);
        int left = 0, right = 0;

        for(int i = 1; i < length; i++){
            if(i <= right){
                zv[i] = min(zv[i-left], right + 1 - i);
            }
            while(i + zv[i] < length &&
            str[zv[i]] == str[i + zv[i]]){
                zv[i]++;
            }
            if(i + zv[i] - 1 > right){
                left = i;
                right = i + zv[i] - 1;
            }
        }

        return zv;
}