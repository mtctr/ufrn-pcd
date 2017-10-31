#!/bin/bash
#SBATCH --job-name=mpi_trap_tree
#SBATCH --output=saidaj.out
#SBATCH --error=erroj.err
#SBATCH --nodes=2
#SBATCH --ntasks-per-node=16
#SBATCH --cpus-per-task=1
#SBATCH --time=0-0:5
mpicc -Wall -g -o mpi_trap_tree mpi_trap_tree.c
srun -n 1 ./mpi_trap_tree

