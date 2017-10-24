CC = mpicc
CFLAGS = -g -Wall
ODIR=obj

MPI_U2 = mpi_trap_tree.c

OUTPUTS = $(basename $(MPI_U2))

.PHONY: all clean

all: $(addprefix bin/,$(basename $(MPI_U2)))

bin/%: %.c bin
	$(CC) $< -o $@ $(CFLAGS)

clean:
	-rm -rf bin

bin:
	-@mkdir bin
