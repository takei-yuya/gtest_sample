
.PHONY: all
all: main test

main: main.o some_lib.o
	g++ -o $@ $^

gtest-all.o: fused_gtest/gtest/gtest-all.cc
	g++ -c -o $@ $^ -Ifused_gtest

gtest_main.o: fused_gtest/gtest/gtest_main.cc
	g++ -c -o $@ $^ -Ifused_gtest

test.o: test.cpp
	g++ -c -o $@ $^ -Ifused_gtest

test: gtest_main.o gtest-all.o test.o some_lib.o
	g++ -o $@ $^ -lpthread

.PHONY: clean
clean:
	$(RM) main test
	$(RM) main.o some_lib.o gtest-all.o gtest_main.o test.o test.o
