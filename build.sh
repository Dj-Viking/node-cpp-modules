g++ -I"$HOME/projects/node/src" \
	-I"$HOME/projects/node/deps/v8/include" \
	-std=c++23 \
	-fPIC \
	-o hello.node \
	-shared hello.cpp
