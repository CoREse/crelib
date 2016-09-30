CC=g++
AR=ar
CPPFLAGS= -Wall -O3
LDFLAGS=
LIBS=

LIBCRE_OBJS=crelib.o

libcre.a:$(LIBCRE_OBJS)
	$(AR) -rc $@ $(LIBCRE_OBJS)
