CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=OpenDoors

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

