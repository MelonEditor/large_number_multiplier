
short *longIntMultiply(short *num1, short *num2, int size1, int size2, int accuracy){
    //initialization
    int size = size1 + size2;
    int temp;
    short *res = (short*)calloc(size, sizeof(short)), carry = 0;
    //calculating product
    for(int i = size1 - 1, l = 1, m = 0; i >= 0; --i, ++l){
        for(int j = size2 - 1, k = size - l; j >= 0; --j, --k){
            temp = num1[i] * num2[j] + res[k] + carry;
            res[k] = temp % 10;
            carry = temp / 10;
            m = k - 1;
        }
        res[m] = carry;
        carry = 0;
    }
    //refining result: 
    //truncating result to match expected accuracy; 
    //deleting unnecessary zeroes
    short *res2 = (short*)calloc(accuracy, sizeof(short));
    for(int i = 0, k = 0, flag = 0; i < size && k < accuracy; ++i){ 
        if(!flag && res[i] < 1){ continue; }
        else{ flag = 1; }
        res2[k++] = res[i];
    }
    free(res);
    return res2;
}
