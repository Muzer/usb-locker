CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp locker.cpp locker.h gui.cpp gui.h lin_funcs.cpp lin_funcs.h win_funcs.cpp win_funcs.h mac_funcs.cpp mac_funcs.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=USBLocker

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

