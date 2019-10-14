CC=cc
CXX=c++

SOURCES= note.cc\
	nesapu.cc \
	byte.cc \
	dmcsample.cc \
	noteduration.cc \

OBJS= note.o\
	nesapu.o \
	byte.o \
	dmcsample.o \
	noteduration.o \

SDLSOURCES = gfx/sdl_core/screen.cc \
	gfx/sdl_core/sdl_screen.cc \
	gfx/sdl_core/sdl.cc \
	
SDLOBJS = gfx/screen.o \
	gfx/sdl_screen.o \
	gfx/sdl.o \
	

all:  main

main:
	$(CXX) `sdl-config --cflags` -c $(SDLSOURCES)
	$(CXX) `sdl-config --cflags` -c $(SOURCES)
	$(CXX) `sdl-config --cflags` -c main.cc 
	$(CXX) `sdl-config --libs` -lSDL_image -o nessoundstudio main.o $(OBJS)

sdl: $(SDLOBJS)  
	$(CXX) `sdl-config --cflags` -c $<  

clean:
	rm -f *.o gfx/*.o gfx/sdl_core/*.o gfx/allegro5core/*.o nessoundstudio nessoundstudio.core

