CC = mpicc
CFLAGS = -g -Wall -std=c99
ODIR=obj

MPI_U2 = mpi_mat_vect_mult.c \
					mpi_mat_vect_mult_col.c

OUTPUTS = $(basename $(MPI_U2))

.PHONY: all clean

all: $(addprefix bin/,$(basename $(MPI_U2)))

bin/%: %.c bin
	$(CC) $< -o $@ $(CFLAGS)

clean:
	-rm -rf bin

bin:
	-@mkdir bin
