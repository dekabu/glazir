static: src/glazir.o
	ar rcs libglazir.a src/glazir.o

src/glazir.o: src/glazir.h src/main.cpp 
	$(CXX) $(CXXFLAGS) src/main.cpp -c -o src/glazir.o
