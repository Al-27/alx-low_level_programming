void print_alphabet(){
	
	int i,end;
	i ='a';
	end = '\n';
	while(1){
		
		if(i > 'z'){
			i = end;
		}
		putchar((char)i);
		
		if(i==end)
			break;
		i++;		
	}
	
}
