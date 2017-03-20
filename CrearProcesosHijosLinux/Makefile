.phony: clean

EXECS = CrearUnHijo CrearUnHijo2 CrearUnHijo3 CrearUnHijo4

all: $(EXECS)

CrearUnHijo: CrearUnHijo.o
	$(CXX) -o $@ $<

CrearUnHijo2: CrearUnHijo2.o
	$(CXX) -o $@ $<

CrearUnHijo3: CrearUnHijo3.o
	$(CXX) -o $@ $<

CrearUnHijo4: CrearUnHijo4.o
	$(CXX) -o $@ $<

clean:
	rm -f *.cpp~
	rm -f *.o
	rm -f $(EXECS)
