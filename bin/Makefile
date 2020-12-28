sct:  ../src/sct_application.c libsct.so
	gcc -I../include -std=c99 -o sct ../src/sct_application.c ./libsct.so

libsct.so: ../src/sct_database_profile.c ../src/sct_tools.c
	gcc -I../include -std=c99 -shared -fPIC -o libsct.so ../src/sct_database_profile.c ../src/sct_tools.c
