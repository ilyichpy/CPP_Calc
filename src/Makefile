.PHONY: all calc

FLAGS=-lstdc++ -std=c++17
GTEST=-lgtest -lpthread -lgtest_main
SOURCE=model/*.cc controller/*.cc
HEADERS=model/*.h
TESTS=tests/*_test.cc
EXECUTABLE=model.out
UNAME:=$(shell uname -s) 

ifeq ($(UNAME),Linux ) 
	GXX=g++ -std=c++17
	OPEN_CMD=xdg-open # команда для открытия отчета
	ADD_LIB=-lm -lrt -lpthread #-lsubunit # дополнительные библиотеки
	BREW=/home/darkwolf/homebrew
	SYSTEM=-D OS_LINUX
endif
ifeq ($(UNAME),Darwin ) 
	GXX=gcc -std=c++17
	OPEN_CMD=open
	ADD_LIB=
	BREW=${HOME}/homebrew
	SYSTEM=-D OS_MAC
endif

all: clean test

style:
	clang-format -style=google -i $(TESTS) $(SOURCE) $(HEADERS)

test: clean
	$(GXX) $(SYSTEM) $(SOURCE) $(TESTS) -lstdc++ $(ADD_LIB) -o $(EXECUTABLE) $(GTEST)
	./$(EXECUTABLE)

mem: test
# ifeq ($(UNAME),Linux )
	valgrind -s --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all --tool=memcheck ./$(EXECUTABLE)
# else
# 	leaks --atExit -- ./$(EXECUTABLE)
# endif

build:
	mkdir build
	cd build && qmake ../calc2_0 && make

install: build
	mv build/calc2_0.app ~/Desktop 

uninstall:
	rm -rf build 
	rm -rf ~/Desktop/calc2_0.app

clean:
	rm -rf *.a objects $(EXECUTABLE) *.o
	rm -rf html latex build dist

dvi:
	doxygen documentation_settings
	${OPEN_CMD} html/index.html

manual.html: manual.texi
	makeinfo --no-split --html manual.texi

manual.dvi: manual.html
	texi2dvi manual.texi

dist: build
	mkdir dist
	cp -R build/calc2_0.app dist
	cd dist && tar -cvzf calc2_0.tgz calc2_0.app
	rm -rf dist/calc2_0.app

open: install
	open $(APP)
