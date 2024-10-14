int binpow(int a, int b){
    int result = 1;
    while (b) {
        if (b & 1){
            result = (result * a) % mod1;
        }
        a = (a * a) % mod1;
        b >>= 1;
    }
    return result;
}