# Rule untuk compile dan run tanpa menambahkan .c
%: 
	gcc -o $@ $@.c && .\\$@.exe