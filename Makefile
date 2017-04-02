q:
	g++ -std=c++11 q.cpp -o q
args:
	g++ -std=c++11 args.cpp -o args
stat:
	perf stat ./q
val:
	valgrind --tool=callgrind ./q
clean:
	if [ -f ./q ]; then  rm ./q; fi

