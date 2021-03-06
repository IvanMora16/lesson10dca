# Makefile

DESTDIR=. 
PROG=calculadora

all: $(PROG)

$(PROG): $(PROG).cc $(PROG).h main.cc
	g++ -Wall $(PROG).cc $(PROG).h main.cc -o $@

install: $(PROG)
	mkdir -p $(DESTDIR)/usr/bin 
	cp $(PROG) $(DESTDIR)/usr/bin/

clean: 
	rm -f *~ $(PROG) *.o

.PHONY: clean install all
