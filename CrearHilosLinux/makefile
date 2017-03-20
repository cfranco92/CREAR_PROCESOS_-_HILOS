EXEC = hilosANivelKernel hilosANivelUsuario
CXXFLAGS =
LDFLAGS = -lpthread

all: $(EXEC)

hilosANivelKernel: hilosANivelKernel.o
	$(CXX)  -o $@ $<

hilosANivelUsuario: hilosANivelUsuario.o
	$(CXX) -o $@ $< $(LDFLAGS)

clean:
	rm -f *.cpp~ *.o
	rm -f $(EXEC)
