CC=g++

CFLAGS=-Ofast -march=native -mtune=native -std=c++11

LDFLAGS=

EXEC=main

SRC=./src/Format/CBitmap.cpp   \
    ./src/Image/CImage.cpp     \
    ./src/Image/CLigne.cpp     \
    ./src/Image/CPixel.cpp     \
    ./src/Image/Ligne.cpp      \
    ./src/Image/Forme.cpp      \
    ./src/Image/Rectangle.cpp  \
    ./src/Image/Carre.cpp      \
    ./src/Image/RectangleS.cpp \
    ./src/Image/CarreS.cpp     \
    ./src/Image/Point.cpp      \
	./src/Image/Cercle.cpp     \
	./src/Image/CercleS.cpp    \
    ./src/main.cpp

OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

main: $(OBJ)
	$(CC) $(CFLAGS) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean mrproper

clean:
	find ./bin -name main -exec rm {} \;
	find ./src -name *.o  -exec rm {} \;

mrproper: clean
	rm $(EXEC)
