CC="cc"
CXX="c++"

OBJS= note.o\
	nesapu.o \
	byte.o \
	dmcsample.o \
	noteduration.o \
	screen.o \

all: main

main: $(OBJS) main.o
	$(CXX) `sdl-config --libs` -lSDL_image -o nessoundstudio main.o $(OBJS)

clean:
	rm -f *.o nessoundstudio nessoundstudio.core

.cc.o:
	$(CXX) `sdl-config --cflags` -c $< 
