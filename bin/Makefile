sct:  ../src/sct_app.c libsct.so
	gcc -I../include -std=c99 -o sct ../src/sct_app.c ./libsct.so

libsct.so: ../src/sct_db.c ../src/sct_ac.c
	gcc -I../include -std=c99 -shared -fPIC -o libsct.so ../src/sct_db.c ../src/sct_ac.c
