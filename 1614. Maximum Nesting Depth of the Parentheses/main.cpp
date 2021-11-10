int maxDepth(string s) {
	int depth = 0, max_depth = 0;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(') {
			depth++;
			if(depth > max_depth) max_depth = depth;
		}
		else if(s[i] == ')') depth--;
	}
	return max_depth;
}