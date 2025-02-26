CC = g++
CFLAGS = -framework OpenGL -framework GLUT

all: Triangle Lines LineStrip Square Penguin

Triangle: Triangle.cpp
	$(CC) -o Triangle Triangle.cpp $(CFLAGS)

Lines: Lines.cpp
	$(CC) -o Lines Lines.cpp $(CFLAGS)

LineStrip: Line\ Strip.cpp
	$(CC) -o LineStrip Line\ Strip.cpp $(CFLAGS)

Square: Square.cpp
	$(CC) -o Square Square.cpp $(CFLAGS)

Penguin: Penguin.cpp
	$(CC) -o Penguin Penguin.cpp $(CFLAGS)

clean:
	rm -f Triangle Lines LineStrip Square Penguin