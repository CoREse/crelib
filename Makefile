CC=g++
AR=ar
CPPFLAGS= -Wall -O3
LDFLAGS=
LIBS=

CREUI_DIR=creui
CREUI_OBJS=$(CREUI_DIR)/ui.o
CREUI_FILES=$(CREUI_DIR)/*
LIBCRE_OBJS=crelib.o $(CREUI_OBJS)
LIBCRE_HEADERS=crelib.h defines.h
SAMPLE_OBJS=samples/sample.o
LIBCRE=libcre.a

libs:$(LIBCRE)

all: $(LIBCRE) sample

$(LIBCRE):$(LIBCRE_OBJS)
	$(AR) -rc $@ $(LIBCRE_OBJS)

sample: $(SAMPLE_OBJS) $(LIBCRE)
	$(LINK.cpp) $^ -o $@

$(LIBCRE_OBJS):$(LIBCRE_HEADERS)

$(CREUI_OBJS): $(CREUI_FILES)
	cd $(CREUI_DIR) && make

clean:
	rm *.o *.a samples/*.o sample
