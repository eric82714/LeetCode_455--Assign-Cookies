void sort(int* arr, int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    if(gSize == 0 || sSize == 0) return 0;

    sort(g, gSize);
	sort(s, sSize);
    int result = 0;
    int child_id = 0;
        
    for(int i = 0; i < sSize; i++) {
        if(child_id >= gSize) return result;
        if(s[i] >= g[child_id]) {
            result ++;
            child_id ++;
        }
    }
        
    return result;
}
