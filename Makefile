q:
	g++ -std=gnu++11 src/q.cpp -o bin/q
args:
	g++ -std=gnu++11 src/args.cpp -o bin/args
stat:
	perf stat ./bin/q
	perf stat ./bin/args
val:
	valgrind --tool=callgrind .bin/q
	valgrind --tool=callgrind .bin/args
clean:
	if [ -f .bin/q ]; then  rm .bin/q; fi
	if [ -f .bin/args ]; then  rm .bin/args; fi

