ifeq ($(PREFIX),)
	PREFIX := /usr/local
endif

drop:
	cc drop.c -o drop

install: drop
		install -m 755 drop $(PREFIX)/bin/

.PHONY: clean

clean:
	rm drop
