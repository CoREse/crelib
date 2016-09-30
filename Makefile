CC=g++
AR=ar
CPPFLAGS= -Wall -O3
LDFLAGS=
LIBS=

LIBCRE_OBJS=crelib.o
LIBCRE_HEADERS=crelib.h defines.h

all: libcre.a

libcre.a:$(LIBCRE_OBJS)
	$(AR) -rc $@ $(LIBCRE_OBJS)

$(LIBCRE_OBJS):$(LIBCRE_HEADERS)

clean:
	rm *.o *.a
