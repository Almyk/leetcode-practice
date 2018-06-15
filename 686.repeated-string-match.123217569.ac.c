int failure[10000];
int howmanyfails[10000] = {0};

void fail(char *pat){
	int n = strlen(pat);
	int i;
	failure[0] = 0;
	
	for(int j=1; j<n; j++){
		i = failure[j-1];
		while((pat[j] != pat[i]) && (i > 0))
			i = failure[i-1];
		if(pat[j] == pat[i])
			failure[j] = i + 1;
		else failure[j] = 0;
	}
}

int pmatch(char *string, char *pat){
	int i = 0, j = 0;
	int lens = strlen(string);
	int lenp = strlen(pat);
    int repeats = 1;
    
	//while(i < lens && j < lenp){
    while(j < lenp && repeats < 32766){
        if(i == lens){
            i = 0;
            repeats++;
        }
		if(string[i] == pat[j]){
			i++; j++;
		}
		else if(j == 0) i++;
		else{
            howmanyfails[j] += 1;
            if(howmanyfails[j] == 10) break; // stops if it have been wrong 10 times at same letter
            j = failure[j-1];
        }
	}
	return ((j == lenp) ? repeats : -1); // returns position, need to return repetitions. -fixed
}

int repeatedStringMatch(char* A, char* B) {
    int result;
    fail(B);
    result = pmatch(A, B);
    return result;
}
